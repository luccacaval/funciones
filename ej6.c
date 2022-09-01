#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_num(int a, int b) {
  srand(time(NULL));
  return (rand() % b-a) + a;
}

int main(int argc, char const *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int num = random_num(a, b);
  printf("%d\n", num);
  return 0;
}
