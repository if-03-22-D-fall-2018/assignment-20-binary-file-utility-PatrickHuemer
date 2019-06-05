#include "stdio.h"
#include "stdlib.h"


int main(int argc, char const *argv[]) {
  int age = 0;
  int id;
  char firstName[64];
  char lastName[64];

  printf("Age: ");
  scanf("%d", &age);
  printf("First Name: ");
  scanf("%s", firstName);
  printf("Last Name: ");
  scanf("%s", lastName);

  FILE* fd = fopen("students.dat", "r");
  printf("checkpoint");
  fseek(fd, 0, SEEK_SET);
  fread(&id, sizeof(int), sizeof(int), fd);
  fclose(fd);

  fd = fopen("students.dat", "a");
  while (!feof(fd)) {
    fseek(fd, 1, SEEK_CUR);
  }
  fwrite(&id, sizeof(id), 1, fd);
  fclose(fd);
  return 0;
}
