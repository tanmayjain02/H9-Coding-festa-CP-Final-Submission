#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
       cin>>a[i];
    }
    int c=0;
    for(int i=n-1;i>0;i--){
      if(a[i]>0){
         while(a[i-1]>=a[i]){
         a[i-1]/=2;
         c++;       
          }
      }
      else {c=-1;break;}
    }
    cout<<c<<endl;
   }
}
