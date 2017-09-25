//SPOJ: CALC2
//TIME: 2017-09-25
#include <cstdio>
#define REGISTER_SIZE 10
typedef short NumberType;

class Calculator
{

public:
	Calculator(short registerSize) : registerArrayPtr(new NumberType[registerSize])
	{
		for (int i = 0; i < registerSize; ++i)
			registerArrayPtr[i] = 0;
	}

	~Calculator()
	{
		delete[] registerArrayPtr;
	}

	NumberType plus(short aIndex, short bIndex) const
	{
		return registerArrayPtr[aIndex] + registerArrayPtr[bIndex];
	}
	NumberType minus(short aIndex, short bIndex) const
	{
		return registerArrayPtr[aIndex] - registerArrayPtr[bIndex];
	}
	NumberType multiply(short aIndex, short bIndex) const
	{
		return registerArrayPtr[aIndex] * registerArrayPtr[bIndex];
	}
	NumberType divide(short aIndex, short bIndex) const
	{
		return registerArrayPtr[aIndex] / registerArrayPtr[bIndex];
	}
	NumberType modulo(short aIndex, short bIndex) const
	{
		return registerArrayPtr[aIndex] % registerArrayPtr[bIndex];
	}
	void save(short index, NumberType number) const
	{
		registerArrayPtr[index] = number;
	}


private:
	NumberType * registerArrayPtr;
};




int main(int argc, char* argv[])
{
	Calculator calculator(REGISTER_SIZE);
	char character;
	short aIndex, bIndex;
	NumberType number;
	while (scanf("%c", &character) != EOF)
	{
		switch (character)
		{
		case '+':
			scanf("%hd%hd", &aIndex, &bIndex);
			printf("%hd\n",calculator.plus(aIndex, bIndex));
			break;
		case '-':
			scanf("%hd%hd", &aIndex, &bIndex);
			printf("%hd\n", calculator.minus(aIndex, bIndex));
			break;
		case '*':
			scanf("%hd%hd", &aIndex, &bIndex);
			printf("%hd\n", calculator.multiply(aIndex, bIndex));
			break;
		case '/':
			scanf("%hd%hd", &aIndex, &bIndex);
			printf("%hd\n", calculator.divide(aIndex, bIndex));
			break;
		case '%':
			scanf("%hd%hd", &aIndex, &bIndex);
			printf("%hd\n", calculator.modulo(aIndex, bIndex));
			break;
		case 'z':
			scanf("%hd%hd", &aIndex, &number);
			calculator.save(aIndex, number);
			break;
		}
	}
	return 0;
}
