#include<stdio.h>

int main()
{
	int a[10]={0};
	int i=0;
	for( i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	int max=0;
	for (i=1;i<=10;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("max=%d",max);
	return 0;
	
}
