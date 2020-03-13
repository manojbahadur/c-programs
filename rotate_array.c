#include<stdio.h>

void main()
{
	int d,n,temp=0,x;
	printf("Enter the no of elements\n");
	scanf("%d",&n);
	int ar[n];
	printf("Enter the elements\n" );
	
	for (int i = 0; i < n; ++i)
		scanf("%d",&ar[i]);
	
	printf("Enter the position to rotate\n");
	scanf("%d",&d);

	for (int i = 0; i < d; i++) {
    	x = ar[0];
    	for (int j = 0; j < n; j++) {
        	temp=ar[j];
         	ar[j] = ar[j + 1];
         	ar[j+1]=temp;
      	}
      	ar[n - 1] = x;
   }

   printf("Array after rotating:\n");

   for (int i = 0; i < n; ++i)
   	printf("%d  ",ar[i]);
}