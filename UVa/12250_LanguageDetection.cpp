/**
 *    author:  xyloid
 *    created: 02.07.19 00:43:32
 **/

#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
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


int main(){
	char c[20];
	int x = 1;
	while (scanf("%s", c) != EOF){
		if ( c[0] == '#' ) break;
			cout<<"Case "<<x++<<": ";
		if ( strcmp(c, "HELLO") == 0 ) 
			cout<<"ENGLISH\n";
		else if ( strcmp(c, "HOLA") == 0 ) 
			cout<<"SPANISH\n";
		else if ( strcmp(c, "HALLO") == 0 ) 
			cout<<"GERMAN\n";
		else if ( strcmp(c, "BONJOUR") == 0 ) 
			cout<<"FRENCH\n";
		else if ( strcmp(c, "CIAO") == 0 ) 
			cout<<"ITALIAN\n";
		else if ( strcmp(c, "ZDRAVSTVUJTE") == 0 ) 
			cout<<"RUSSIAN\n";
		else
			cout<<"UNKNOWN\n";
	}
	return 0;
}
	
	
	
	
	
	
