/**
 *    author:  xyloid
 *    created: 26.02.19 10:55:21   
**/

#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <string>
#include <cstring>

// #define endl '\n'
#define debug(x)       { cerr << #x << " = " << x << endl; }
#define rep(i, x)   for ( int i = 0 ; i < x ; i++)

using namespace std;

typedef long long      ll;       

int main(){
	ll t, n, k, v, x, sum;
	t = n = k = v = x = sum = 0;

	cin>>t;
	rep(i, t){
		sum = 0;
		cin>>n>>k>>v;
		rep(j, n){
			cin>>x;
			sum += x;
		}
		if ( v*(n+k) > sum && (v*(n+k)-sum)%k == 0 ) 
			cout<<(v*(n+k)-sum)/k<<'\n';
		else
			cout<<"-1\n";  
			
	}	
	return 0;	
}










