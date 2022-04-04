#include<stdio.h>

void main (main){
     int arr[100];
     int size,i,Max;

     printf("Enter size ");
     scanf("%d",&size);
      for (i=0;i<size;i++){ //Enter Array Elemnt
           printf("Enter Element of Array [%d] :  ",i+1);
           scanf("%d",&arr[i]) ;
        }
       Max=arr[0];
       for(i=1;i<size;i++){

             if (Max<arr[i]){
             Max=arr[i];
                  }
        }
    printf("\n Max number is %d ",Max);


}


