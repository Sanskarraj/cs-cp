#include<bits/stdc++.h>

using namespace std;

int main(){

int n;
int h;
cin<<n;
cin<<h;

vector<int>a;
vector<int>b;

for(int i=0;i<n;i++){int z;cin>>z;
a.push_back(z);
}

for(int i=0;i<n;i++){int z;cin>>z;
b.push_back(z);
}

for(int i=0;i<n;i++){
if(h<=a[i]+b[i]){cout<<"NO";}
}

cout<<"YES";
}
