#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
/*选取数组第一个数字为最小，循环比较，将最小的放到数组的第一个位置，然后选取数组第二个数字为最小，循环比较，
将最小的放到数组的第二个位置，之后依次第三、第四、第五.........*/
int main()
{
    int a[10] = {9,3,5,7,1,2,4,6,8,10};
    int i,j,temp;

    for(i=0; i<10; i++)
    {
       int min = i;
       for(j=i+1; j<10; j++)
       {
         min = a[j] < a[min] ? j :min; 
       }

       temp = a[i];
       a[i] = a[min];
       a[min] = temp; 

    }

    for(i=0; i<10; i++)
    {
        printf("%d", a[i]);
        printf(" ");
    }
}