#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    int a[n];

    for(int i = 0; i < n ; i++){
        cin>>a[i];
    }

    int ans = 1e9;
    for(int i = 0; i < n-1; i++){
        if(s[i]=='R'&&s[i+1]=='L') ans = min(ans,(a[i+1]-a[i])/2);
    }

    if(ans ==1e9)cout<<-1<<endl;
    else cout<<ans<<endl;

    return 0;
}