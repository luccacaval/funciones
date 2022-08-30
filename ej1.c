#include <stdio.h>

int saludar(void) {
  printf("Hola");
  return 0;
}
int main(void) {
  int count = 0;
  while (count < 10) {
    saludar();
    count++;
  }
  return 0;
}
