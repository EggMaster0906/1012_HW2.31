#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{

	printf("Number\tSquare\tCube\n");
	
	int square, cube;

	for (int num = 0; num <= 10; num++)
	{
		
		square = pow(num, 2);
		cube = pow(num, 3);
		printf("%d\t%d\t%d\n", num, square, cube);
	}
	return 0;
}