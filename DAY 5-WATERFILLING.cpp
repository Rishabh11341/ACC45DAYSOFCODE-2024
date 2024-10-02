#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int b1;
	    int b2;
	    int b3;
	    cin>>b1>>b2>>b3;
	    if((b1==0&&b2==0)||(b2==0&&b3==0)||(b1==0&&b3==0)||(b1==0&&b2==0&&b3==0)){
	        cout<<"water filling time"<<endl;
	    }
	    else{
	        cout<<"not now"<<endl;
	    }
	}
return 0;
}
