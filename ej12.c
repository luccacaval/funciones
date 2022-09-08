#include <stdio.h>
#include <string.h>

void flip(char* str) {
  int len_max= strlen(str);
  int len_min= 0;
  char temp;
  len_max--;
  while (len_max != len_min) {
    temp = str[len_max];
    str[len_max] = str[len_min];
    str[len_min] = temp;
    len_min++;
    len_max--;
  }
}

int main(int argc, char *argv[]) {
  char *str = argv[1];
  flip(str);
  printf("%s\n", str);
  return 0;
}
