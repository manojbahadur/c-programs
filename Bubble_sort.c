#include<stdio.h>
 void main()
 {
 	int n,t;
 	printf("Enter the no of elements\n");
 	scanf("%d",&n);
 	int ar[n];
 	printf("Enter the elements:\n");
 	for (int i = 0; i < n; ++i)
 		scanf("%d",&ar[i]);
 	
 	for (int i = 0; i < n-1; ++i)
 	{
 		for (int j = 0; j < n-1-i; j++)
 		{
 			if(ar[j+1]<ar[j]){
 				t = ar[j];
 				ar[j] = ar[j+1];
 				ar[j+1] = t;
 			}	
 		}
 	}
 	printf("After Bubble sort\n");
 	for (int i = 0; i < n; ++i)
 	{
 		printf("%d ",ar[i] );
 	}
 	
 }