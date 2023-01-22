#include<iostream>
using namespace std;

int main(){
    int arr[100];

    int n;
    cin >> n;

    for(int i = 0; i < n ; i++){
        cin>>arr[i];
    }

    bool valid = true;

    for(int i =0; i < n; i++){
        int C = 0;
        for(int j =0; j < n; j++){
            if(arr[i] == arr[j]){
                ++C;
            }

        if(n < 2*C-1){
            valid = false;
            break;
            }
        }
    }

    if(valid){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }
    return 0;
}