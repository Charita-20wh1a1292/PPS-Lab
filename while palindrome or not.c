#include<stdio.h>
int main()
{
	int num,temp,rem,rev=0;
	printf("enter a number\n");
	scanf("%d",&num);
	temp = num;
	while(num!=0)
	{
		rem = num % 10;
		rev = rev*10 + rem;
		num = num / 10;
	}
	printf("reversed number = %d",rev);
	if(rev==temp)
	printf("\nthe given number is a palindrome\n");
	else
	printf("\nthe number is not a palindrome\n");
	return 0;
}
