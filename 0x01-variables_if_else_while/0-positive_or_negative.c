#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints if number is positive, zero or negative
* Return: Always (Success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX/2;
if (n>0)
{printf ("%d is psitive\n", n);
}
else if (n==0)
{prinf("%d is zero\n", n);

}
else
{prinf("%d is negative\n", n);
}
return (0);
}
