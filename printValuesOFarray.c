#include<stdio.h>
 void printElemnt(int arr[],int size);
void main (main){
     int arr[100];
     int size,i,postion,number;
     printf("Enter size ");
     scanf("%d",&size);
      for (i=0;i<size;i++){ //Enter Array Elemnt
           printf("Enter Element of Array [%d] :  ",i+1);
           scanf("%d",&arr[i]) ;
        }
        printf("------------------------------------\n");
       printElemnt(arr,size);

}

 void printElemnt(int arr[],int size){
  int i;
     for(i=0;i<size;i++)
        printf("the values of array is [%d] :  %d \n",i+1,arr[i]);
}
