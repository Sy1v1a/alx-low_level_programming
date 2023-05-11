#include "main.h"
/**
 * create_file - a function that creates a file
 * @filename: name of the file to be created
 * @text_content: a null terminated string to write to the file
 * return: if filename is NULL -1, if text_content is NULL return empty file
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int writ;
	int length = 0;
fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (fd == -1)
	return (-1);
writ = write(fd, text_content, length);
if (writ == -1)
	return (-1);
if (filename == NULL)
	return (-1);
if (text_content)
{
	for (length = 0; text_content[length];)
		length++;
}
close(fd);
return (1);
}
