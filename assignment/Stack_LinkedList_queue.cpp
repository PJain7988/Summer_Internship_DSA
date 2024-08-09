                        // Min Stack
// #include<bits/stdc++.h>
// using namespace std;
// class MinStack {
// public:
//     stack<int>s_s;
//     stack<int>s;
//     MinStack() {  
//     }
//     void push(int val) {
//         s.push(val);
//         if(s_s.empty()){
//             s_s.push(val);
//         }else if(s_s.top()>=val){
//                 s_s.push(val);
//             }
//     }
//     void pop() {
//         if(s.top() == s_s.top()){
//             s_s.pop();
//         }
//         s.pop();
//     }
//     int top() {
//         return s.top();
//     }
//     int getMin() {
//         return s_s.top();
//     }
// };
// int main() {
//     int n;
//     cin >> n;
//     vector<string> operations(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> operations[i];
//     }
//     MinStack minStack;
//     for (int i = 0; i < n; ++i) {
//         if (operations[i] == "push") {
//             int val;
//             cin >> val;
//             minStack.push(val);
//         } else if (operations[i] == "pop") {
//             minStack.pop();
//         } else if (operations[i] == "top") {
//             cout << minStack.top() << " ";
//         } else if (operations[i] == "getMin") {
//             cout << minStack.getMin() << " ";
//         }
//     }
//     cout << endl;
//     return 0;
// }

