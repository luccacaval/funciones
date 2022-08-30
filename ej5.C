#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double root[2];
void roots(double a, double b, double c) {
  double discrim =b*b - 4*a*c;
  discrim = sqrt(discrim);
  root[0] = (-b + discrim) / (2*a);
  root[1] = (-b - discrim) / (2*a);
}

int main(int argc, char const *argv[]) {
  double a = atof(argv[1]);
  double b = atof(argv[2]);
  double c = atof(argv[3]);
  printf("Raiz 1 = %0.2f\n Raiz 2 = %0.2f \n", root[0], root[1]);
  return 0;
}
