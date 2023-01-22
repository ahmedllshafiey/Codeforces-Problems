#include<iostream>
using namespace std;

int main(){
    int x;
    int f[x];

    cin >> x;

    for(int i = 0; i < x; i++){
        cin >> f[i];
    }

    int sol;

    for (int i = 0; i < x; i++){
        sol = (f[i] -1)*(x);
    }

    cout << sol;
    return 0; 
}