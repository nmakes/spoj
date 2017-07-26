#include <stdio.h>

long int min(long int a, long int b)
{
	return a < b ? a : b;
}

long int floorPower(long int a, long int b) // how many multiples of b would come in a's factorial
{
	return a/b;
}

long int trailingZeros(long int n)
{
	long int sumPow5 = 0, sumPow2 = 0;

	int i=0;

	long int pow5 = 5, pow2 = 2;

	while(pow5 <= n)
	{
		sumPow5 += floorPower(n, pow5);
		pow5 *= 5;
	}

	while(pow2 <= n)
	{
		sumPow2 += floorPower(n, pow2);
		pow2 *= 2;
	}

/*
	for( i=1; i<=maxPower(n, pow5); i++)
	{
		sumPow5 += i * k;
	}

	for( i=1; i<=maxPower(n,2); i++)
	{
		sumPow2 += i;
	}
*/

	//calculate the powers of 5 and 2 and return the minimum of the two
	return min( sumPow5, sumPow2 );
}

int main()
{
	int T;
	scanf("%d", &T);

	int i=1; long int n;
	for(i=1; i<=T; i++)
	{
		scanf("%ld", &n);
		printf("%ld\n", trailingZeros(n));
	}
	return 0;
}
