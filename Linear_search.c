#include<stdio.h>

void main()
{
	int n,ele,loc,flag;
	printf("Enter the no of elements\n");
	scanf("%d",&n);
	int ar[n];
	printf("Enter the elements\n");
	for (int i = 0; i < n; i++)
		scanf("%d",&ar[i]);
	
	printf("Enter the element to be searched\n");
	scanf("%d",&ele);


	for (int i = 0; i < n; i++)
	{
		loc = i+1;
		if (ele == ar[i]){
			flag = 1;
			printf("Element %d found at location %d\n", ele, loc );
			break;
		}
	}
	if(flag!=1)
		printf("Element not found\n");
}