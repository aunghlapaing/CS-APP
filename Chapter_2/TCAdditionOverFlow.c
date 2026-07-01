#include <stdio.h>

int tadd_ok(int x, int y)
{	
	int sum = x + y;
	return !( x > 0 && y > 0 && sum <= 0 ) && !( x < 0 && y < 0 && sum >= 0 ) ;
}

int main()
{

	int x = 2147483647;
	int y = 0;
	printf( "Two Complement Addition : %d\n", tadd_ok(x, y) );
	return 0;
}
