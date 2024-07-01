#include <fcntl.h>
#include <sys/mman.h>
#include <stdio.h>
#include <iostream>

int main() {
  // reading
  int file_read = open("test.dat", O_RDONLY, 0);
  // writing
  int file_write = open("test.dat", O_CREAT | O_RDWR,
                      S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP);
  posix_fallocate(file_write, 0, 4096);

  char *buffer = reinterpret_cast<char*> (mmap(NULL, 4096, PROT_WRITE, MAP_SHARED, file_write, 0));

  for (int i = 0; i < 4096; i++) {
    // Change each upper-case A to lowercase in the file
    if (buffer[i] == 'A') {
      buffer[i] = 'a';
    }
  }
}
