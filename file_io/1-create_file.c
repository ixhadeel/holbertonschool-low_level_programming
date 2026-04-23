#include "main.h"

/**
 * create_file - creates a file with specific permissions
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n_wrote, len = 0;

	if (filename == NULL)
		return (-1);

	/* 1. Calculate length of text_content if it's not NULL */
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	/* 2. Open file: Create it, if exists Truncate it. Permissions: rw------- (0600) */
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* 3. Write content if there is any */
	if (text_content != NULL)
	{
		n_wrote = write(fd, text_content, len);
		if (n_wrote == -1 || n_wrote != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
