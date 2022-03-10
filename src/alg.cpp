// Copyright 2021 NNTU-CS
#include <algorithm>

int cbinsearch(int *arr, int size, int value) {
  int num = 0, mid = size/2;
  sort(arr, size);
  if (mid < size) {
    for (int i = mid; i < size; i++) {
      if (arr[i] == value)
        num++;
    }
  } else if (mid > size) {
    for (int i = mid; i >= 0; i++) {
      if (arr[i] == value)
        num++;
    }
  } else if (mid == size) {
    for (int i = 0; i < size; i++) {
      if (arr[i] == value)
        num++;   
    }
  }
  return num;
}
