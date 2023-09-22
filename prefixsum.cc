#include<bits/stdc++.h>

using namespace std;


vector<int>presum(vector<int>s){
for(int i=1;i<s.size();i++){
s[i]=s[i-1]+s[i];
}
return s;
}

int main(){
int n;
cin>>n;
vector<int>nums(n);
for(int i=0;i<n;i++){
int a;
cin>>a;
nums[i]=a;
}

for(auto i:presum(nums)){

cout<<i<<" ";}
}
