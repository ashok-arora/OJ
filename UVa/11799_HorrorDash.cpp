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

#define for(i, x)  for ( int i = 0 ; i < x ; i++ )
using namespace std;
typedef long long ll;

int main(){
	ll t, x, y, z;
	cin>>t;
	for (i,t){
		cin>>x;
		int ar[x];
		for(j,x){ 
			cin>>ar[j];
	   	}
 		int max = *max_element(ar, ar+x);
		cout<<"Case "<<i+1<<": "<<max<<'\n'; 
	}

	return 0;
		
}











