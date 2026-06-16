#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes( byte_pointer start, size_t len )
{
	for ( int i = 0; i < len; i++ )
		printf( "%.2x", start[i] );
	printf( "\n" );


}

int main()
{
	int num = 12345;
	show_bytes( ( byte_pointer ) &num, sizeof( int ) );

	float x = 123.1;
	show_bytes( ( byte_pointer ) &x, sizeof( float ) );

	return 0;


}
