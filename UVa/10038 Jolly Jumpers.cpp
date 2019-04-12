/**
 *    author:  xyloid
 *    created: 14.03.19 12:59:40  
**/


#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <string>
#include <cstring>

#define endl '\n'

using namespace std;

int main(){
	long int x, a[x], t;
	while(cin>>x){
		for(int i = 0 ; i < x ; i++ ){
			cin>>a[i];
		}
		t = abs(a[0] - a[1]);
		for ( int i = 2 ; i < x ; i++ ){
			if (abs(a[i]-a[i-1]) == --t						
	}
	return 0;	
}










