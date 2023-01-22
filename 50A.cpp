#include<iostream>
using namespace std;

int main(){
    int m,n;
    int domino;
    cin >> m >> n;

    int arr[m][n];

    for(int i =0; i < m ; i++){
        for(int j =0; j < n ; j++){
            if(j%2 == 0 && arr[i][j] != 0){
                domino = domino + n/2;
                arr[i][j] = 0;
            }else{
                domino = domino + ((n-1)/2);
            }
        }

    if(i%2 == 0){
        domino = domino + m/2;
    }else{
        domino = domino + ((m-1)/2);
        }
    }

    cout << domino;
    return 0;
}