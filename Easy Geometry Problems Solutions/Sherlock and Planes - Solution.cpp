#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t;i ++)
    {
        bool x = true, y = true, z = true;
        for (int j = 0; j < 4; j++)
        {
            int a,b,c, cx,cy,cz;
            cin>>a>>b>>c;
            
            if (j == 0){
                cx = a;
                cy = b;
                cz = c;
            }
            else{
                if (a != cx and x == true){ x = false; }
                if(b != cy and y == true){ y = false; }
                if(c != cz and z == true) { z = false; }
            }
        }
        
        if (x or y or z){ 
            cout<<"YES"<<'\n';
            continue;
        }
        cout<<"NO"<<'\n';
    }
}
