/**
 *    author:  xyloid
 *    created: 31.03.19 13:40:12   
**/

#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <string>
#include <cstring>

using namespace std;
typedef long long      ll;

int main(){
	ll t, x, y, z;
	cin>>t;
	for ( int i = 1 ; i <= t ; i++ ){
		cin>>x>>y>>z;
		ll mid = max( min(x,y), min( max(x,y), z ) );
		cout<<"Case "<<i<<": "<<mid<<'\n'; 
	}

	return 0;
		
}











