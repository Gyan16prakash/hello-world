//swap two no
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter any two no : \n");
	scanf("%d%d",&a,&b);
	printf("before swaping a=%d and b=%d", a,b);
	c=a;
	a=b;
	b=c;
	printf("\n after swaping a=%d and b=%d", a,b);
	return 0;
}
