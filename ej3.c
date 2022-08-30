#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool es_igual(int a, int b, int c) {
  if (a == b && a == c) {
    return true;
  } else {
    return false;
  }
}

int main(int argc, char const *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  bool resultado = es_igual(a,b,c);
  printf("%s\n",resultado ?"true":"false");
  return 0;
}
