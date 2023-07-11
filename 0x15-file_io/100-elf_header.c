#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void print_elf_header_info(char *filename);

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        exit(1);
    }

    char *filename = argv[1];
    print_elf_header_info(filename);

    return 0;
}

void print_elf_header_info(char *filename)
{
    int fd = open(filename, O_RDONLY);
    if (fd == -1)
    {
        perror("Error opening file");
        exit(1);
    }

    Elf64_Ehdr header;
    ssize_t bytes_read = read(fd, &header, sizeof(header));
    if (bytes_read == -1)
    {
        perror("Error reading file");
        exit(1);
    }

    if (bytes_read != sizeof(header) ||
        header.e_ident[EI_MAG0] != ELFMAG0 ||
        header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 ||
        header.e_ident[EI_MAG3] != ELFMAG3)
    {
        fprintf(stderr, "Error: Not an ELF file\n");
        exit(1);
    }

    printf("ELF Header:\n");
    printf(" Magic: %02x %02x %02x %02x\n",
           header.e_ident[EI_MAG0],
           header.e_ident[EI_MAG1],
           header.e_ident[EI_MAG2],
           header.e_ident[EI_MAG3]);
    printf(" Class: %s\n", header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf(" Data: %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
                         header.e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "Unknown");
    printf(" Version: %d\n", header.e_ident[EI_VERSION]);
    printf(" OS/ABI: %d\n", header.e_ident[EI_OSABI]);
    printf(" ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);
    printf(" Type: %d\n", header.e_type);
    printf(" Entry point address: %lx\n", header.e_entry);

    close(fd);
}

