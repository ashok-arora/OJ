/**
 *    author:  xyloid
 *    created: 14.04.19 11:53:19 
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
	char ch;
	bool inside = false;
	while ( (ch = getchar()) != EOF ){
		if ( ch == '"' ){
			if (!inside)
				printf("``");
			else 
				printf("''");
			inside = ! inside;
		} else putchar(ch);
   }
	return 0;	
}










