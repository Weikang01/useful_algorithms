#include <stdio.h>
#include "EuclidGCD.h"

void main()
{
	int result;
	EuclidGCD(666, 555, result);
	printf("GCD is %d", result);
}