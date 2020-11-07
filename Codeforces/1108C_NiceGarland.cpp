#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int x, y, z = INT_MAX;
	string s = "", p = "", q = "", r = "BGR";
	cin>>x>>s;
	do {
		p = "", y = 0;
		for ( int i = 0 ; i < x ; i++ ){
			p += r[i%3];
			if ( r[i%3] != s[i] )
				++y;
		}
		
		if ( y < z ){
		 z = y;
		 q = p;
		}
  	} while ( next_permutation(r.begin(), r.end()) ); 
  	/* next_permutation requires array to be sorted */
  
	cout<<z<<endl<<q<<endl;
  	return 0;
}