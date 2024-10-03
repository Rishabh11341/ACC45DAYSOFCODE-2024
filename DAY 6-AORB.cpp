#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    
	    int a;
	    int b;
	    cin>>a>>b;
    int solveafirst=(500-2*a)+(1000-4*(a+b));
    
    int solvebfirst=(1000-4*b)+(500-2*(a+b));
    
    int result=max(solveafirst,solvebfirst);
    
    cout<<result<<endl;
	}
return 0;
}
