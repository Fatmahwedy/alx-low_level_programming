#include <stdio.h>
#include "main.h"

int append_text_to_file(const char *filename, char *text_content) {
  if (filename == NULL) {
    return -1;
  }

  FILE *file = fopen(filename, "a");
  if (file == NULL) {
    return -1;
  }

  if (text_content != NULL) {
    fprintf(file, "%s", text_content);
  }

  fclose(file);

  return 1;
}

