
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

const int INF = 1e9;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	vector<pair<int, int>> b(m);
	for (int i = 0; i < m; ++i) {
		cin >> b[i].first >> b[i].second;
		--b[i].first;
		--b[i].second;
	}
	
	int ans = *max_element(a.begin(), a.end()) - *min_element(a.begin(), a.end());
	vector<int> res;
	for (int i = 0; i < n; ++i) {
		vector<int> add(n + 1);
		vector<int> cur;
		for (int j = 0; j < m; ++j) {
			if (!(b[j].first <= i && i <= b[j].second)) {
				cur.push_back(j);
				for (int k = b[j].first; k <= b[j].second; ++k) {
					--add[k];
				}
			}
		}
		int mn = INF, mx = -INF;
		for (int j = 0; j < n; ++j) {
			mn = min(mn, a[j] + add[j]);
			mx = max(mx, a[j] + add[j]);
		}
		if (ans < mx - mn) {
			ans = mx - mn;
			res = cur;
		}
	}
	
	cout << ans << endl << res.size() << endl;
	for (auto it : res) cout << it + 1 << " ";
	cout << endl;
	
	return 0;
}