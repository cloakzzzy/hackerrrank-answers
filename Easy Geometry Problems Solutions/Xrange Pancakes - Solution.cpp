#include <iostream>
#include <math.h>

#define dbl double

using namespace std;

int main()
{
    dbl n,m;
    cin>>n>>m;
    dbl apos = 0;
    bool clockwise = true;
    for (int i = 0; i < m; i++)
    {
        dbl type,k;
        cin>>type>>k;
        if (type == 1){
            apos += k;
        }
        if (type == 2){
            clockwise = !clockwise;
            dbl sk = k * (360/(2 * n));
            dbl ek = sk + 180;
            dbl aa = apos * (360/n);
            dbl kpos = k/2;
            
            if ((aa >= sk) and (aa <= ek)){
                apos = kpos - (apos - kpos);
            }
            else{
                apos = kpos + ((n - apos) + kpos);
            }
        }
        if (apos >= n){ apos -= n; } 
        if (apos < 0) {apos += n; }  
    }
    if (clockwise == true){
        cout<<1<<" "<<n-apos<<'\n';
    }
    else{
        dbl ans;
        dbl half = floor(n/2);
        if (apos >= half){
            dbl d = apos + ((n - apos) / 2);
            ans = ((d * 360/n) - 180) / (360 / (2*n));
        }
        else{
            dbl d = apos / 2;
            ans = d * 2;
        }
        cout<<2<<" "<<ans<<'\n';
    }
}