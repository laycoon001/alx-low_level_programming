#include "main.h"

/**
 * create_file - creates a file
 * @filename: The name of the file to be created
 * @text_content: The content to be written to the file
 *
 * Return: 1 on success and 0 on error
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	long int write_result;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_descriptor < 0)
		return (-1);

	if (text_content)
	{
		write_result = write(file_descriptor, text_content, strlen(text_content));
		if (write_result < 0)
		{
			close(file_descriptor);
			return (-1);
		}
	}
	close(file_descriptor);

	return (1);
}
