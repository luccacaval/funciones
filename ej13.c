#include <stdio.h>
#include <string.h>

int is_palindrome(char* str) {
  int len_max= strlen(str);
  int len_min= 0;
  char temp;
  len_max--;
  while (len_max != len_min) {
    if (str[len_max] != len_min) {
      return 0;
    }
    len_min++;
    len_max--;
  }
  return 1;
}

int main(int argc, char *argv[]) {
  char *str = argv[1];
  int palindrome = is_palindrome(str);
  if (is_palindrome) {
    printf("Es palindromo\n");
  } else {
    printf("No es palindrsomo\n");
  }
  return 0;
}
