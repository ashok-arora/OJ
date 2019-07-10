/**
 *    author:  xyloid
 *    created: 09.07.19 22:21:15
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
    int t, x, y = 0;
    string s;
    cin>>t;
    while (t--){
        cin>>s;
        if(s[0] == 'd'){
            cin>>x;
            y += x;
        }
        else cout<<y<<'\n';
    }
    return 0;
}
