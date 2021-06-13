#include<stdio.h>

void main()
{
	int n,t,d,i,j,b[100],a[100],c[100];
	
	printf("hello\nenter no. of values=");
	scanf("%d",&n);
	
	i=0;
	j=0;
	while(i<n)
	{
		printf("enter value%d=",i+1);
		scanf("%d",&a[i]);
		b[j]=a[i];
		j++;
		i++;
	}
	
	i=0;
	while(i<n)
	{
		j=i+1;
		while(j<n)
		{		
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
			j++;
		}
		i++;
	}
	
	printf("sorted array=");
	
	i=0;
	while(i<n)
	{
		printf("%d ",a[i]);
		i++;
	}
	
	i=0;
	j=0;
	d=0;
	while(i<n)
	{
		if(b[j]!=a[i])
		{
			c[d]=j;
			d++;
		}
		j++;
		i++;
	}
	printf("\nsubarray=");
	j=c[0];
	while(j<=c[d-1])
	{
		printf("%d ",b[j]);
		j++;
	}
	
	getch();
}
