#include <stdio.h>
#include <limits.h>

int arr_min (int arr[], int arr_len) {
  int min = INT_MAX;
  for (size_t i = 0; i < arr_len; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }
  return min;
}

int arr_max (int arr[], int arr_len) {
  int max = INT_MIN;
  for (size_t i = 0; i < arr_len; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}

int arr_prom (int arr[], int arr_len) {
  int prom = 0;
  for (size_t i = 0; i < arr_len; i++) {
    prom += arr[i];
  }
  prom = prom / arr_len;
  return prom;
}

int main(void) {
  int arr[] = {1,5,8,10};
  int min = arr_min(arr, 4);
  int max = arr_max(arr, 4);
  int prom = arr_prom(arr, 4);
  printf("%d\n", min);
  printf("%d\n", max);
  printf("%d\n", prom);
  return 0;
}
