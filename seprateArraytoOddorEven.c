#include<stdio.h>
void main (main){
     int arr[10],odd[10],even[10];
      int size,i,j=0,k=0;
     printf("Enter count of number you will insert ");
     scanf("%d",&size);

     for (i=0;i<size;i++){ //Enter Array Elemnt
           printf("Enter Element of Array ");
           scanf("%d",&arr[i]) ;
        }
        //Separate  array
     for (i=0;i<size;i++){
        if (arr[i]%2==0)//even
          {
            even[j]=arr[i];
            j++;// j contain size of even array
          }
        else{
              odd[k]=arr[i];
              k++; // k contain size of odd array
          }

     }
    printf("Odd Numbers \n");
    for(i=0;i<j;i++)
        printf("%d \n",odd[i]);
    printf("Even Numbers\n");
    for(i=0;i<k;i++)
        printf("%d \n",even[i]);

}
