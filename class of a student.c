#include<stdio.h>
int main()
{
	int AP,PPS,M2,EG,p; // max marks per subject = 100//
	printf("Enter marks of a student\n");
	scanf("%d%d%d%d",&AP,&PPS,&M2,&EG);
	p = (((AP+PPS+M2+EG)*100)/400);
	printf("percentage of student = %d\n",p);
	if(p>=70)
	printf("class = Distinction");
	else if(p>=60)
	printf("class = Frist class");
	else if(p>=40)
	printf("class = Second class");
	else
	printf("class = Failed");
	return 0;
}
