#include <bits/stdc++.h>
#define re return
#define ll long long
#define ld long double
#define f first
#define s second
#define pi acos(-1)
#define oo (ll)1e9
#define OO (ll)1e18
#define EPS 1e-7
#define FX(n) fixed<<setprecision(n)
#define mm(o,k) memset(o,k,sizeof o)
#define IO ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
const int maxn=200005;
int main()
{
    IO;
    int n;
    string s;
    cin >> n >> s;
    bool done=false;
    for(int i=1;i<n;++i){
        if(s[i]=='?' && s[i-1]=='?')
            done=true;
        else if(s[i]=='?' && i+1 < n && s[i-1]==s[i+1])
            done=true;
        else if(s[i]==s[i-1])
            exit(puts("No"));
 
    }
    if(done || s[0]=='?' || s[n-1]=='?')
        puts("Yes");
    else
        puts("No");
    re 0;
}