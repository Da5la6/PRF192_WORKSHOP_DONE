#include <stdio.h>

void Swap(int *a, int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}

int main()
{
	int x,y;
	printf("Nhap x, y: ");
	scanf("%d%d",&x,&y);
	if(x==0 && y==0)
	{printf("Please input value other than 0!");
	return main();}
	while(x!=0 && y!=0)
	{	
		printf("Before swap:\n X= %d; y=%d \n", x, y);	
		Swap(&x,&y);
		printf("After swap: \nX= %d; y=%d \n", x, y);	
		break;	
	}
}

