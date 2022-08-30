#include <stdio.h>
#include <stdlib.h>

int es_triangulo(int a, int b, int c) {
  if ((a + b) > c && (b + c) > a && (c + a) > b) {
    return 1;
  } else {
    return 0;
  }
}

int main(int argc, char const *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  int resultado = es_triangulo(a,b,c);
  printf("%s\n", resultado?"true":"false");
  return 0;
}
