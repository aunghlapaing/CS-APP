#include <stdio.h>

int if_equal( int x, int y )
{
	int result = !(x^y);
	return result;

}

int main()
{	
	int x = 0x55;
	int y = 0x55;
	int result = if_equal(x, y);
	printf( "Result : %.2x\n", result );
	return 0;
}
