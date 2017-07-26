#include <stdio.h>

long int rev(long int n)
{
	long int sum = 0;
	while(n!=0)
	{
		sum *= 10;
		sum += n%10;
		n /= 10;
	}
	return sum;
}

int main()
{
	int n;
	long int a, b;

	int j;
	scanf("%d", &n);
	for(j=1; j<=n; j++)
	{
		scanf("%ld%ld", &a, &b);
		printf( "%ld\n", rev(rev(a) + rev(b)) );
	}

	return 0;
}
