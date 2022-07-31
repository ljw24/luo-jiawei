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
       printf("%d ", a[i]);
}

int main()
{
    int a[10] = {9,3,5,7,1,2,4,6,8,10};
    int i,j;
    for(i=0; i<10; i++)
        for(j=i; j>0; j--)
        {
            if(a[j] < a[j-1])
                swap(a, j, j-1);
        }
    print(a);
}