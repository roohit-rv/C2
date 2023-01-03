#include<stdio.h>
int main()
{
	int n,i,trm;
	int t1=0;
	int t2=1;
	printf("enter the number of terms to print for fibonacci series\n");
	scanf("%d",n);
	printf("fibonacci series upto term %d are %d,%d\n",n,t1,t2);
	for(i=3;i<=n;i++)
	{
		trm=t1+t2;
		printf("%d,",trm);
		t1=t2;
		t2=trm;
	}
	return 0;
}
