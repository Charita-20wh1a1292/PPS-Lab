#include<stdio.h>
int fib(int);
int main()
{
	int n,i;
	printf("Enter no.of terms:\n");
	scanf("%d",&n);
	printf("\nFibonacci Series:\n ");
	for(i=0;i<=n;i++)
	{
		printf("%d\t",fib(i));
	}
}
int fib(int n)
{
	if(n==0||n==1)
	return n;
	else
	return fib(n-1)+fib(n-2);
}
