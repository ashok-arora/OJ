#include <iostream>
using namespace std;
#define debug(x)       { cerr << #x << " = " << x << '\t'; }
int main(){
	long int n, k, x, t, count;
	n = k = x = t = count =	 0;
	cin>>t;
	while(t--){
		count = 0;  // Reset count after each test case, courtesy of debug statements. 
		cin>>n>>k;
		while(n--){
			cin>>x;
			//debug(x);
			if ( x > 1 ) ++count;
		}
		//debug(count);
		if ( count > k ) cout<<"NO\n";
		else 		 cout<<"YES\n";
	}
	return 0;
}
  
	