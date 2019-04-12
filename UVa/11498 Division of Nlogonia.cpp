/**
 *    author:  xyloid
 *    created: 31.03.19 13:13:54   
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

struct cords{
	int x;
	int y;
};

int main(){
	ll t;
	cords border, house, diff;
	while(true){
		cin >> t;
		if ( t ){
			cin >> border.x >> border.y;
				while(t--){
					cin >> house.x >> house.y;
			
					diff.x = house.x - border.x;
					diff.y = house.y - border.y;

					if ( diff.x == 0 || diff.y == 0 ) cout << "divisa\n";
					else if ( diff.x > 0 && diff.y > 0 ) cout<<"NE\n";
					else if ( diff.x < 0 && diff.y > 0 ) cout<<"NO\n";
					else if ( diff.x < 0 && diff.y < 0 ) cout<<"SO\n";
					else if ( diff.x > 0 && diff.y < 0 ) cout<<"SE\n";
				}
		}
		else break;
	}		  
	return 0;	
}











