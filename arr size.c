//program that inputs two arrays and save the sum of corresponding elements of these arrays in a third array and prints them.
#include<stdio.h>
int main()
{
    int size;
    printf("enter the array size:");
    scanf("%d", &size);
    int arr1[size];
    int arr2[size];
    int resultArr[size];

    printf("\nEnter %d numbers:-", size);
    for(int x=0; x< size; x++)
       scanf("%d",&arr1[x]);

       printf("\nEnter %d numbers:-", size);
       for(int x=0; x<size, x++){
       resultArr[x]= arr1[x] +arr2[x];
       }
       for(int x=0; x<size, x++){
       printf("%d", resultArr[x]);
       }
       printf("\n");
       return 0;
}