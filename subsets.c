#include<stdio.h>
#include<math.h>

void main()
{	
	int i,a[50],s,t,n,r,j;
	printf("hello\nenter value=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{	
		printf("enter value%d=",i+1);
		scanf("%d",&a[i]);
	}
	r=1;
	for(s=0;s<n;s++)
	{
		for(j=s;j<n;j++)
		{
			printf("[");
			for(t=s;t<=j;t++)
			{
				printf("%d ",a[t]);
			}
			printf("] ");
		}
	}
	getch();
}
