#include<stdio.h>
int factorial(int num)
{
	int result=1;
	for(int i=2;i<=num;i++)
	{
		result*=i;
	}
	return result;
}
int main()
{
		int number;
		printf("Enter a number:");
		scanf("%d",&number);
		if(number<0)
		{
			printf("Factorial is not defined for negative number.\n");
		}
		else
		{
			int fact=factorial(number);
			printf("Factorial of %d is %d\n",number,fact);
		}
	return 0;
}
