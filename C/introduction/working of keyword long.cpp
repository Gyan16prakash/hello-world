//working of keyword long
#include<stdio.h>
int main()
{
	int a;
	long b;//equivalent to (long int b;)
	long long c;//equivalent to (long long int c;)
	double d;
	long double e;
	printf ("size of int is %d \n long int is %d \n long long int is %d \n double is %d \n long double is %d ", sizeof(a),sizeof(b),sizeof(c),sizeof(d),sizeof(e));
	return 0;
}
