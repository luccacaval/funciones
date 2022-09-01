#include <stdio.h>

void to_higher_case (char *word) {
  int i = 0;
  while (word[i] != '\n') {
    if (word[i] >= 'a' && word[i] <= 'z') {
      word[i] -= 32;
    }
    i++;
  }
}

int main(int argc, char *argv[]) {
  char word[20];
  printf("Ingrese una palabra\n");
  fgets(word, 19, stdin);
  to_higher_case(word);
  printf("%s\n", word);
  return 0;
}
