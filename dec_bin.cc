#include<bits/stdc++.h>

using namespace std;

int dec_to_bin(int n){
int ans=0;
int p=1;
while(n){
ans=ans+p*(n&1);
p=p*10;
n=n>>1;
}
return ans;
}

int main(){

int n;
cin>>n;

cout<<dec_to_bin(n);

}
