#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void swap(int a[], int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void print(int a[])
{
   for(int i=0; i<10; i++)
       {printf("%d", a[i]);
       printf(" ");}
}

int main()
{
    int a[10] = {1,3,5,7,9,2,4,6,8,10};
    int mid = sizeof(a)/sizeof(a[0])/2;
    int temp[10];

    int i = 0;
    int j =mid;
    int k =0;

    while(i<mid && j<10)
    {
        if(a[i] <= a[j])
           temp[k++] = a[i++];
        else
           temp[k++] = a[j++];
    }

    while(i < mid) temp[k++] = a[i++];
    while(j < 10) temp[k++] = a[j++];
    printf("\n");
    print(temp); 
}