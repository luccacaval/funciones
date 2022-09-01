#include <stdio.h>

int char_count(char *word) {
  int i = 0;
  while (word[i] != 0) {
    i++;
  }
  return i;
}

int main(int argc, char *argv[]) {
  char word[20];
  printf("Ingrese una palabra\n");
  scanf("%s", word);
  int len = char_count(word);
  printf("%d\n", len);
  return 0;
}
