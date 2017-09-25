//SPOJ: POL
//TIME: 2017-09-25
#include <cstdio>
#include <cstring>


int main(int argc, char* argv[])
{
	short testsNumber;
	char string[2000];
	scanf("%hd", &testsNumber);
	while (testsNumber--)
	{
		scanf("%s", string);
		string[strlen(string)/2] = '\0';
		printf("%s\n", string);
	}
	return 0;
}
