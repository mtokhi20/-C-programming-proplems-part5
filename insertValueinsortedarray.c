#include<stdio.h>

void main (main){
     int arr[100];
     int size,i,postion,number;
     printf("Enter size ");
     scanf("%d",&size);
      for (i=0;i<size;i++){ //Enter Array Elemnt
           printf("Enter Element of Array [%d] :  ",i+1);
           scanf("%d",&arr[i]) ;
        }
      /* if(sortedfun(arr[size],size)==0)
       {
           printf("this array is not sorted  please try again \n");
           return 0;
       }*/

        printf("Enter Number  ");
        scanf("%d",&number);
         printf("Enter Postion ");
         scanf("%d",&postion);
         postion--;
         if (postion>size || postion<0)
            {
                printf("this postion is not allow \n");
                return 0;
            }
        else {
          for (i=size;i>=postion;i--){
            arr[i+1]=arr[i];
            }
          arr[postion]=number;
          size++;

          printf("size became %d \n",size);
          //print array
           for(i=0;i<size;i++)
                printf("[%d]after inserted  %d \n",i+1,arr[i]);
    }
}
