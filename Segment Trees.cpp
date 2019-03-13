
/**
 *    author:  xyloid
 *    created: 05.02.19 09:52:34   
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

/* Codeforces Question E1 of Round 1108(Div 2, Educational) and the one following it, 
 * revolve around the use of segment trees, hence the same has been used, despite the 
 * existence of a slower, cleaner method. This is my first attempt at working with static data structures.
 */

const int N = 1e5;  // limit for array size
int n;  // array size
int t[2 * N];

void build() {  // build the tree
							//	  t[i] = t[i*2]  + t[i*2+1]
	for (int i = n - 1; i > 0; --i) t[i] = t[i<<1] + t[i<<1|1];
}

void modify(int p, int value){ // set value at position p

						//      p = p/2 ) t[p/2]  = t[p] + t[p 
  	for (t[p += n] = value; p > 1; p >>= 1) t[p>>1] = t[p] + t[p^1];
}
int query(int l, int r) {  // sum on interval [l, r)
  	int res = 0;
  	for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
    	// if ( l % 2 == 1 )
		if (l&1) res += t[l++];
    
		// if ( r % 2 == 1 )
		if (r&1) res += t[--r];
  	}
  	return res;
}

int main() {
  	cin>>n;				
  	for (int i = 0; i < n; ++i){

  		/* Elements are stored after every n, i.e. there are 'n' free spaces 
		 * between two elements. 
		 */ 

  		cin>>t[i+n];	
  	}
  	
  	build();
  	for (int i = 0; i < n; i++){ 
	  	cout<<t[i+n]<<'\t'; 
  	}
  	cout<<endl;
  	return 0;
}



  


