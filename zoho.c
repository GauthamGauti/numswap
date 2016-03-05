#include<stdio.h>
int main()
{
	int a,m,add=0,tot=0,half,i,tmp,b[10];
	printf("enter it:\n");
	scanf("%d",&a);
	m=a;
	while(m!=0)
	{
		m=m/10;
		add++;
	}
	half=add/2;
	m=a;
	for(i=add-1;i>=0;i--)
	{
		b[i]=m%10;
		m=m/10;
	}
	if (add%2==0)
	{
		for(i=0;i<half;i++)
		{
			tmp=b[i];
			b[i]=b[i+half];
			b[i+half]=tmp;
		}
	}
	else
	{
		for(i=0;i<half;i++)
		{
			tmp=b[i];
			b[i]=b[i+half+1];
			b[i+half+1]=tmp;
		}
	}
	for(i=0;i<add;i++)
	{
		tot=(tot*10)+b[i];
	}
	printf("\nswapped no .is...\n%d",tot);
	return 0;
}
