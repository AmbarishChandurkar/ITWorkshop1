#include <stdio.h>
#include <stdlib.h>
#include <prototypes.h>
#include <math.h>
int main()
{
	printf("Welcome to scientific Calculator !");
	printf("\n 1)Addition \n 2)Subtraction \n 3)Division \n 4)Multiplication \n 5)Sine \n 6)Cosine \n 7)Loagarithm");
	printf("\nYour Choice?");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
			Add();
		case 2:
			Subtract();
		case 3:
			Division();
		case 4:
			Multiply();
		default:
			printf("Wrong Input !");
	}

	return 0;
}
