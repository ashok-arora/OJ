/**
 *    author:  xyloid
 *    created: 02.07.19 13:14:42
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
	int x, y, z, t = 1;
	do{
		z = 0;
		cin>>x;
		if ( x == 0 ) break;
		for ( int i = 0 ; i < x ; i++ ){
			cin>>y;
			if ( y > 0 ) z++;
			else z--;
		}
		cout<<"Case "<<t++<<": "<<z<<'\n';
	}while(true);
	return 0;
}
