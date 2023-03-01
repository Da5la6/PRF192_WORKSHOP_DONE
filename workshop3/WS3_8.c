#include <stdio.h>
#include <math.h>

double DoubCombine(int ip, int fr)
{
	double df=fr;
	while(df>=1)
	{
		df= df/10;
	}
	
	if(ip < 0) return ip-df;
	return ip+df;
}

int main()
{
	int a,b;
	printf("Input the ipart: ");scanf("%d", &a);
	
	printf("Input the fraction: ");
	do
	{
		scanf("%d", &b);
	}
	while (b<0);
	float val = DoubCombine(a,b);
	printf("The number is: %lf", val); return 0;
}
