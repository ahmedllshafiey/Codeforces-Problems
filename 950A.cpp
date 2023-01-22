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
const int maxn=100005;
 
int main()
{
    IO;
    int l,r,a;
    cin >> l >> r >> a;
    while(a>0){
        if(l<r)
            ++l;
        else
            ++r;
        --a;
    }
    cout<<min(l,r)*2<<endl;
    re 0;
}