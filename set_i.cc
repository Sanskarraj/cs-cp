#include<bits/stdc++.h>

using namespace std;

int set_i_bit(int n,int x){
return n|1<<x;
}


int main(){

int n=8;

int x;
cin>>x;

cout<<set_i_bit(n,x);

}
