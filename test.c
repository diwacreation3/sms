#include <stdio.h>

int main() {
  // Get the file names.
  printf("Enter the source file name: ");
  char source_file_name[100];
  fgets(source_file_name, 100, stdin);
  source_file_name[strlen(source_file_name) - 1] = '\0';

  printf("Enter the destination file name: ");
  char destination_file_name[100];
  fgets(destination_file_name, 100, stdin);
  destination_file_name[strlen(destination_file_name) - 1] = '\0';

  // Open the source file.
  FILE *source_file = fopen(source_file_name, "r");
  if (source_file == NULL) {
    printf("The source file does not exist.\n");
    
    return 1;
  }

  // Open the destination file.
  FILE *destination_file = fopen(destination_file_name, "w");
  if (destination_file == NULL) {
    printf("The destination file cannot be created.\n");
    return 1;
  }

  // Copy the content from the source file to the destination file.
  char ch;
  while ((ch = fgetc(source_file)) != EOF) {
    fputc(ch, destination_file);
  }

  // Close the files.
  fclose(source_file);
  fclose(destination_file);

  printf("File copied successfully.\n");

  return 0;
}
