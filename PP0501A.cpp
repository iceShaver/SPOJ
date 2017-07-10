#include <iostream>

using namespace std;
int NWD(int a, int b)
{
    while(b)
    {
        int tmp = b;
        b = a%b;
        a = tmp;
    }
    return a;
}

int main()
{
    int n, a, b;
    cin >> n;
    while(n--)
    {
        cin >> a >> b;
        cout << NWD(a, b) << endl;
    }
    return 0;
}
