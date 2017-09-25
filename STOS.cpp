//SPOJ: STOS
//TIME: 2017-09-25
#include <cstdio>

#define STACK_SIZE 10

short stack[STACK_SIZE];
short tailIndex = -1;

void pop()
{
	if (tailIndex == -1)
		printf(":(\n");
	else
		printf("%hd\n", stack[tailIndex--]);
}

void push()
{
	if (tailIndex >= STACK_SIZE - 1)
	{
		short dump;
		scanf("%hd",&dump);
		printf(":(\n");
	}
	else 
	{
		scanf("%hd", &stack[++tailIndex]);
		printf(":)\n");
	}
}

int main(int argc, char* argv[])
{
	char character;
	while (scanf(" %c", &character) != EOF)
	{
		if (character == '-') pop();
		else push();
	}
	return 0;
}
