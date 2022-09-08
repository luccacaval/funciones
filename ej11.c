#include <stdio.h>
#include <string.h>

int string_compare(char* str1, char* str2) {
  return strcmp(str1, str2);
}

int main(int argc, char *argv[]) {
  char *str1 = argv[1];
  char *str2 = argv[2];
  int are_equal = string_compare(str1, str2);
  if (are_equal == 0) {
    printf("Son iguales\n");
  } else {
    printf("No son iguales\n");
  }
  return 0;
}
