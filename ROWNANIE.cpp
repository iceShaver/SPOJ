#include <iostream>

using namespace std;

int main()
{
    float a, b, c, d;
    while(cin>>a>>b>>c){

            d = (b*b)-(4*a*c);
        if(d<0) cout << 0;
        else if(d>0) cout << 2;
        else cout << 1;
    cout << endl;
    }

    return 0;
}
