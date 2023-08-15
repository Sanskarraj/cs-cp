#include<bits/stdc++.h>

using namespace std;

int main(){
int t;
cin>>t;
if(t%2==0){t--;}
for(int i=1;i<=t;i++){
//cout<<"exec";
for(int j=t-i-1;j>0;j--){cout<<" ";}
for(int z=2*i-1;z>0;z--){cout<<"*";}
cout<<"\n";
}
return 0;
}
