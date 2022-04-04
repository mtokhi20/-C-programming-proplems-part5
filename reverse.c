#include<stdio.h>

void main (main){
     int arr[100];
     int size,i;
     printf("Enter size ");
     scanf("%d",&size);
      for (i=0;i<size;i++){ //Enter Array Elemnt
           printf("Enter Element of Array [%d] :  ",i+1);
           scanf("%d",&arr[i]) ;
        }
     printf("------------------------------------");
     for(i=size;i>=0;i--)
        printf("the values of array is [%d] :  %d \n",i+1,arr[i]);
}
