#include "main.h"
#include <stdio.h>

void times_table(void)
{
	int my_array[] = {0,1,2,3,4,5,6,7,8,9};
	int temp[10];
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
			temp[j] = my_array[j] * i;
		for (j = 0; j < 10; j++)
		{
			printf("%d, ", temp[j]);
		}
		printf("\n");
	}

}
int main(void)
{
    times_table();
    return (0);
}
