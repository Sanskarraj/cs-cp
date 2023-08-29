#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<string> st;
    string a;
    
    while (cin >> a) {
        st.push(a);
    }
    
    while (!st.empty()) {
        cout << st.top() << " ";  // Print the top element first
        st.pop();
    }
    
    return 0;
}
