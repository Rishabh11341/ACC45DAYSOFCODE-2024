#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int d_dsa,d_toc,d_dm;
    int s_dsa,s_toc,s_dm;
    
    cin>>d_dsa>>d_toc>>d_dm;
    cin>>s_dsa>>s_toc>>s_dm;
    
    int d_total=d_dsa+d_toc+d_dm;
    int s_total=s_dsa+s_toc+s_dm;
    
    if(d_total>s_total){
        cout<<"dragon"<<endl;
    }
    else if(d_total<s_total){
        cout<<"sloth"<<endl;
    }
    else{
        if(d_dsa>s_dsa){
            cout<<"dragon"<<endl;
        }
        else if(d_dsa<s_dsa){
            cout<<"sloth"<<endl;
        }
        else{
            if(d_toc>s_toc){
                cout<<"dragon"<<endl;
            }
            else if(d_toc<s_toc){
                cout<<"sloth"<<endl;
            }
            else{
                cout<<"tie"<<endl;
            }
        }
    }

}

    return 0;

}
