#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int t, ai, bi, i;
    string a, b, c;
    cin >> t;
    while(t--){
            i=0;
        cin >> a >> b;
        ai = a.length();
        bi = b.length();
        while(ai-- && bi--){
            cout << a[i] << b[i];
    i++;
        }
        cout << endl;
    }
    return 0;
}
