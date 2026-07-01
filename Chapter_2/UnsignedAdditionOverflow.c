#include <stdio.h>

int unsigned_add(unsigned x, unsigned y)
{
	return x <= (x+y);

}

int main()
{
	unsigned x = 4294967295;
	unsigned y = 20;
	printf("Unsigned addition overflow check: %d\n", unsigned_add(x,y));
	
	return 0;
}



