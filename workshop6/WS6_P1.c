#include <stdio.h>

int ICheck(int n)
{
	int I[10], C[9];
	int T=0,i,j;
	
	for(i=9; i>=0; i--)  //store the n into the array
	{
		I[i] = n%10;
		n = n/10;
	}
	
	for(i=0; i<9; i++)
		for(j=i; j<i+1; j++)
		{
			C[j] = I[i]*(10-i);
			T+=C[j];		
		}
		
	T+=I[9];
	
	if((T%11)==0) printf("Valid ISBN! \n\n");
	else printf("Invalid ISBN \n\n");
		
}

int main()
{
	int n, test = 1;
	printf("0 to quit\n\n");
	
	while( test == 1)
	{
		do
		{
		printf("Input the ISBN string: "); scanf("%d", &n);
		
			if(n<0) 
				{printf("Wrong input, please re-input! \n\n");	}
		}
		while(n<0);
		
		if(n!=0){ICheck(n);}
		else test = 0;
		
	}
	
	printf("Thanks for entering! ");
}
