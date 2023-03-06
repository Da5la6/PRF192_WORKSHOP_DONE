#include <stdio.h>


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

int DateCheck(int d, int m, int y)
{
	int mdate=31;
	
	if((d<1) || (d>31)||(m<1) || (m>12)) return 0;
	
	if( (m== 4)|| (m == 6) || (m==9) || (m==11)) mdate=30;
	
	else if(m==2)
			{
				if(y%400 == 0 || (y%4 == 0 && y%100!=0)) mdate = 29;
				else mdate =28;
			}
			
		return d <=mdate;
}

int main()
{
int opt, n, x; 
double a;
int d,m,y;
printf("A new program \n");
	
printf("1 | Date Checking program \n");
printf("2 | Fibonacci program \n");
printf("3 | Quit the program \n \n");

printf("Select the type program you want: ");
scanf("%d",&opt);

switch(opt)
{
	case 1: 
			
	printf("Input day: "); scanf("%d",&d);
	printf("Input month: "); scanf("%d",&m);
	printf("Input year: "); scanf("%d",&y); 

	if(DateCheck(d,m,y) == 1)
		printf("Valid date");
	else printf("Invalid date!"); 
	
	return 0;
		break;
	
	case 2: 
	
	printf("Input n: ");
	
	do{
		scanf("%d", &n);
	}
	while(n<1);
	if(fibo(n) == 1)
		{printf("In the Fibonacci sequence!");}
	else{printf("not in the Fibonacci sequence!");
	}
		break;
		
	case 3: 
		return 0;
		break;
}
while(opt>0 && opt<3);
return 0;

}
