#include <math.h>
#include <stdio.h>

int PrimeCheck(int a)
{
	int i;
	int s=1;
	
	if(a<2)
		s=0;
	
	for(i=2; i<=sqrt(a); i++)
	{
		if(a%i == 0){s= 0;}
	}
	return s;
	
}


int main()
{
	int n,i,t;
	printf("Input the number limit: " );
	scanf("%d",&n);
	if(n==3)
	{
		printf("No prime number between 2 and 3!\n"); return 0;
	}
	
	printf("The prime range: ");
	for( i=2; i<=n; i++)
	{
		t = PrimeCheck(i);
		
		if(t == 1)
		{printf("%d ", i);}
		
	}
	
	return 0;
}

