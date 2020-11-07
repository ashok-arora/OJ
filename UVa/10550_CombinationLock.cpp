/**
 *    author:  xyloid
 *    created: 30.04.19 17:58:32
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
        long int t, x, y, z;
        t =  x = y = z = 0;
        while(true){
                cin>>t>>x>>y>>z;
                int n = t + x + y + z;
                if (n == 0) break;
                else {
                        int count = 1080;
                        count += (t - x) > 0 ? (t - x) * 9 : (t - x + 40) * 9;
                        count += (y - x) > 0 ? (y - x) * 9 : (y - x + 40) * 9;
                        count += (y - z) > 0 ? (y - z) * 9 : (y - z + 40) * 9;
                        cout<<count<<'\n';
                }
        }
        return 0;
}










