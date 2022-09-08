#include <stdio.h>
#include <stdlib.h>

int validate(int min, int max, int input){
  if (input > min && input < max) {
    return 1;
  } else {
    return 0;
  }
}

int main(int argc, char const *argv[]) {
  int min = 1;
  int max = 10;
  int input = atoi(argv[1]);
  int result = validate(min, max, input);
  if (result) {
    printf("Dentro del rango\n");
  } else {
    printf("Fuera del rango\n");
  }
  return 0;
}
