// Problem2-1-1_SumOfArithmeticProgression.c : Defines the entry point for the console application.
//

#include "stdafx.h"

#pragma warning(disable : 4996)


int main()
{
	unsigned int n;
	scanf("%u", &n);
	unsigned int sum = 0;
	unsigned int term;
	for (size_t i = 0; i < n; i++)
	{
		term = i + 1;
		sum += term;
	}
	printf("%u", sum);
    return 0;
}

