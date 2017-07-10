#include <bits/stdc++.h>

using namespace std;

bool czyPalindrom(int liczba)
{
    stringstream ss;
    ss << liczba;
    string tmp = ss.str();
    int p = 0, k = tmp.length()-1;
    while(p<k)
    {
        if(tmp[p]!=tmp[k]) return false;
        p++;
        k--;
    }


    return true;

}
int RTL(int liczba)
{
    stringstream ss;
    ss << liczba;
    string tmp = ss.str();
    tmp = string(tmp.rbegin(), tmp.rend());
    return atoi(tmp.c_str());

}
int main()
{
    int n, liczba, i;
    cin >> n;
    while(n--)
    {
        i=0;
        cin >> liczba;
        while(!czyPalindrom(liczba))
        {
            liczba += RTL(liczba);
            i++;
        }

        cout << liczba << " " << i << endl;


    }
    return 0;
}
