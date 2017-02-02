#include <cstdio>

#include "Timer.h"

int main(int argc, char *argv[])
{
	AmpLib::Timer t;
	t.start();
	for (size_t i = 0; i < 999999; i++)
	{
		int* n = new int;
		delete n;
	}
	printf("%d", t.ns());
	printf("\r\n");
    return 0;
}
