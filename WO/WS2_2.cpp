#include <stdio.h>
	#include <stdlib.h>
	
	int main()
	{
		long  pa=9000000, pd=3600000; 
		long n, tf,ic, ti;
		
		printf("IndependentS Number: "); scanf("%d", &n);
		printf("\n");
		
		printf("Yearly Income: "); scanf("%d",&ic);
		printf("____________________________________________________________________________________________________________________________\n");
		
		
		printf("Yearly Income: %d\n",ic);
		tf=12*(pa+n*pd);
		printf("Yearly tax free income: %d\n", tf);
		
		ti=ic-tf;
		
		if(ti<=0)
		{printf("Taxable Income: %d\n",ti);
		printf("Income Tax= 0\n"); return 0;}
		
		else if(ti<=5000000)
		{	printf("Taxable Income: %d\n",ti);
			printf("Income Tax: %d", ti/20);}
			
		else if(ti>=5000001 && ti<=10000000)
		{	printf("Taxable Income: %d\n",ti);
			printf("Income Tax: %d", ti*3/20);}
			
		else if(ti>=10000001 && ti<=18000000)
		{	printf("Taxable Income: %d\n",ti);
			printf("Income Tax: %d", ti/10);}
			
		else if(ti>18000000)
		{	printf("Taxable Income: %d\n",ti);
			printf("Income Tax: %d", ti/5);}
		
		return 0;
