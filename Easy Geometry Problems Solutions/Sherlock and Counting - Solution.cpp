#include <iostream>
#include <math.h>

using namespace std; 
#define dbl double

int main()
{
    dbl q;
    cin>>q;
    for (dbl i = 0; i < q; i++){
        dbl n; dbl k;
        cin>>n>>k;
        dbl dsc = n * n - (4 * 1 * n*k);
        if (dsc <= 0){
            cout.precision(10000);
            cout<<n - 1<<'\n';
            continue;
        }
        dbl val = min(((n - sqrt(n * n - (4 * 1 * n*k))) / 2 * 1) , ((n + sqrt(n * n - (4 * 1 * n*k))) / 2 * 1));
        cout.precision(10000);
        cout<<(floor(val) * 2)<<'\n';
        
    }
}
