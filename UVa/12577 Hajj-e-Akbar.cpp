/**
 *    author:  xyloid
 *    created: 09.07.19 22:40:56
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
    int i = 1;
    string s;
    do{
        cin>>s;
        if (s[0] == '*')
            break;
        else if ( s[0] == 'H')
            cout<<"Case "<<i++<<": Hajj-e-Akbar\n";
        else 
            cout<<"Case "<<i++<<": Hajj-e-Asghar\n";

    }while(true);
    return 0;
}
