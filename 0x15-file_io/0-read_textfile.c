#include "main.h"
/**
 * read_textfile -  a function that reads a text file and prints to standard output
 * @filename: file to be read
 * @letters : nuber of characters to print
 * return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r;
	ssize_t writ;
	ssize_t fd = 0;
	char *bufer;

	bufer = malloc(sizeof(char) * letters);
	if (bufer == NULL){
		close(fd);
		return (0);
	}

	fd = open(filename,O_RDONLY);
	if (fd == -1){
		return (0);
	}

	if (filename == NULL){
		return (0);
	}
	r = read(fd, bufer, letters);
	writ = write(STDOUT_FILENO, bufer, r);
	free(bufer);
	close(fd);
	return (writ);
}
