#include<stdio.h>
main()
{
	int a[100],n;
	printf("Enter the array size:-");
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	int *p1;
	p1=a;
	for(i=0;i<n;i++)
	{
		printf("%u===>%d\n",p1+i,*(p1+i));
	}
}
