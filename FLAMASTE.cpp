#include <iostream>
#include <string>
#include <sstream>

using namespace std;


string transformString(string wyr)
{
    string transformedString = "";
    string letter;
    int tmp;
    for(int i = 0; i<wyr.length(); i++)
    {
        tmp = 1;
        letter = wyr[i];
        while(wyr[i]==wyr[i+1])
        {
            tmp++;
            i++;
        }
        if(tmp>2)
        {
            stringstream ss;
            ss << tmp;
            transformedString = transformedString + letter + ss.str();
        }
        else{
            for(int j = 0; j<tmp; j++){
                transformedString +=letter;
            }
        }

    }

    return transformedString;
}



int main()
{
    int n;
    cin >> n;
    string wyr;
    while(n--)
    {
        cin >> wyr;
        cout << transformString(wyr) << endl;

    }

    return 0;
}
