/**
 *    author:  xyloid
 *    created: 31.01.19 15:38:33      
**/

#include <algorithm>
#include <iostream>

using namespace std;

int main(){
	string s, c;
	int x, j = 0, a = 0;
	cin>>x>>s;
	for ( int i = 0 ; i < x ; i++ ){
		j = i;
		c = "RGB";
		while(s[i] == s[j]) ++j;
		c.erase(c.find(s[i]), 1);
		if ( j < x ) c.erase(c.find(s[j]),1);
		a += (int)((j-i)/2);
		for ( int p = i+1 ; p < j ; p += 2 )
			s[p] = c[0];
			
	}
	cout<<a<<endl<<s<<endl;
}	