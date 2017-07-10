#include <iostream>

int cyfra(int a, int b){
    if(b==0) return 1;

    int lc = a%10;
    if(lc==0) return 0;
    if(lc==5)
        return 5;
    if(lc==6)
        return 6;
    if(lc==1)
        return 1;
    if(lc==9){
        if(b%2==0) return 1;
        else return 9;

    }
    if(lc==8){
        if(b==1)
            return 8;
        if(b%3==0) return 2;
        if(b%3==1) return 6;
        if(b%3==2) return 4;
    }
    if(lc==2){
        if(b%4==0) return 6;
        if(b%4==1) return 2;
        if(b%4==2) return 4;
        if(b%4==3) return 8;
    }
    if(lc==3){
        if(b%4==0) return 7;
        if(b%4==1) return 3;
        if(b%4==2) return 9;
        if(b%4==3) return 7;
    }
    if(lc==4){
        if(b%2==0) return 6;
        else return 4;

    }
    if(lc==7){
        if(b%4==0) return 1;
        if(b%4==1) return 7;
        if(b%4==2) return 9;
        if(b%4==3) return 3;
    }





}



using namespace std;
int main(){
    unsigned short int n;
    cin >> n;
    int a, b;
    while(n--) {
        cin >> a >> b;
        cout << cyfra(a, b) << endl;

    }

    return 0;
}
