#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float r1,r2,d;
	//let the quadratic equation be ax*2+bx+c=0//
	printf("enter a,b,c values\n");
	scanf("%d%d%d",&a,&b,&c);
	d=sqrt(b*b-(4*a*c));	 
	r1=(-b+d)/(2*a);
	r2=(-b-d)/(2*a);
	if (d>=0)
	{
	 printf("the roots of given equation are = \n%.2f\n%.2f",r1,r2);
	}
	else // i.e if d<0 //
	{
	 printf("roots are imaginary");
	}
	return 0;
}
