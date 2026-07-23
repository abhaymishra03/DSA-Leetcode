class Solution {
public:
    int calPoints(vector<string>& operations) {

        stack<int> s;

        for (string ch : operations) {

            if (ch == "+") {

                int prev1 = s.top();
                s.pop();
                int prev2 = s.top();
                s.pop();

                s.push(prev2);
                s.push(prev1);
                s.push(prev1 + prev2);

            }
            else if (ch == "D") {

                s.push(2 * s.top());

            }
            else if (ch == "C") {

                s.pop();

            }
            else {

                s.push(stoi(ch));   // handles positive and negative numbers

            }
        }

        int ans = 0;

        while (!s.empty()) {
            ans += s.top();
            s.pop();
        }

        return ans;
    }
};