// **PROGRAM TO PRINT THE POWER OF A GIVEN NUMBER UPTO THE SPECIFIED LIMIT**
#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,i=0;
	printf("Enter the number\n");
	scanf("%d",&a);
	printf("Enter the limit\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		int result= pow(a,i);
		printf("Power of %d raised to %d = %d ,",a,i,result);
		}
		return 0;
}
