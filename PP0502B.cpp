#include <iostream>

using namespace std;

int main()
{
    int t,n,n1,tab[100],i;
    cin >> t;
    while(t--){
        cin >>n;
        i=0;
        n1=n;
        while(n--){
            cin >> tab[i];
            i++;
        }
        while(n1--){
            cout << tab[n1] << " ";
        }
        cout << endl;

    }
    return 0;
}
