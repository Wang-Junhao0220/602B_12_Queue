#include <iostream>
#include <queue>

using namespace std;

int main() {
    int m, n, k;
    cin >> m >> n >> k;

    queue<int> men, women;
    for (int i = 1; i <= m; i++) men.push(i);
    for (int i = 1; i <= n; i++) women.push(i);

    for (int i = 0; i < k; i++) {
        if (men.empty() || women.empty()) break;

        cout << men.front() << " " << women.front() << endl;

        // 保存队头的序号
        int men_front = men.front();
        int women_front = women.front();

        // 从队列中移除
        men.pop();
        women.pop();

        // 将他们放回队列的尾部
        men.push(men_front);
        women.push(women_front);
    }

    return 0;
}
