#include<bits/stdc++.h>

using namespace std;


vector<int>paritysort(vector<int>s){
int i=0;
int j=s.size()-1;
 while(i<j){
 if(s[i]%2==1&&s[j]%2==0){
 swap(s[i],s[j]);
 i++;
 j--;
 }
 if(s[i]%2==0)i++;
 if(s[j]%2==1)j--;
 } 
return s;

}

int main(){
int n;
cin>>n;
vector<int>nums;
while(n--){
int a;
cin>>a;
nums.push_back(a);
}
for(auto i:paritysort(nums)){
cout<<i;}


}
