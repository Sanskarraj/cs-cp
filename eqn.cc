#include<bits/stdc++.h>
using namespace std;


string root(char x,int a){
string s="";
s=s+x;
s=s+'+';
s=s+to_string(a)
return s;
}

int sqroot(int num){
int i=0;
while(i*i!=num)i++;
return i;
}

int string_to_int(string s){
int num=0;
int count=0;
for(auto i:s){
num=num+(i-'0')*pow(10,count);
count++;
}
return num;
}

int main(){
string s="1x^2+70x^1+1225x^0";
//cin>>s;
string n="";
for (int i=s.size()-4;i>0;i--){
if(s[i]=='+'){break;}
n=n+s[i];
}

cout<<root(s[s.size()-3],sqroot(string_to_int(n)));




}
