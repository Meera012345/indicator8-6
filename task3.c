#include<stdio.h>
main()
{
	int a[100],n,i;
	int *p;
	p=&a;
	
	printf("Enter the number of elements you want to reveres:-");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}

	printf("\nElements of Array are:-\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(p+i));
	}
	
	printf("\n\n____________**********************************_____________\n\n");
	printf("Reverse Array Elements are=\n");
	int *rev;
	rev=&a[n-1];
	for(i=0;i<n;i++)
	{
		printf("%d\t",*rev--);
	}
}
