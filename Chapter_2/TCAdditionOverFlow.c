#include <stdio.h>

int tadd_ok(int x, int y)
{
	unsigned num = 4294967295u;
	return -2147483648 <= x+y && x+y < 2147483648;
}

int main()
{

	int x = -2147483648;
	int y = 0;
	printf( "Two Complement Addition : %d\n", tadd_ok(x, y) );
	return 0;
}
