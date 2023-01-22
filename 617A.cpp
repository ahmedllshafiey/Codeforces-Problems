#include<iostream>

using namespace std;

int main(){

    int x,s;
    cin >> x;

    if(x > 1000000){
        return 0;
    }

     if(x < 1){
        return 0;
    }

    if(x%5==0){
        s = x/5;
        }else if (x%4==0){
            s = x/4;
            }else if (x%3==0){
                s = x/3;
                }else if(x%2==0){
                    s = x/2;
                    }else{
                    s = x;
                }

                
    cout << s;

    return 0;
}