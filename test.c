#include <stdio.h>
int main()
{
  int a[3][3] = {1,2,3,4,5,6,7,8,9};
  int b[9];
  int*p = a[0];
  int cnt = 9;
  int* dsp = b;
  while(cnt--)
  {
    *dsp++ = *p++;
  }
  for(int i=0; i<9; i++)
  {
    printf("%d ", b[i]);
  }
}