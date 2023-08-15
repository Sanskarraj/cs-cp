#include<bits/stdc++.h>
using namespace std;

void ith_bit_set(int n,int k){
   if(n&(1<<(k-1))){
   cout<<k<<"th bit is set\n";
   }
   else{
   cout<<k<<"th bit is not set\n";
   }
}


int main(){
int k=0;
cin>>k;
int count=0;
int x=k;
   while(k){count++;
   ith_bit_set(x,count); 
   k=k>>1;}
}


