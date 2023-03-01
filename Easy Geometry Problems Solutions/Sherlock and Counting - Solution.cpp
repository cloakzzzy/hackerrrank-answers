// A 14 years old's solution
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std; 
#define dbl double
int main()
{
    dbl q;
    cin>>q;
    for (dbl i = 0; i < q; i++){
        dbl n; dbl k;
        cin>>n>>k;
        if ((n * n - (4 * 1 * n * k)) <= 0){
            cout<<setprecision(1000)<<n - 1<<'\n';
            continue;
        }
        dbl val = ((n - sqrt(n * n - (4 * 1 * n*k))) / 2 * 1);
        cout<<setprecision(1000)<<(floor(val) * 2)<<'\n';
    }
}
