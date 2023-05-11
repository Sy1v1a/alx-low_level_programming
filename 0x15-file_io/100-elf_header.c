#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

#define BUF_SIZE 64

int main(int argc, char **argv) {
    int i;
    char *buf;
    int fd;
    ssize_t num_bytes;
    int e_indent;


	if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        fprintf(stderr, "Error: could not open file '%s'\n", argv[1]);
        exit(98);
    }

     buf = [BUF_SIZE];
    num_bytes = read(fd, buf, BUF_SIZE);
    if (num_bytes < sizeof(Elf64_Ehdr)) {
        fprintf(stderr, "Error: file '%s' is not an ELF file\n", argv[1]);
        exit(98);
    }
    Elf64_Ehdr *hdr;
    hdr = (Elf64_Ehdr*)buf;

    if (hdr->e_ident[EI_MAG0] != ELFMAG0 ||
        hdr->e_ident[EI_MAG1] != ELFMAG1 ||
        hdr->e_ident[EI_MAG2] != ELFMAG2 ||
        hdr->e_ident[EI_MAG3] != ELFMAG3) {
        fprintf(stderr, "Error: file '%s' is not an ELF file\n", argv[1]);
        exit(98);
    }

    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", hdr->e_ident[i]);
    }
    printf("\n");

    printf("  Class:                             ");
    switch (hdr->e_ident[EI_CLASS]) {
        case ELFCLASSNONE:
            printf("none\n");
            break;
        case ELFCLASS32:
            printf("ELF32\n");
            break;
        case ELFCLASS64:
            printf("ELF64\n");
            break;
        default:
            printf("<unknown: %d>\n", hdr->e_ident[EI_CLASS]);
            break;
    }

    printf("  Data:                              ");
    switch (hdr->e_ident[EI_DATA]) {
        case ELFDATANONE:
            printf("none\n");
            break;
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("<unknown: %d>\n", hdr->e_ident[EI_DATA]);
            break;
    }

    printf("  Version:      %d\n", hdr->e_ident[EI_VERSION]);

    printf("  OS/ABI:                            ");
    switch (hdr->e_ident[EI_OSABI]) {
        case ELFOSABI_NONE:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_HPUX:
            printf("UNIX - HP-UX\n");
            break;
        case ELFOSABI_NETBSD:
            printf("UNIX - NetBSD\n");
            break;
        case ELFOSABI_LINUX:
            printf("UNIX - Linux\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("UNIX - Solaris\n");
            break;
        case ELFOSABI_AIX:
            printf("UNIX - AIX\n");
            break;
        case ELFOSABI_IRIX:
            printf("UNIX - IRIX\n");
            break;
        case ELFOSABI_FREEBSD:           
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}
