//**PROGRAM TO PRINT TRIANGLE PATTERN**
#include<stdio.h>
int main()
{
	int n=4;
	for(int i=0;i<=n;i++)
	{
		for(int j=0; j<=n-i;j++)
		{
			printf("X ");
		}
		printf("\n");
	} return 0;
}
