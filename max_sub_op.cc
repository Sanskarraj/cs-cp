#include<bits/stdc++.h>
using namespace std;

int main(){
int s;
cin>>s;
vector<int>nums;
for(int i=0;i<s;i++){
int a;
cin>>a;
nums.push_back(a);
}

int a=INT_MIN;
int sum=0;
for (int i=0;i<nums.size();i++){
sum+=nums[i];
if(a<sum){a=sum;}
if(sum<0){sum=0;}
}

cout<<a<<"\n";

}
