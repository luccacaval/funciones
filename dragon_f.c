#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char instruccion[1000] = "f";
  int len;
  for (int i = 0; i < 2; i++) {
    len = strlen(instruccion);
    printf("instruccion en la iteracion %d = %s longitud %d\n", i,instruccion, len);
    strcat(instruccion, "l");
    for (int j = 0; j < len / 2; j++) {
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
    }
  }
  printf("%s\n", instruccion);
  return 0;
}
