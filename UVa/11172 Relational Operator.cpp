/**
 *    author:  xyloid
 *    created: 29.03.19 22:18:34   
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
	ll t, x, y;
	cin>>t;
	while (t--){
		cin >> x >> y;
		if ( x > y ) cout << ">\n";
		else if ( x < y ) cout<< "<\n";
		else cout<<"=\n";
	}

	return 0;	
}