#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
    string s;
    cin >> s;
    int n = s.size();
    int a=-1 , b=-1;

    for(int i = 0; i<n; i++ ){
      if( s[i] == '0' ){ b=i ; break; }
    }
    for(int i=n-1 ; i>=0 ;i--){
      if( s[i] == '1' ){ a=i; break; }
    }

    int sspt;
    if( a ==-1 && b ==-1 ) sspt = n;
    else if( a== -1 ) sspt = b+1;
    else if( b== -1 ) sspt = n-a;
    else sspt = b-a+1;
    cout << sspt << endl;
   }
}