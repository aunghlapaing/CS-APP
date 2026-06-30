#include <stdio.h>

typedef unsigned char *byte_pointer;

int main()
{
	int i = 8;
	byte_pointer first_byte = (byte_pointer) &i;
	printf( "Memory Address : %b\n", first_byte[0] );
	return 0;
}
