#include<stdio.h>
void main()
{
  int a,b;
  printf("Enter two values to be exchanged\n");
  scanf("%d%d",&a,&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("After exchange the valuses are\n%d %d\n",a,b);
}
