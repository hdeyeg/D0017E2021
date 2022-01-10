#include <stdio.h>
#include <stdlib.h>

int arraySum(int arr[], int size) {
  
  int sum = 0, index;

  for(index = 0; index < size; ++index) {
    sum= sum + arr[index];  
  }

  return(sum);
}