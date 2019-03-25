#include<stdio.h>
int main() 
{
  int a,b,i,j;
  scanf("%d",&a);
  for(i=0;a!=0;i++)
  {
      b=a%10;
      printf("%d",b);
      a=a/10;
  }
  return 0;
}
