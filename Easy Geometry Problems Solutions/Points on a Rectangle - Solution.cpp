#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    
    cin>>t;
    bool degx = true;
    bool degy = true;
    for (int i = 0; i < t; i++)
    {
        bool no = false;
        int n;
        cin>>n;
        int cx, cy;
        int mx,my,sx,sy;
        vector<int> v;
        for (int j = 0; j < n; j++)
        {
            int x,y;
            cin>>x>>y;
            if (j != 0){
                if(x > mx){ mx = x; }
                if (y > my){ my = y; }
                if (x < sx){ sx = x; }
                if (y < sy){ sy = y; }
            }
            else{
                mx = x;
                my = y;
                sx = x;
                sy = y;
            }
            v.push_back(x);
            v.push_back(y);
        }
        for(int i = 0; i < v.size(); i+=2){
            if (v[i] < mx and v[i] > sx and v[i+1] < my and v[i+1] > sy){
                no = true;
                break;
            }
        }
        if (no){ cout<<"NO"<<'\n'; }
        else{ cout<<"YES"<<'\n'; }
    } 
}
