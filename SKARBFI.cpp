#include <iostream>
using namespace std;

struct Pos
{
	int x, y;
};
enum Direction
{
	N, S, W, E
};

int main(int argc, char* argv[])
{
	unsigned setsNumber;
	cin >> setsNumber;
	unsigned direction, steps;
	Pos curPos;
	for (int i = 0; i < setsNumber; ++i)
	{
		unsigned cues;
		cin >> cues;
		curPos.x = curPos.y = 0;
		for (int i = 0; i < cues; ++i)
		{

			cin >> direction >> steps;
			switch (static_cast<Direction>(direction))
			{
			case N: curPos.y += steps; break;
			case S: curPos.y -= steps; break;
			case W: curPos.x -= steps; break;
			case E: curPos.x += steps; break;
			default:;
			}
		}
		if (curPos.y > 0)
		{
			cout << N << " " << curPos.y << endl;
		}
		else if (curPos.y < 0)
		{
			cout << S << " " << abs(curPos.y) << endl;
		}
		if (curPos.x > 0)
		{
			cout << E << " " << curPos.x << endl;
		}
		else if (curPos.x < 0)
		{
			cout << W << " " << abs(curPos.x) << endl;
		}
		else if (curPos.y == 0)
			cout << "studnia" << endl;



	}
	return 0;
}
