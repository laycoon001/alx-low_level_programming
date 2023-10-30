#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: The name of the file to which text is appended 
 * @text_content: the content to be appended.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int text_len;
	int write_result;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);

	if (file_descriptor == -1)
		return (-1);

	if (text_content)
	{
		for (text_len = 0; text_content[text_len]; text_len++)
			;

		write_result = write(file_descriptor, text_content, text_len);

		if (write_result == -1)
			return (-1);
	}

	close(file_descriptor);

	return (1);
}
