//SPOJ: JZLICZ
//TIME: 2017-12-26
#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
    unsigned rows;
    string row;
    map<char, unsigned> small_letters;
    map<char, unsigned> big_letters;
    cin >> rows;
    cin.ignore();
    while (rows--)
    {
        getline(cin, row);
        for(auto ch : row) {
            if(ch == ' ')
                continue;
            if(ch >= 'A' && ch <= 'Z') {
                if (big_letters.find(ch) == big_letters.end()) // not in letters
                    big_letters[ch] = 1;
                else
                    big_letters[ch]++;
            }else {
                if (small_letters.find(ch) == small_letters.end()) // not in letters
                    small_letters[ch] = 1;
                else
                    small_letters[ch]++;
            }
            
        }
    }
    for(auto pair : small_letters) {
        cout << pair.first << " " << pair.second << endl;
    }
    for(auto pair : big_letters) {
        cout << pair.first << " " << pair.second << endl;
    }
    return 0;
}