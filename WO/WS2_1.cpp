#include <stdio.h>

int main()
{
	int a,b;
	char op;
	
	printf("Enter Character: \n"); 
	scanf("%c", &op);
	printf("Enter Character: \n"); 
	scanf("%d%d", &a, &b);
	
	
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
