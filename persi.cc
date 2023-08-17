#include<bits/stdc++.h>
using namespace std;

int main(){

vector<int>nums(3,0);
vector<int>tw(2,0);

cin>>nums[0];
cin>>nums[1];
cin>>nums[2];
cin>>tw[0];
cin>>tw[1];

sort(nums.begin(),nums.end());
sort(tw.begin(),tw.end());
int i;
for(i=0;i<nums[2];i++){
int a =nums[0]+nums[2]-i;
int b=nums[1]+i;
if(a==tw[1]){
if(b==tw[0]){
cout<<"YES\n";
break;
}
}

}
if(i==nums[2]){cout<<"NO\n";}



}
