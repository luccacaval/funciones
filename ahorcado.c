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

int print_game() {

}

char get_answer() {
  char answer = getchar();
  return answer;
}

int main(void) {
  char *word = pick_word();
  printf("%s\n", word);
  int word_len = char_counter(word);
  char answer_word[word_len];
  int i = 0;
  while (i < word_len) {
    answer_word[i] = ' '
    i++;
  }
  int trys = 0;
  while (trys < 5) {
    char answer = get_answer()
    get_answer
  }
  return 0;
}
