#include<bits/stdc++.h>

using namespace std;

int main(){

int t;
cin>>t;
while(t--){
int s;
cin>>s;
vector<int>nums;
for(int i=0;i<s;i++){
int a;
cin>>a;
nums.push_back(a);
}
int mx=INT_MIN;
vector<int>mz;
for(int i=0;i<nums.size();i++){
int sum=0;
vector<int>sm;
for(int j=i;j<nums.size();j++){
sum+=nums[j];
sm.push_back(nums[j]);
if(mx<sum){mx=sum;mz=sm;}
}
}

cout<<"subarr"<<mx<<"\n";

for(auto i:mz){
cout<<i<<" ";
}





}

}
