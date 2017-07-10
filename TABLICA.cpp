#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack <int> stos;
    int t,i=0;
    while(cin >> t){
    stos.push(t);
    i++;
    }
    while(!stos.empty()){
        cout << stos.top() << " ";
        stos.pop();
    }



    return 0;
}
