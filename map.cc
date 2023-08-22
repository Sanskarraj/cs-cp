#include<bits/stdc++.h>
using namespace std;
int main(){
map<int,int>mp;
int a;
cin>>a;
for(int i=0;i<a;i++){
int c;
cin>>c;
if(mp.find(c)!=mp.end()){mp[c]++;}
else{
mp[c]=1;}
}
int m=0;
int c=0;
for (auto it=mp.begin();it!=mp.end();it++) {
        if (it->second > m) {
            m = it->second;
            c = it->first;
        }
    }

cout<<"\n "<<c;
}
