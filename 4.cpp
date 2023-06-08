#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    queue<int> q;

    for(int i = 1; i <= n; i++) {
        q.push(i);
    }

    while(q.size() > 1) {
        // 输出并丢弃顶部的牌
        cout << q.front() << " ";
        q.pop();

        // 将新的顶部牌移到底部
        q.push(q.front());
        q.pop();
    }

    // 输出第二行
    cout << endl;
    cout << q.front() << endl;

    return 0;
}
