//SPOJ: VSR
//TIME: 2017-09-26
#include <cstdio>


int main(int argc, char* argv[])
{
	short testsNumber, v1, v2;
	scanf("%hd", &testsNumber);
	while (testsNumber--)
	{
		scanf("%hd%hd", &v1, &v2);
		printf("%hd\n", (2 * v1*v2) / (v1 + v2));
	}
	return 0;
}
