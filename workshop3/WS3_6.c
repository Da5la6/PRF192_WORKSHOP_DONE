#include <stdio.h>
#include <math.h>
#include <string.h>

double fibo(int n)
{
	int a=1, b=1, t=1;
	if(n==1) return 1;
	while(t<n)
	{
		t= a+b;
		a=b;
		b=t;
	}
	
	return n==t;
	if(n == t) return 1;
}

int main()
{
	double a;
	int n; printf("Input n: ");
	
	do{
		scanf("%d", &n);
	}
	while(n<1);
	if(fibo(n) == 1)
		{printf("In the Fibonacci sequence!");}
	else{printf("not in the Fibonacci sequence!");
	}

	
}
