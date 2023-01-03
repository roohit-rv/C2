#include<stdio.h>
int main()
{
	int num,f=0,i=2;
	printf("enter the number to check wether it is prime or not\n");
	scanf("%d",&num);
	while(i<num)
	{
		
		if(num%i==0)
		{
			f++;
			break;
		}
		
	}
	if(f==0)
	{
		printf("%d is a prime number\n");
		
	}
	else
	{
		printf("%d is not a prime number\n");
	}
	return 0;
}
