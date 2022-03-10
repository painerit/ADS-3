// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int num = 0, mid = size/2;
  if (mid <= size) {
    for (int i = mid; i < size; i++) {
      if (arr[i] == value)
        num++;
    }
  }
  if (mid > size) {
    for (int i = mid; i >= 0; i--) {
      if (arr[i] == value)
        num++;
    }
  }
  return num;
}
