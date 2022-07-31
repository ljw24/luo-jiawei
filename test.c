
#include<stdio.h>
#include<string.h>

void sui()
{
  long int a = 0x2356;
  int b = a&0xFF;
  int c = a>>8&0xFF;
  printf("%x\n",b);
  printf("%x\n",c);
}

int main()
{
  long int x = 0x12345678;
  int y = x&0xFF;
  int z = x>>8&0xFF;
  int s = x>>16&0xFF;
  int c = x>>24&0xFF;
  printf("%x\n",y);
  printf("%x\n",z);
  printf("%x\n",s);
  printf("%x\n",c);
}