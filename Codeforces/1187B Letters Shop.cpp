/**
 *    author:  xyloid
 *    created: 30.06.19 19:09:52
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


bool IsCharDuplication (char c, string s)
{
  string s2 = s;
  sort(s2.begin(), s2.end());
  cout<<s2;
  for (int i = 0; i < s.length () - 1; i++)
    if (s2[i] == s2[i+1] && s2[i] == c)
      return true;
  return false;
}

int main() 
{ 
 	string s, i;
	int n = 0, m = 0;
	cin>>n;
	cin>>s;
	cin>>m;
	while(m--){
		int last_pos = 0;
		cin>>i;
		char *p = NULL;
		if ( s.size() == i.size() ) cout<<i.size();
		else{
			for ( char &c : i ){
				cout<<IsCharDuplication(c,i)<<'\n';
				if ( IsCharDuplication(c, i) == true)
					p = strrchr(s.c_str(), c);
				else 
					p = strchr (s.c_str(), c);
					
				printf ("found at %d\n",p-s.c_str()+1);
				if ( ( p - s.c_str() + 1 ) > last_pos )
					last_pos = p - s.c_str() + 1;
				}
			cout<<last_pos<<'\n';
		}
		
	} 
	return 0; 
} 

