#include<stdio.h>

void sortedfun(int arr[],int size);
void main (main){
     int arr[100];
     int size,i;
     printf("Enter size ");
     scanf("%d",&size);
      for (i=0;i<size;i++){ //Enter Array Elemnt
           printf("Enter Element of Array [%d] :  ",i+1);
           scanf("%d",&arr[i]) ;
        }
       sortedfun(arr,size);
}

void sortedfun(int arr[],int size){
 int i,sorted,temp;
   do{
   sorted=1;
   for (i=0;i<size-1;i++){
    if(arr[i]>arr[i+1]){
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
         sorted =0;
      }
      }
   }while(sorted==0);

   printf("Array after sorted \n");
   for(i=0;i<size;i++)
            printf("[%d]after sorted  %d \n",i+1,arr[i]);
}
