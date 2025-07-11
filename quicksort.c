#include<stdio.h>

void swap(int *a , int *b)  {

  int temp = *a;
  *a = *b;
  *b = temp;
}

int partition(int arr[] , int low , int high)  {
  int pivot = arr[low];
  int i = low + 1;
  int j = high;

  while(i<j) {

     while(i <= high && arr[i] <= pivot) 
      i++;
      while(j >= low && arr[j] > pivot)
      j--;

      if(i<j) 
      swap(&arr[i], &arr[j]);

  }

  swap(&arr[low], &arr[j]);
  return j;
}


void quicksort(int arr[] , int low  , int high) {

  if(low < high) {
    int pi = partition(arr , low , high);

    quicksort(arr , low , pi-1);
    quicksort(arr , pi +1 , high);
  }
}


int main()  {
  int arr[] = {10, 7, 8, 9, 1, 5};
  int n = sizeof(arr) / sizeof(arr[0]);

  quicksort(arr, 0, n - 1);

  printf("Sorted array: \n");
  for(int i = 0; i < n; i++)
    printf("%d ", arr[i]);
  
  printf("\n");
  
  return 0;
}