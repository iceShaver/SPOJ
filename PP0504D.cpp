#include <iostream>
using namespace std;
struct FloatDecoder {
	uint8_t a : 8, b : 8, c : 8, d : 8;
};
void printfloat(float);

int main(int argc, char* argv[])
{
	int t;
	float x;
	cin >> t;
	while (t)
	{
		cin >> x;
		printfloat(x);
		t--;
	}
	return 0;
}
void printfloat(float number)
{
	FloatDecoder* decoded = reinterpret_cast<FloatDecoder*>(&number);
	printf("%x %x %x %x\n", decoded->d, decoded->c, decoded->b, decoded->a);
}
