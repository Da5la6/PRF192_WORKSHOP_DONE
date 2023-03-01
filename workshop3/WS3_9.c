#include <stdio.h>
#include <math.h>

int gcd(int a, int b)
{
	while(a!=b)
	{
		if(a>b)a-=b;
		else b-=a;
		
		return a;
	}
	

}

	int lcm(int a, int b)
	{
		return (a*b)/gcd(a,b);
	}
	
	
int main()
{
	int a,b;
	printf("Input a & b: ");
	do{
		scanf("%d%d",&a,&b);
	}
	while(a <=0 || b<=0);
	int d=gcd(a,b);
	int m=lcm(a,b);
	 printf("Greatest common divisor of %d and %d: %d\n", a, b, d);
    printf("Least common multiple of %d and %d: %d\n", a, b, m);
}

