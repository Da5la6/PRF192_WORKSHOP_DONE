#include <stdio.h>
#include <math.h>



int getPos(double x, double y, double r)
{
	double d2 = x*x + y*y;
	double r2 = r*r;
	
	if(d2<r2){ return 1;}
	else if(d2 == r2){ return 0;}
	
	return -1;
	
}

int main()
{
	double x,y;
	double r;
	int res;
	
	printf("Input Coordinate of P: "); 
	scanf("%lf %lf", &x, &y);
	printf("Input radius: ");
	do
	{
		scanf("%lf", &r);
	}
	while(r<0);
	res = getPos(x,y,r);
	
	if(res == 1){printf("The point is in circle!");}
	else if(res == 0){printf("The point is on circle!");}
	else {printf("The point is out of the circle!");}
	
	return 0;
	
	
}
