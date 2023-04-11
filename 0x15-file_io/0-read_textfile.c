#include "main.h"

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 * Return: the actual number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    ssize_t num_read, num_written, total_written = 0;
    char *buf = malloc(letters * sizeof(char));
    int fd;

    if (filename == NULL || buf == NULL)
        return (0);

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    num_read = read(fd, buf, letters);
    if (num_read == -1)
    {
        free(buf);
        close(fd);
        return (0);
    }

    num_written = write(STDOUT_FILENO, buf, num_read);
    if (num_written != num_read)
    {
        free(buf);
        close(fd);
        return (0);
    }

    total_written += num_written;

    free(buf);
    close(fd);
    return (total_written);
}

