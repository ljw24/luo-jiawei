#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
/*ѡȡ�����һ������Ϊ��С��ѭ���Ƚϣ�����С�ķŵ�����ĵ�һ��λ�ã�Ȼ��ѡȡ����ڶ�������Ϊ��С��ѭ���Ƚϣ�
����С�ķŵ�����ĵڶ���λ�ã�֮�����ε��������ġ�����.........*/
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