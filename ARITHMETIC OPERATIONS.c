//**PROGRAM TO COMPUTE SIMPLE ARITHMETIC OPERATIONS**
#include<stdio.h>
int main()
{
	float a,b,s,d,p,q;
	printf("ENTER TWO NUMBERS\n");
	scanf("%f %f",&a,&b);
	s=a+b;d=a-b;p=a*b;q=a/b;
	printf("sum=%f",s);
	printf("\ndifference=%f",d);
	printf("\nproduct=%f",p);
	printf("\nquotient=%f",q);
	return 0;
}
