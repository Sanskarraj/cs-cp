#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
stack<string>st;
    string a;
    cin>>a;
    int i=0;
    string c;
    while(i<a.size()){
    if(a[i]=='.'){
    st.push(c);
    c="";
    st.push(to_string(a[i]));
    }
    else{
    c=c+a[i];
    }
    i++;
    }
    st.push(c);
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
    return 0;
}

