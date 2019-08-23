#include<stdio.h>
void main()
{
  int x,y,z;
  printf("Enter the ages of 3 person\n");
  scanf("%d%d%d",&x,&y,&z);
  printf("Age of x is: %d\nAge of y is: %d\nAge of z is: %d\n",x,y,z);
  if(x<y && x<z)
     printf("x is the youngest\n");
  else if(y<x && y<z)
     printf("y is the youngest\n");
  else
     printf("z is the youngest\n");
}

 
