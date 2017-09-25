//SPOJ: SUMA
//TIME: 2017-09-25
#include <cstdio>

int main(int argc, char* argv[])
{
	short number,sum=0;
	while (scanf("%hd", &number) != EOF)
		printf("%hd\n", sum += number);
	return 0;
}
