#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>

int main(void) {
  struct stat directory_info;

  // Check if the db directory exists.
  if (stat("db", &directory_info) != 0) {
    // The db directory does not exist, so create it.
    mkdir("db", 0777);
  }

  // Check if the student directory exists.
  if (stat("db/student", &directory_info) != 0) {
    // The student directory does not exist, so create it.
    mkdir("db/student", 0777);
  }

  // Check if the key directory exists.
  if (stat("db/key", &directory_info) != 0) {
    // The key directory does not exist, so create it.
    mkdir("db/key", 0777);
  }

  return 0;
}
