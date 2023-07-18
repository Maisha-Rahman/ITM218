#include<stdio.h>

int main(){

int size, i, j;
printf("Size of array: ");
scanf("%d", &size);

int arr[size], rarr[size];
printf("Enter numbers: ");

for( i = 0; i < size; i++) {
     scanf("%d", &arr[i]);
  }

 for (i = size-1, j=0; i>=0, j<size; i--,j++){
       rarr[j]=arr[i];
    }
for( i = 0; i < size; i++) {
      printf("%d ", rarr[i]);
}
}


