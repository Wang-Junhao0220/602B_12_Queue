/*
 * 第一题
 * -----------------------------------
 * @author: Junhao Wang
 * @date: 2020-07-02 16:06:27
 */
#include <bits/stdc++.h>
using namespace std;
//定义要操作的队列
queue<int> q;
//操作方式：1 x表示x入队列，2表示出队列（若为空则忽略），3表示输出队首元素，空则输出-1
char method_opera;
//操作次数
int n;
int main() {
    //读入操作次数
    cin>>n;
    //循环操作
    for(int i=0;i<n;i++) {
        cin >> method_opera;
        if (method_opera == '1') {
            int x;
            cin >> x;
            q.push(x);
        } else if (method_opera == '2') {
            if (!q.empty()) {
                q.pop();
            }
        } else if (method_opera == '3') {
            if (!q.empty()) {
                cout << q.front() << endl;
            } else {
                cout << "-1" << endl;
            }
        }
    }
    return 0;
}