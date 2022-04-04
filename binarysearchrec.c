#include<stdio.h>

void main (main){
     int arr[100];
     int size,i,key,lower,upper,pos;
     printf("Enter size ");
     scanf("%d",&size);
      for (i=0;i<size;i++){ //Enter Array Elemnt
           printf("Enter Element of Array [%d] :  ",i+1);
           scanf("%d",&arr[i]) ;
        }

      printf("Enter The Key ");
      scanf("%d",&key);
      lower=0;
      upper=size-1;
      pos=binarySearch(arr,size,key,lower,upper);
      printf("the postion is %d \n",pos+1);

}


int binarySearch(int arr[],int size,int key, int lower, int upper){
    int mid =(upper+lower)/2;
    int pos;
     if(lower>upper)
        return (-1);
     if(key==arr[mid])
        return mid;
     else{
        if(key>arr[mid])
          return (binarySearch(arr,size,key,mid+1,upper));
         else
            return (binarySearch(arr,size,key,lower,mid-1));
     }
}

