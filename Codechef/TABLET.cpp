#include <iostream>                                           
#include <vector>
#define range(I,X) for ( int I = 0 ; I < X ; I++ )
using namespace std;

int main(){
	long long int t,n,b,p,w,h, max;
	cin>>t;
	range(i, t){
		cin>>n>>b;
		max = -1;
		range(j,n){
			cin>>w>>h>>p;
 			if(w*h > max && p <= b)
				max = w*h;
		}
		if ( max  == -1 ) cout<<"no tablet\n";
		else cout<<max<<'\n';
	}
}

			
		