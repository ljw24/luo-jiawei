#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int replacesubstr(char *src, char **dst, char *sub, char *new_sub)
{
    if(src == 0 || dst == 0 || sub == 0 || new_sub == 0)
    {
        return -1;
    }
    char *start = src;
    char tmp[512] = {0};
    char  *p = NULL;
    int len = 0;
    do
    {
       p = strstr(start, sub);
       if(p != NULL)
       {
           len = p - start;
           if(len > 0)
           {
              strncat(tmp, start, len);
           }
           strncat(tmp, new_sub, 4);
           start = p + strlen(sub);
       }
       else
       {
           strcat(tmp, start);
           break;
       }
    } while (*start != '\0');
    
    char *buf = (char *)malloc(strlen(tmp) + 1);
    strcpy(buf, tmp);
    *dst = buf;
    return 0;
}
int main()
{
   char a[] = "ddddabcd1111abcd2222abcdqqqqq";
   char *buf = NULL;
   int ret = 0;

   ret = replacesubstr(a, &buf , "abcd", "dcba");
   printf("%s\n", buf);
   if (buf != NULL)
   {
       free(buf);
       buf = NULL;
   }
}
