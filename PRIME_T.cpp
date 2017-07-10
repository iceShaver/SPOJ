#include <iostream>

using namespace std;

bool czyPierwsza(int liczba)
{
    if(liczba == 1 || liczba == 0)
        return false;
    for(int i = 2; i<= liczba/2; i++){
        if(liczba%i==0) return false;
    }

    return true;
}

int main()
{
    int n, liczba;
    cin >> n;
    while(n--)
    {
        cin >> liczba;
        if(czyPierwsza(liczba))
            cout << "TAK\n";
        else
            cout << "NIE\n";
    }
    return 0;
}
