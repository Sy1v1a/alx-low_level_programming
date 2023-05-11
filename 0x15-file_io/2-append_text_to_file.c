#include "main.h"
/**
 * append_text_to_file - a function that appends text to the end of a line
 * @filename: name of the file
 * @text_content: terminating string to add to the end of file
 * return: -1 on failure 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op;
	int writ;
	int length = 0;
op = open(filename, O_WRONLY | O_APPEND);
if (op == -1)
	return (-1);
writ = write(op, text_content, length);
if (writ == -1)
	return (-1);
if (filename == NULL)
	return (-1);
if (text_content)
{
	for (length = 0; text_content[length];)
		
	length++;
}
close(op);
return (1);
}
