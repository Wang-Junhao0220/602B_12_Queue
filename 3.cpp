#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    while (cin >> s >> t) {
        queue<char> qs;
        for (const char &i : s)
            qs.push(i);
        for (const char &i : t)
            if (i == qs.front())
                qs.pop();
        cout << (qs.empty() ? "Yes" : "No") << endl;
    }
}
