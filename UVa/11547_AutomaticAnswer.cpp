/**
 *    author:  xyloid
 *    created: 02.07.19 00:37:15
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
	int x, y;
	cin>>x;
	while(x--){
		cin>>y;
		y = abs( ((315*y+36962) / 10 ) % 10);
		cout<<y<<'\n';
	}	
	return 0;
}
