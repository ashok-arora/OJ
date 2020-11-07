
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

#define debug(x)       { cerr << #x << " = " << x << endl; }
#define p(x) cout<<"(x)"<<(x)<<endl;
#define range(x, y)  for(int x = 0 ; x < y ; x++ )
/* This question and the one following it, revolve around the use of segment trees, 
 * hence the same has been used, despite the existence of a slower, cleaner method. 
 * This is my first attempt at working with static data structures.
 */

const int N = 1e5;  // limit for array size
int t[2 * N];
/*
void build() {  // build the tree
							//	  t[i] = t[i*2]  + t[i*2+1]

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
*/
/*int main() {
	int n, m;
	pair <int, int> temp;
	vector <pair <int, int>> vp;		
	
	cin>>n>>m;
	for (int i = 0; i < n; ++i){
		cin>>t[i+n];	
  	}
  	for (int i = n - 1; i > 0; --i) t[i] = t[i<<1] + t[i<<1|1];
	for ( int j = 0 ; j < m ; j++){
		cin>>temp.first>>temp.second;
		if ( ! (*max_element(t, (int *)sizeof(t)) >= temp.first &&  *max_element(t, (int *)sizeof(t)) <= temp.second ) ){ 
			vp.push_back(temp);
			for ( int i  = 0 ; i < vp.size() ; i++ )
			for (vp[i].first += n, vp[i].second += n; vp[i].first < vp[i].second; vp[i].first >>= 1, vp[i].second >>= 1) {
    				if (vp[i].first&1) t[vp[i].first++] -= 1;
    				if (vp[i].second&1) t[--vp[i].second] -= 1;
  			}
		}
	

	}
	
  	cout<<endl;
  	return 0;
}

int main(){
	
	int n, m, min_pos = 0, max_pos = 0, xx = 0, yy = 0;
	cin>>n>>m;
	int ar[n+1];
	pair <int, int> p;
	for ( int i = 1 ; i <= n ; i++ ){
		cin>>ar[i];	
	}
	max_pos = distance(ar, max_element(ar+1, ar+1+n));
	min_pos = distance(ar, min_element(ar+1, ar+1+n));
	for ( int j = 1 ; j <= m ; j++ ){
		debug(max_pos);
		debug(min_pos);
		cin>>--p.first>>--p.second;
		if ( p.first <= max_pos && p.second >= max_pos )
		{}//	continue;
		if ( p.first <= min_pos && p.second >= min_pos )
			xx++;
		else   yy++;
	}
	debug(xx);
	debug(yy);
	
}
*/
int main(){
	int x, y, mn = 1e9, mx = -1e9;
	cin>>x>>y;
	vector <int> a(x), res, add(x+1), cur;
	range(i, x)
		cin>>a[i];
	vector <pair <int, int>> b(y);
	range(j, y)
		cin>>(--b[j].first)>>(--b[j].second);
	int ans = *max_element(a.begin(), a.end()) - *min_element(a.begin(), a.end());
	range(k, x){
		add.clear(), cur.clear();
		range(l, y){
			if (!(b[l].first <= k && k <= b[l].second)){ // check if k lies within range [second, first)
				cur.push_back(l);
				for ( int m = b[l].first; m < b[l].second; m++) // subtract 1 from range [second, first)
					--add[k];
			}	
		}
		range(n, y){
			mn = min(mn, a[n] + add[n]);
			mx = max(mn, a[n] + add[n]);
		}
		if ( ans < (mx - mn) ){
			ans = mx - mn;
			res = cur;
		}
	}
	cout<<ans<<'\n'<<res.size()<<'\n';
	for ( auto it : res ) cout<<it+1<<" ";
	cout<<'\n';
	return 0;
}



		