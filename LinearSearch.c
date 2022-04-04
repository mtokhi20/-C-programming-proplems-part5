#include<stdio.h>
void main (main){
     int pos=-1;
     int key ;
     int size;
     int i;
     int arr[100];
     printf("Enter Size ");
     scanf("%d",&size);
     for (i=0;i<size;i++){
        printf("Enter Element [%d] :  ", i+1);
        scanf("%d",&arr[i]);
     }
      printf("Enter The Key ");
      scanf("%d",&key);

      //Search
      for (i=0;i<size;i++){
        if(arr[i]==key){
            pos=i;
            break;
        }
        }
        if(pos==-1)
            printf("this Element is not in Array \n");
        else
            printf("%d is locatd at pos %d \n",key,pos+1);




}
