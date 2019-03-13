#include <iostream>
#include <vector>
using namespace std;
int main(){
	int x, l1, r1, l2, r2;
	cin>>x;
	for ( int i = 0 ; i < x ; i++ ){
		cin>>l1>>r1>>l2>>r2;
		if ( l1 == r2 ) cout<<r1<<" "<<r2<<endl;
		else cout<<l1<<" "<<r2<<endl;
	}
	
}