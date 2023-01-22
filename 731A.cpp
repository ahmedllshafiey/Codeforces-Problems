#include<iostream>
#include<iostream>
#include<cmath>

using namespace std;

int main(){
    string s;
    cin>> s;
    int len = s.length();
    int Smoves = 0;
    int strt = 0;
    for (int i = 0; i < len ; i++){
        int index = s[i]-97;
        int walk = abs(strt-index);
        if (walk < 13){
            Smoves += walk;
        }else{
            Smoves += 26 - walk;
        }
        strt = index;
    }

    cout<<abs(Smoves);
}