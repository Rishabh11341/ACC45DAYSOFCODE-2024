#include <iostream>
using namespace std;

bool isconsonant(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        return false;
    }
    return true;
}

int main() {
    int t;
    cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0,mxcount=0;
    for(int i=0;i<n;i++){
        if(isconsonant(s[i])){
            count++;
        }
        else{
            mxcount=max(count,mxcount);
            count=0;
        }
        
    }
    mxcount=max(count,mxcount);
    if(mxcount>=4){
        cout<<"no"<<endl;
    }
    else{
        cout<<"yes"<<endl;
    }
}
    return 0;
}