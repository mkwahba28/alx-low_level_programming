#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main prints last digit in n
 *last gets last digit
 */
int main(void)
{
	int n;
	int last = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (last > 5)
		printf("%dLast digit of ", n, "%d and is greater than 5", last;
	else if (last == 0)
		printf("and is 0\n");
	else if (last < 6 && last != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
