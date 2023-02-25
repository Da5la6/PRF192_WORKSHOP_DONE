#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Enter 10
//Bai 1
int a,b;
char op;
int NumOne()
{
	
	fflush(stdin);
	printf("Enter Character: \n"); 
	scanf("%c", &op);
	fflush(stdin);
	printf("Enter Character a: \n"); 
	scanf("%d", &a);
	fflush(stdin);
	printf("Enter Character b: \n"); 
	scanf("%d", &b);
	
	
	switch (op)
   {
     case '+':
         printf("%d + %d = %d", a, b, a + b);
         break;
         
     case '-':
         printf("%d - %d = %d", a, b, a - b);
         break;
         
     case '*':
         printf("%d * %d = %d", a, b, a * b);
         break;
         
	 case '/': 
         if(b == 0){
             printf("divided by 0\n");
         }else{
             printf("%d / %d = %.2f", a, b, (float)a / b);
         }
         break;
   
     default:
     printf("Operation failed %c!", op);
         break;
    }
    printf("\n");
}


//Bai 2
	
	int NumTwo()
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
		
	}




//Bai 3


int NumThree()
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
		}
		 
	}
	{printf("Tong: %d\n\n", S);}
	return 0;
}


//Bai 4

void Swap(int *a, int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}

int NumFor()
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


//Bai 5

void NumFiv()
{
	
	int others = 0, vowels=0, consonants = 0;
	char A;
	
	fflush(stdin);
	printf("Input a string: ");
		while(A!=Enter)
		{
			A= getchar();
			if(('a'<=A && 'z'>=A) ||('A'<=A && 'Z'>=A))
			{
				switch(A)
				{
					case 'a':
					case 'e':
					case 'i':
					case 'o':
					case 'u':
					case 'A':
					case 'E':
					case 'I':
					case 'O':
					case 'U':
						vowels+=1;
						break;
					default:
						consonants +=1;
				}
			}
			else others+=1;
			
		}
		
		printf("vowels: %d \n", vowels);
		printf("consonants: %d \n", consonants);
		printf("others: %d \n", others-1);
		
	
}

//Bai 6

int NumSix()
{
    int code;
    for (code = 0; code <256; code++)
    	printf("%6c | %6d | %6o | %6x \n", code, code, code, code); 
    return 0;
}

//Bai 7

int NumSev()
{
    char c1, c2, c;
    int d;
    fflush(stdin);
    printf("Enter character 1: ");
    scanf("%c",&c1);
    fflush(stdin);
    printf("Enter character 2: ");
    scanf("%c",&c2);
    if (c1 > c2)
    {
        int t = c1; 
            c1 = c2; 
            c2 = t;
    }
    d = c2 - c1;
    printf("The distance between %c and %c: %d\n", c1, c2, d);
    printf("Char   Dec   Oct    Hex\n");
    for (c = c1; c <= c2; c++)
        printf("%3c%6d%6o%6x\n", c, c, c, c);
    return 0;
}

//Introduction program
void Intro()
{
	int opt;
	//Introduction
	printf("WORKSHOP_2_DA5LA6!\n\n|====================================| \n");
	printf("   1 | Operation Program \n");
	printf("   2 | Tax Program \n");
	printf("   3 | Sum program \n");
	printf("   4 | Swapping program \n");
	printf("   5 | Symbols counting program \n");
	printf("   6 | Character type program \n");
	printf("   7 | Character distance program \n");
	printf("|====================================| \n\n");
	
	printf("Input number: "); 
	scanf("%d",&opt);
	
	switch(opt)
	{
		case 1:
			NumOne();
			break;
			
		case 2:
			NumTwo();
			break;
			
		case 3:
			NumThree();
			break;
			
		case 4:
			NumFor();
			break;
			
		case 5:
			NumFiv();
			break;
			
		case 6:
			NumSix();
			break;
			
		case 7:
			NumSev();
			break;
			
		default:
			printf("Please input the right number of the program!\n\n");
			break;
	}
	
}

//Quit Button
void Quit()
{
	int opt2;
	printf("Do you want to: \n 1 | continue \n 0 | quit? \n");
	scanf("%d",&opt2);
	switch(opt2)
	{
		case 1: 
		return main();
			break;
			
		case 0: 
		printf("|=====================|\n Thanks for using! \n|=====================|\n ");
			break;
			
		default:
		printf("Stop program!") ;
			break;
	}
	
}


int main()
{
	Intro();
	Quit();
	
return 0;}
