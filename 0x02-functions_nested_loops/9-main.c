#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 54321;
	char buff[5];
	itoa(a,buff,10);
	write(1,buff,5);
	return 0;
}
