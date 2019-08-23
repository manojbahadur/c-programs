#include<stdio.h>
void main()
{
  int n,s=0;
  printf("Enter the limit to find it's sum\n");
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
    s+=i;
  printf("Sum of %d natural numbers is: %d\n",n,s);
}

