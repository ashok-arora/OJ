/**
 *    author:  xyloid
 *    created: 30.06.19 18:35:13 
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
        int T;
        cin>>T;
        while(T--){
        	int n = 0, s = 0, t = 0;
        	cin>>n>>s>>t;
        	cout<<n-min(s,t)+1<<'\n';
        	/*if ( n == s && n == t ) 
        		cout<<"1\n";
        	else {
        		cout<<min(s,t)+1<<'\n';
        	}*/	
        }	 
        return 0;
}
        	
