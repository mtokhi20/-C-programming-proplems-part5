#include<stdio.h>
int sumtion(int arr[], int len);
void main (main){
     int arr[100];
     int size,i,sum=0;
     printf("Enter size ");
     scanf("%d",&size);
      for (i=0;i<size;i++){ //Enter Array Elemnt
           printf("Enter Element of Array [%d] :  ",i+1);
           scanf("%d",&arr[i]) ;
        }
      sum=sumtion(arr,size);
      printf("the sumation of array is %d \n",sum);
}
int sumtion(int arr[], int size)
{
    /* Recursion base condition */
    if (size <= 0)
    {
        return 0;
    }
    return (sumtion(arr, size - 1) + arr[size - 1]);
}
