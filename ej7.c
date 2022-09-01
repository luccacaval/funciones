#include <stdio.h>

void print_array(int a[], int lenght) {
  for (int i = 0; i < lenght; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

int main(int argc, char const *argv[]) {
  int a[] = {1,2,3,4};
  print_array(a, 4);
  return 0;
}
