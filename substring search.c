#include<stdio.h>

void main()
{
	char a[100],b[100];
	int i,n,m,j,l;
	
	printf("hello\nenter string=");
	gets(a);
	
	printf("enter string to search=");
	gets(b);

	i=0;
	while(a[i]!=0)
	{
		i++;
	}
	n=i;
	
	j=0;
	while(b[j]!=0)
	{
		j++;
	}
	m=j;
	
	i=0;
	while(i<n)
	{
		j=0;
		l=i;	
		if(b[j]==a[i])													//not tryed
		{
			
			while(j<m)
			{
				if(b[j]==a[i])
				{
					j++;
					i++;
				}
				else
				{
					break;
				}
			}
			if(j==m)
			{
				printf("yes it is there");
				break;
			}
			
		}
		if(i==n-1)
		{
			printf("no it is not there");
		}
		i=l;
		i++;
			
	}
	getch();
	
}	
