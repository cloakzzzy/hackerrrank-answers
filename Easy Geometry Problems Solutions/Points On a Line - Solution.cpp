#include<iostream>
using namespace std;
int main(){
    int p;
    cin>>p;
    bool v = true; bool h = true;
    int cx; int cy;
    for (int i = 0; i < p; i++){
        int x; int y; 
        cin>>x>>y;
        if (i == 0) { 
            cx = x; 
            cy = y;
        }
        if (i > 0 and x != cx){ v = false; }
        if (i > 0 and y != cy){ h = false; }
    }
    if (v or h) { cout<<"YES"<<'\n'; }
    else { cout<<"NO"<<'\n'; }
}
