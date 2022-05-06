#include<bits/stdc++.h>
using namespace std ;
 
int main() {
   int t ;
   cin >> t ;
   while(t--) {
      int a,b,c,x,y;
      cin >> a>>b>>c>>x>>y ;
      int c1 = x-a;
      int c2 = y-b;
      if( c1 < 0) c1 =0 ;
      if( c2 < 0) c2= 0;
      if( c1+c2 <= c) cout << "YES" <<endl ;
      else cout << "NO" << endl;
   }
}