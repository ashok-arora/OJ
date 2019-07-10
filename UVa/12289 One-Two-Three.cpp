/**
 *    author:  xyloid
 *    created: 03.07.19 01:13:15
 **/

#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <string>

using namespace std;

typedef long long      ll;
typedef pair<int, int> ii;
typedef pair<ii, int>  iii;
typedef vector<int>    vi;
typedef vector<ii>     vii;
typedef vector<iii>    viii;
const   int            inf = 0;
const   double         eps = 0;
const   int            ms  = 0;
const   int            md  = 0;


int main(){
	int x;
	cin>>x;
	while(x--){
		string s;
		cin>>s;
		if ( s.length() == 5 )
			cout<<"3\n";
		else if ( ( s[0] == 'o' && s[1] == 'n' ) || ( s[0] == 'o' && s[2] == 'e' ) || ( s[1] == 'n' && s[2] == 'e' ) )
			cout<<"1\n";
		else 
			cout<<"2\n";
	}
	return 0;
}

			
