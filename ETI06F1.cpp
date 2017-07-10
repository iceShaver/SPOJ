#include <iostream>
using namespace std;

int main()
{
    double r, d, w, pi=3.141592654;


        cin >> r >> d;
        w = pi * ((r*r)-((d*d)/4));
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << w;

    return 0;
}
