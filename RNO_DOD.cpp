#include <iostream>

using namespace std;

int main()
{
    int n, i, t, sum;
    cin >> n;
    while(n--){
        cin >> i;
        sum=0;
        while(i--){
           cin >> t;
           sum+=t;
        }
        cout << sum << endl;
    }
    return 0;
}
