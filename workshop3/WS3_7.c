#include <stdio.h>

int SumDig(int n)
{
	int remainder;
	int sum = 0;
	do{
		remainder = n%10;
		n = n/10;
		sum+= remainder;
	}
	while(n>0);
	return sum;
}

int main(){
	int n,S;
	printf("Input n: ");
	do{
		scanf("%d", &n);
		if(n>=0){
			S= SumDig(n);
			printf("Sum of %d decimal digits: %d", n, S);
		}
	}while(n>=0);
	
	 return 0;
}

