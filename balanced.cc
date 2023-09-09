#include<bits/stdc++.h>
using namespace std;


bool is_Balanced(string s) {
unordered_map <char, char> mp; stack <char>st;
mp['{'] = '1'; mp['}'] = '{';
mp['('] = '1'; mp [')'] = '(';
mp ['['] = '1'; mp [ ']'] = '[';

for (auto i: s) {
if (mp[i] == '1') { st.push(i);} 
else { 
if(mp[i]!= st.top()){ return false;} 
else { st.pop();}
}
}
bool E = st.empty() ? true : false;
return E;
}


int main(){
string s="({[]})";
is_Balanced(s) ? cout<<"true\n":cout<<"false\n";
s="({]})";
is_Balanced(s) ? cout<<"true\n":cout<<"false\n";

s="()[]{}";
is_Balanced(s)? cout<<"true\n":cout<<"false\n";
s="({}[]";
is_Balanced(s)? cout<<"true\n":cout<<"false\n";
s="({})";
is_Balanced(s)? cout<<"true\n":cout<<"false\n";


}

