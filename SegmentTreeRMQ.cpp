/**
 *    author:  xyloid
 *    created: 29.06.19 17:13:28
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

class SegmentTree{
        private:
                vi st, A;
                int n;
                int left(int p)  { return p << 1; }
                int right(int p) { return (p << 1)+1; }

                void build(int p, int L, int R){
                        if ( L == R ) st[p] = L;
                        else {
                                build (left(p) ,      L      , (L+R)/2);
                                build (right(p), (L+R)/ 2 + 1,    R   );

                                int p1 = st[left(p)], p2 = st[right(p)];
                                st[p] = ( A[p1] <= A[p2] ) ? p1 : p2;
                        }
                }

                int rmq(int p, int L, int R, int i, int j){
                        if ( i > R || j < L ) return -1; // outside query range
                        if ( L >= i && R <= j ) return st[p]; // exactly inside query range

                        int p1 = rmq(left(p) ,      L      , (L+R)/2, i, j);
                        int p2 = rmq(right(p), (L+R)/ 2 + 1,    R   , i, j);

                        if ( p1 == -1 ) return p2;
                        if ( p2 == -1 ) return p1;
                        return ( A[p1] <= A[p2] ) ? p1 : p2;
                }
        public:
                SegmentTree(vi _A){
                        A = _A ;
                        n = (int)A.size();
                        st.assign(4 * n, 0); // st => segment tree
                        build(1, 0, n-1);
                }
                int rmq(int i, int j){ return rmq(1,0,n-1,i,j); }
};

int main(){
        int n = 0, l = 0, r = 0;
        cout<<"Enter Array size: ";
        cin>>n;
        int arr[n];
        cout<<"Enter Array content: ";
        for ( int i = 0 ; i < n ; i++ ){
                cin>>arr[i];
        }
        vi A(arr, arr + n);
        SegmentTree st(A);
        while(true){
                scanf("%d %d", &l, &r);
                printf("\rRMQ(%d,%d) = %d\n", l, r, arr[st.rmq(l, r)]);
                fflush(stdout);
        }
        return 0;
}
