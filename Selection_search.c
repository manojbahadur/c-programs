#include<stdio.h>


void main()
{
	int n,min,t;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	int ar[n];
	printf("Enter the elemnets\n");
	for (int i = 0; i < n; ++i)
		scanf("%d",&ar[i]);
	for (int i = 0; i < n-2; i++)
	{
		min = i;
		for (int j = i+1; j < n; j++)
		{
			if(ar[j]<ar[min])
				min = j;
		}
		t = ar[i];
		ar[i] = ar[min];
		ar[min] = t;
	}
	printf("Array after Selection sort:\n");
	for (int i = 0; i < n; ++i)
		printf("%d ",ar[i]);
}
	
	
	
