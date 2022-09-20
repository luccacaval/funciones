#include <stdio.h>
#include <string.h>

void dragon(int n, char *instruccion) {
  printf("Otra funcion n = %d\n", n);
  int i = 0;
  int len = strlen(instruccion);
  if (n == 0) {
    strcat(instruccion, "f");
    return;
  } else {
    while (i != len / 2) {
      printf("Entro al loop i = %d\n", i);
      if (instruccion[i] == 'f') {
        strcat(instruccion, "f");
        printf("Hay una f\n");
      } else if (instruccion[i] == 'l') {
        strcat(instruccion, "r");
        printf("Hay una l\n");
      } else {
        strcat(instruccion, "l");
        printf("Hay una r\n");
      }
      i++;
    }
  }
  strcat(instruccion, "l");
  dragon(n - 1, instruccion);
}

int main(int argc, char *argv[]) {
  char instruccion[1000] = "";
  dragon(1, instruccion);
  printf("%s\n", instruccion);
  return 0;
}
