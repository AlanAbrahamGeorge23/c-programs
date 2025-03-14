#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
	int n,i,nd,d,sum=0,temp;
	char str[100];
	printf("Enter a number:\n");
	scanf("%d",&n);
	nd=strlen(str);
	temp=n;
	while(temp!=0)
	{
		d=temp%10;
		sum=sum+pow(d,nd);
		temp=(temp/10);
	}
	printf("%d",sum);
	if(n==sum)
	{
		printf("%d is armstrong number\n",n);
	}
		else
		{
		printf("%d is not armstrong number\n",n);
	} return 0;
	}

