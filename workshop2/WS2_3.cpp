#include <stdio.h>

int main()
{
	int S=0;
	int x;
	while(x!=0){
		printf("Nhap x: "); scanf("%d", &x);
		if(x!=0)
		{S=S+x;}
		else
		{
			printf("Chon so khac 0!\n");
			return main;
		}
		 
	}
	{printf("Tong: %d\n", S);}
	return 0;
}
