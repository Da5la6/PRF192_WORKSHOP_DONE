#include <stdio.h>
#include <math.h>

double factorial(int n)
{
	double p=1;
	int i;
	for(i = 2; i<= n; i++)
		p*=i;
		
	return p;
}

int main()
{
	int n, s;
	printf("Input n: ");
	
	do
	{scanf("%d",&n);}
	while(n<0);
	printf("Factorial is: %lf ", factorial(n));
}
