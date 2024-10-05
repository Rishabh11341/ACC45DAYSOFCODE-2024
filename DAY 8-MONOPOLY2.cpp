#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        int p;
        int q;
        int r;
        int s;
        cin>>p>>q>>r>>s;
        if(p>(q+r+s)){
            cout<<"yes"<<endl;
        }
        else if(q>(p+r+s)){
            cout<<"yes"<<endl;
        }
        else if(r>(q+p+s)){
            cout<<"yes"<<endl;
        }
        else if(s>(q+r+p)){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}
