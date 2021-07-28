#include <iostream>
#include <stack>
#include <string>


std::string removeDuplicates(std::string s) {
    std::stack<char> st;
    int i = 0;
    while (i < s.length()) {
        if (st.empty() || (s[i] != st.top()))
            st.push(s[i]);
    else
        st.pop();
    ++i;
    }

    // If stack is empty
    if (st.empty())
        return ("Empty String");

    // If stack is not Empty
    else
    {
        std::string short_string = "";
        while (!st.empty())
        {
            short_string = st.top() + short_string;
            st.pop();
        }
        return
            (short_string);
    }

}

int main() {
    std::string stri = "azzxzy";
    std::cout << removeDuplicates(stri) << "\n";
}
