#include "stdio.h"


int main(int argc, char const *argv[]) {
  int initNumber = 1;

  FILE* fd = fopen("students.dat", "w");
  fwrite(&initNumber, sizeof(int), sizeof(initNumber), fd);
  fclose(fd);
  return 0;
}
