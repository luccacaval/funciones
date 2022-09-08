#include <stdio.h>
#include <limits.h>

int arr_min(int arr[], int length){
  int min = INT_MAX;
  for (int i = 0; i < length; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }
  return min;
}

int arr_max(int arr[], int length){
  int max = INT_MIN;
  for (int i = 0; i < length; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}

float arr_avg(int arr[], int length){
  float avg = 0.0;
  for (int i = 0; i < length; i++) {
    avg += arr[i];
    printf("%.2f\n", avg);
   }
   avg = avg/length;
   return avg;
}

int main(void) {
  int arr[] = {3,8,7,9,1};
  int length = sizeof(arr) / sizeof(int);
  int min = arr_min(arr, length);
  int max = arr_max(arr, length);
  float avg = arr_avg(arr, length);
  printf("Min : %d\n", min);
  printf("Max : %d\n", max);
  printf("Avg : %.2f\n", avg);
  return 0;
}
