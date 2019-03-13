#include <iostream>
using namespace std;
int main(){
	long long int x, a, b;
	cin>>x;
	for(int i = 0 ; i < x ; i++ ){
		cin>>a>>b;
		if ( a > b ) cout<<">\n";
		else if ( a < b ) cout<<"<\n";
		else cout<<"=\n";
	}
 
}