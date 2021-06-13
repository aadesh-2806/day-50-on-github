#include<stdio.h>
#include<math.h>

void main()
{	
	int i,a[50],s,t,n,j;
	printf("hello\nenter value=");
	scanf("%d",&n);

	i=0;
	t=0;
	for(s=n;s!=0;i++)
	{	
		a[i]=s%10;
		s=s/10;
	}
	
	for(s=0;s<i;s++)
	{	
		for(j=s;j<i;j++)
		{
			if(a[j]==1 && a[s]==1)
			{
				t++;
			}
		}
	}
	printf("%d",t);
	getch();
}	
