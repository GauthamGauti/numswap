#include<stdio.h>
int main()
{
	int n,m,add=0,tot=0,half,i,tmp,a[10];
	printf("enter it:\n");
	scanf("%d",&n);
	m=n;
	while(m!=0)
	{
		m=m/10;
		add++;
	}
	half=add/2;
	m=n;
	for(i=add-1;i>=0;i--)
	{
		a[i]=m%10;
		m=m/10;
	}
	if (add%2==0)
	{
		for(i=0;i<half;i++)
		{
			tmp=a[i];
			a[i]=a[i+half];
			a[i+half]=tmp;
		}
	}
	else
	{
		for(i=0;i<half;i++)
		{
			tmp=a[i];
			a[i]=a[i+half+1];
			a[i+half+1]=tmp;
		}
	}
	for(i=0;i<add;i++)
	{
		tot=(tot*10)+a[i];
	}
	printf("\nswapped no .is...\n%d",tot);
	return 0;
}
