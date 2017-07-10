#include <bits/stdc++.h>
using namespace std;
int NWD(int a, int b)
{
    int tmp;
    while(b)
    {
        tmp = b;

        b = a%b;
        a = tmp;
    }
    return a;

}
int NWW(int a, int b)
{
    return a*b/NWD(a, b);
}


int main()
{
    int n, a, b;
    cin >> n;
    while(n--)
    {
        cin >> a >> b;
        cout << NWW(a, b) << endl;

    }

    return 0;
}
