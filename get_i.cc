#include<bits/stdc++.h>
using namespace std;

int get_i_bit(int n,int x){
 return (n&(1<<x))>0 ? 1 : 0;
}

int main(){

int n=14;
int x;
cin>>x;

cout<<get_i_bit(n,x);

}
