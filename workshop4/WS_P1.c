#include <stdio.h>

void printMinMaxDigits(int n) {                              
     int max, min;
     max = n % 10;
	 min = n % 10;
	 while( n > 0) {
		int temp = n % 10;
		       n/=10;
		if ( max < temp) {
			 max = temp;
		}
		if ( min > temp) {
			 min = temp;
		}
     }
     printf("Minimum of digits: %d\n", min);
     printf("Maximum of digits: %d\n", max);    
}

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
int opt, n, x; 
double a;
printf("A new program \n");
	
printf("1 | Process primes \n");
printf("2 | Print max, min digit in an integer \n");
printf("3 | Quit the program \n \n");

printf("Select the type program you want: ");
scanf("%d",&opt);

switch(opt)
{
	case 1: 
		{
			int i, t; printf("Input n: ");
			scanf("%d", &n);
			if(n==3)
				{printf("No prime number between 2 and 3!\n"); return 0;}
	
			printf("The prime range: ");
			for( i=2; i<=n; i++)
				{
					t = PrimeCheck(i);
		
					if(t == 1)
				{printf("%d ", i);}
		
				}
	
				return 0;
		}
		break;
	
	case 2: 
		printf("Enter integer: ");
		scanf("%d", &n);
		printMinMaxDigits(n);
		return 0;

		break;
		
	case 3: 
		return 0;
		break;
}
while(opt>0 && opt<3);
return 0;

}

