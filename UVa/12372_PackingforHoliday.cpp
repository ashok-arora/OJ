/**
 *    author:  xyloid
 *    created: 07.07.19 13:32:59
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
	int t, l, w, h; 
	cin>>t;
	for(int i = 1 ; i <= t ; i++ ){
		cin>>l>>w>>h;
		if ( l <= 20 && w <= 20 && h <= 20 )
			cout<<"Case "<<i<<": good\n";
		else 
			cout<<"Case "<<i<<": bad\n";
	}
    return 0;
}
