//SPOJ: JPESEL
//TIME: 2017-12-27
#include <iostream>
#include <string>
using namespace std;
short ch2num(char ch) {
    return ch - '0';
}
int main() {
    unsigned tests_number, sum;
    string pesel;
    cin >> tests_number;
    while(tests_number--) {
        cin >> pesel;
        sum = 0;
        sum += ch2num(pesel[0]);
        sum += ch2num(pesel[1]) * 3;
        sum += ch2num(pesel[2]) * 7;
        sum += ch2num(pesel[3]) * 9;
        sum += ch2num(pesel[4]);
        sum += ch2num(pesel[5]) * 3;
        sum += ch2num(pesel[6]) * 7;
        sum += ch2num(pesel[7]) * 9;
        sum += ch2num(pesel[8]);
        sum += ch2num(pesel[9]) * 3;
        sum += ch2num(pesel[10]);
        if(sum > 0 && sum%10 == 0) 
            puts("D\n");
        else
            puts("N\n");
    }
    return 0;
}