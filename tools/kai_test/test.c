#include <stdio.h>
#include <unistd.h>

int test(int a)
{
	printf("input is %d ", a);
	return a * 2 - 10;
}

int main()
{
	for (int i=0; i <100; i++) {
		printf("output %d\n", test(i));
		sleep(1);
	}
	return 0;
}
