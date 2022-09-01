#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char * pick_word(){
  srand(time(NULL));
  char *list[] = {
    "Lucca",
    "Fran",
    "Goku",
    "Gohan"
  };
  char *word = list[rand() % 4];
  return word;
}

int char_counter (char word[]) {
  int i = 0;
  while (word[i] != 0) {
    i++;
  }
  return i;
}

int print_game(int len, char answer, char *word, int trys, char answer_word[]) {
  for (size_t i = 0; i < len; i++) {
    if (answer == word[i]) {
      answer_word[i] = answer
      printf("%c", answer[i]);
    } else if(answer_word[i] != )
    else {
      printf("_ ");
    }
  }
  printf("Intentos %d/5\n", trys);
}

char get_answer(int word_len) {
  char answer = getchar()
}

int main(void) {
  char *word = pick_word();
  printf("%s\n", word);
  int word_len = char_counter(word);
  char answer;
  int trys = 0;
  char answer_word[word_len];
  print_game(word_len, answer, word, trys);
  while (trys < 6) {
    printf("Ingrese una palabra\n");
    answer = get_answer(word_len);
    print_game(word_len, answer, word, trys, answer_word);
  }
  return 0;
}
