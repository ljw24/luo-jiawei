#include <stdio.h>
#include <string.h>
#include <ctype.h>

int str_copy(char *a, char *b, int *num)
{
   if(a == NULL || num == NULL)
   {
       return -1;
   }
   int begin = 0;
   int end = strlen(a) - 1;
   while(isspace(a[begin]) && a[begin] != 0)
        begin++;
   while(isspace(a[end]) && a[end] !=0)
        end--;
    *num = end - begin + 1;
    strncpy(b, a + begin, *num);
    b[*num] = 0;
    return *num;
}
int main()
{
    char a[] = "         luojiawei1234        ";
    int num, ret;
    char b[100] = {0};
    ret = str_copy(a , b, &num);
    printf("%d\n", ret);
    printf("%s\n", b);
}

