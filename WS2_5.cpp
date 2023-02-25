#include <stdio.h>
#include <string.h>

#define Enter 10
void main()
{
	
	int others = 0, vowels=0, consonants = 0;
	char A;
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
