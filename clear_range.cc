#include<bits/stdc++.h>

using namespace std;

int clear_i_range(int n,int x){
return n&(-1<<x);
}

int main(){

int n=15;

int x;
cin>>x;

cout<<clear_i_range(n,x);

}
