#include<stdio.h>

int main(){

int size, sum=0, i;
printf("Size of array: ");
scanf("%d", &size);

int arr[size];
printf("Enter numbers: ");
for( i = 0; i < size; i++) {
     scanf("%d", &arr[i]);
     sum=sum+arr[i];
  }
printf("SUM = %d",sum);





}
