#include <stdio.h>
#include <math.h>

int d,  m, y;

int DateCheck()
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
	
	printf("Input day: "); scanf("%d",&d);
	printf("Input month: "); scanf("%d",&m);
	printf("Input year: "); scanf("%d",&y); 

	if(DateCheck() == 1)
		printf("Valid date");
	else printf("Invalid date!"); 
	
	return 0;
}
