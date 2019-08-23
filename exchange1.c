#include<stdio.h>
void main()
{
  int a,b,t;
  printf("Enter two values to be exchanged\n");
  scanf("%d%d",&a,&b);
  t=a;
  a=b;
  b=t;
  printf("After exchange the valuses are\n%d %d\n",a,b);
}
