#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * create_file - creates a new file with the specified content.
 * @filename: the name of the file to create.
 * @text_content: the content of the file to create.
 *
 * Return: 1 if the file was successfully created, -1 otherwise.
 */
int create_file(const char *filename, char *text_content)
{
    int fd, ret = -1;
    
    if (filename == NULL)
        return (-1);
    
    fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
    if (fd != -1)
    {
        if (text_content == NULL)
            text_content = "";
        ret = write(fd, text_content, strlen(text_content));
        if (ret == -1)
            ret = -1;
        close(fd);
    }
    
    return (ret == -1 ? -1 : 1);
}

