#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){
int n;
int x;
cin>>n>>x;
int subscriptions;

if(n%6==0){
    subscriptions=n/6;
}
else{
    subscriptions=n/6+1;
}
int totalcost=subscriptions*x;

cout<<totalcost<<endl;
}
return 0;
}
