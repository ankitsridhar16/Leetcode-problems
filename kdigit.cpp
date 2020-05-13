/**Remove K Digits
Given a non-negative integer num represented as a string, remove k digits from the number so that the new number is the smallest possible.
**/


class Solution {
public:
    string removeKdigits(string num, int k) {
        int len = num.length();
        if (len == k) return "0";
        stack<char> st;
        st.push(num[0]);
        for (int i = 1; i < len; i++) {
            while (!st.empty() && st.top() > num[i] && k > 0) {
                k--;
                st.pop();
            }
            st.push(num[i]);
        }

        while (!st.empty() && k > 0) {
            st.pop();
            k--;
        }

        string res = "";
        while(!st.empty()) {
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        
        while (res[0] == '0') {
            res.erase(0, 1);
        }
        return res == "" ? "0" : res;
    }
};