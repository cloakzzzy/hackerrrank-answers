#include <iostream>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin>>n;
    ll ym = 1431413434,xm = 1431413434;
    for (int i = 0; i < n; i++){
        ll y,x;
        cin>>y>>x;
        if (y < ym) { ym = y; }
        if (x < xm) { xm = x; }
    }
    cout<<ym*xm<<'\n';
}
