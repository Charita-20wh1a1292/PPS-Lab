#include<stdio.h>
int main()
{
	int a,b,sum,sub,pro,rem,div;
	char c;
	printf("Enter an expression\n");
	scanf("%d%c%d",&a,&c,&b);
	sum = a+b;
	sub = a-b;
	pro = a*b;
	div = a/b;
	rem = a%b;
	switch(c)
	{
		case '+':printf("%d",sum);
		       break;
		case '-':printf("%d",sub);
		       break;
		case '*':printf("%d",pro);
		       break;
		case '/':printf("%d",div);
		       break;
		case '%':printf("%d",rem);
		       break;
		       
	}
	return 0;
	
}
