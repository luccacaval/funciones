#include <stdio.h>

void saludo(char *s) {
  printf("Hola %s\n", s);
}
int main(int argc, char *argv[]) {
  saludo(argv[1]);
  return 0;
}
