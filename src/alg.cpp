// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int num = 0, mid = size/2;
  if (value >= arr[mid]) {
    for (int i = mid; i < size; i++) {
      if (arr[i] == value)
        num++;
    }
  }
  if (value <= arr[mid]) {
    for (int i = (mid - 1); i >= 0; i--) {
      if (arr[i] == value)
        num++;
    }
  }
  return num;
}
