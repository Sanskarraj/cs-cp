#include<bits/stdc++.h>

using namespace std;

int clear_i_between(int n,int i,int j){
int a=(~0)<<(j+1);
int b=(1<<i)-1;
int mask=a|b;
return n&mask;
}

int main(){

int n=15;

int i;
cin>>i;

int j;
cin>>j;

cout<<clear_i_between(n,i,j);

}
