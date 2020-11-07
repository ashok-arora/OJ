#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int x;
	pair <int, int> max = make_pair(0,0);
	cin>>x;
	int ar[x];
	for ( int i = 0 ; i < x ; i++ ){
		cin>>ar[i];
		ar[i] > max.first ? (max.first = ar[i]) : (max.first) ; 
	}
	
	for ( int i = 0 ; i < x ; i++)
		if ( max.first % ar[i]  )
		    ar[i] >= max.second ? (max.second = ar[i]) : (max.second) ;

	if (max.second == 0)
 		for ( int i = 0 ; i < x ; i++ )
  			if ( (count(ar, ar+x, ar[x]) > 1) && ar[x] > max.second) max.second = ar[x];
			
	cout<<max.first<<" "<<max.second<<endl;
}