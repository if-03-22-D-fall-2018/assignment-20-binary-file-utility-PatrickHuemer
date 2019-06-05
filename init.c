#include "stdio.h"
int initNumber = 1;

int main(int argc, char const *argv[]) {
  FILE* fd = fopen("students.dat", "w");
  fwrite(&initNumber, sizeof(int), sizeof(initNumber), fd);
  fclose(fd);
  return 0;
}
