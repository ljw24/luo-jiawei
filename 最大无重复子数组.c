#include<stdio.h>
//求最大无重复子数组

int maxLength(int* arr, int arrLen ) {
    int ak[100000]={0};
    int k=0,i,m=0,max=1;
    for(i=0;i<arrLen;i++)
    {
        if(ak[arr[i]]>m)
        {
            m=ak[arr[i]];
        }
        ak[arr[i]]=i+1;
        max=(max>i+1-m)?max:i+1-m;
    }
    return max;
}

int main()
{
    int a[] = {2,2,3,4,5,6,6,7,8};
    //printf("%d\n", sizeof(a)/sizeof(a[0]));
    int ret = maxLength(a,sizeof(a)/sizeof(a[0]));
    printf("--------->%d\n", ret);
}