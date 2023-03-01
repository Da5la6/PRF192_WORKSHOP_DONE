#include <stdio.h>
#include <math.h>
#include <string.h>

double fibo(int n)
{
	int a=1, b=1, t=1, i;
	for(i =3; i<=n; i++)
	{
		t= a+b;
		a=b;
		b=t;
	}
	
	return t;
}

int main()
{
	double a;
	int n,x; printf("Input n: ");
	
	do{
		scanf("%d", &n);
	}
	while(n<1);
	a = fibo(n);
	x=a;
	printf("Fibonaccy: %d", x);

	
}
