                        // First index
// #include<bits/stdc++.h>
// using namespace std;
// int index(int ar[],int n,int m,int i){
//     if(i==n){
//         return -1;
//     }
//     if(ar[i]==m)
//     return i;
//     return index(ar,n,m,i+1);
// }
// int main(){
//     int n;
//     cin>>n;
//     int ar[n];
//     for(int i=0;i<n;i++){
//         cin>>ar[i];
//     }
//     int m;
//     cin>>m;
//     int result = index(ar,n,m,0);
//     cout<<result<<endl;
// 	return 0;
// }

                        // Print all indices
// #include<bits/stdc++.h>
// using namespace std;
// void All_index(int arr[],int n,int i,int x){
//     if(i==n)
//     return ;
//     if(arr[i]==x)
//     cout<<i<<" ";
//     All_index(arr,n,i+1,x);
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int x;
//     cin>>x;
//     All_index(arr,n,0,x);
//     return 0;
// }

                // last index
// #include<bits/stdc++.h>
// using namespace std;
// int last_index(int arr[],int n,int i,int x){
//     if(i==-1)
//     return -1;
//     if(arr[i]==x)
//     return i;
//     last_index(arr,n,i-1,x);
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int x;
//     cin>>x;
//     cout<<last_index(arr,n,n-1,x)<<endl;
//     return 0;
// }   

                // return no of subsequences and also print all subsequences
// #include<bits/stdc++.h>
// using namespace std;
// void solve(string& s, int i,string output){
//     int n = s.size();
//     if(i==n){
//         cout<<output<<" ";
//         return ;
//     }
//     solve(s,i+1,output);
//     solve(s,i+1,output+s[i]);
// }
// int count(string& s, int i) {
//     int n = s.size();
//     if (i == n) {
//         return 1;
//     }
//     int exclude = count(s, i + 1);
//     int include = count(s, i + 1);
//     return exclude + include;
// }
// int main(){
//     string s,output;
//     cin>>s;
//     solve(s,0,"");
// 	cout<<endl<<count(s,0);
//     return 0;
// }

                    // recursion keypad codes
// #include<bits/stdc++.h>
// using namespace std;
// int ans = 0;
// string ar[10]={".","abc","def","ghi","jkl","mno","pqrs","tuv","wx","yz"};
// void print(string& s,int i,string output){
//     int n=s.size();
//     if(i==n){
//         cout<<output<<" ";
//         ans++;
//     return ;
//     }
//     int d = s[i]-'0';
//     string temp = ar[d];
//     for(int j=0;j<temp.size();j++){
//         output.push_back(temp[j]);
//          print(s,i+1,output);
//          output.pop_back();
//     }
// }
// int main(){
//     string s;
//     cin>>s;
//     print(s,0,"");
//     cout<<endl<<ans;
//     return 0;
// }

            // Replace all pi
// #include<bits/stdc++.h>
// using namespace std;
// void print(string& s,int i){
//     int n = s.size();
//     if(i==n){
//         return;
//     }
//     if(s[i] =='p' && s[i+1] =='i'){
//     s.replace(i,2,"3.14");
//     print(s,i+4);
//     }
//     else{    
//         print(s,i+1);
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string s;
//         cin>>s;
//         print(s,0);
//         cout<<s<<endl;
//     }
//     return 0;
// }

                // Replace all 0's with 5
// #include<bits/stdc++.h>
// using namespace std;
// int Replace(int n){
//     if(n==0){
//         return 0;
//     }
//     int r = n%10;
//     if(r==0)
//     r=5;
//     return Replace(n/10)*10+r;     
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<Replace(n)<<endl;
//     return 0;
// }

                    // Convert string into number
// #include<bits/stdc++.h>
// using namespace std;
// int convert_string(string s , int size ,int i){
//     if(i==-1)
//     return 0;
//     int ld = s[i]-'0';
//     return  convert_string(s,size,i-1)*10 + ld;
// }
// int main(){
//     string s;
//     cin>>s;
//     int size = s.size();
//     int result = convert_string(s,size,size-1);
//     cout<<result<<endl;
//     return 0;
// }

                // Odd Even using recursion
// #include<bits/stdc++.h>
// using namespace std;
// void odd(int n,int i){
//     if(i==0){
//         return;
//     }
//     if(i%2!=0)
//     cout<<i<<endl;
//     odd(n,i-1);
// }
// void even(int n,int i){
//     if(i>n){
//         return;
//     }
//     if(i%2==0)
//     cout<<i<<endl;
//     even(n,i+1);
// }
// int main(){
//     int n;
//     cin>>n;
//     odd(n,n);
//     even(n,1);
// }

                    // Count , Remove and Replace hi
// #include<bits/stdc++.h>
// using namespace std;
// int count(string s,int i,int c){
//     int n = s.size();
//     if(i==n)
//     return c;
//     if(s[i]=='h' && s[i+1]=='i'){
//         c++;
//         return count(s,i+2,c);
//     }
//     else
//     return count(s,i+1,c);
// }
// string remove(string s,int i){
//     int n = s.size();
//     if(i==n)
//     return s ;
//     if(s[i]=='h' && s[i+1]=='i'){
//          return remove(s.substr(0, i) + s.substr(i + 2), i);
//     }
//     else
//         return remove(s,i+1);
// }
// string Replace(string s , int i){
//     int n = s.size();
//     if(i==n)
//     return s;
//     if(s[i]=='h' && s[i+1]=='i'){
//         return Replace(s.substr(0, i) + "bye" + s.substr(i + 2), i + 3);
//     }
//     else
//         return Replace(s,i+1);
// }
// int main(){
//     string s;
//     cin>>s;
//     cout<<count(s,0,0)<<endl;
//     cout<<remove(s,0)<<endl;
//     cout<<Replace(s,0)<<endl;
//     return 0;
// }

            //  Part 2 Count , Remove and Replace hi
// #include<bits/stdc++.h>
// using namespace std;
// int count(string s,int i,int c){
//     int n = s.size();
//     if(i==n)
//     return c;
//     if(s[i]=='h' && s[i+1]=='i' && s[i+2]!='t'){
//         c++;
//         return count(s,i+2,c);
//     }
//     else
//     return count(s,i+1,c);
// }
// string remove(string s,int i){
//     int n = s.size();
//     if(i==n)
//     return s ;
//     if(s[i]=='h' && s[i+1]=='i' && s[i+2]!='t'){
//          return remove(s.substr(0, i) + s.substr(i + 2), i);
//     }
//     else
//         return remove(s,i+1);
// }
// string Replace(string s , int i){
//     int n = s.size();
//     if(i==n)
//     return s;
//     if(s[i]=='h' && s[i+1]=='i' && s[i+2]!='t'){
//         return Replace(s.substr(0, i) + "bye" + s.substr(i + 2), i + 3);
//     }
//     else
//         return Replace(s,i+1);
// }
// int main(){
//     string s;
//     cin>>s;
//     cout<<count(s,0,0)<<endl;
//     cout<<remove(s,0)<<endl;
//     cout<<Replace(s,0)<<endl;
//     return 0;
// }

                        // Nth Triangle Recursion
// #include<bits/stdc++.h>
// using namespace std;
// int Nth_triangle(int n,int i){
//     if(i>n)
//     return 0;
//     return i+Nth_triangle(n,i+1);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<Nth_triangle(n,1)<<endl;
//     return 0;
// }

                        // Tower of Hanoi
// #include<bits/stdc++.h>
// using namespace std;
// void toh(int n,char src,char help,char des){
//     if(n==0){
//         return ;
//     }
//    toh(n-1,src,des,help);
//     cout<<"Moving ring "<<n<<" from "<<src<<" to "<<des<<endl;
//     toh(n-1,help,src,des);
// }
// int main(){
//     int n;
//     cin>>n;
//     toh(n,'A','C','B');
//     return 0;
// }

                        // Rat Chases its cheese
// #include<bits/stdc++.h>
// using namespace std;
// int n,m;
// vector<vector<int>>path;
// bool solve(vector<string>& grid,int i,int j){
//     if(i== n-1 && j== m-1){
//         path[i][j]=1;
//         return true;
//     }
//     if(i >= 0 && j >= 0 && i < n && j < m && grid[i][j] == 'O' && path[i][j] == 0){
//         path[i][j]=1;
//         if (solve(grid,i,j+1)) return true;
//         if (solve(grid,i+1,j)) return true;
//         if (solve(grid,i-1,j)) return true;
//         if (solve(grid,i,j-1)) return true;
//         path[i][j]=0;
//     }
//     return false;
// }
// int main(){
//     cin>>n>>m;
//     vector<string> grid(n); 
//     for (int i = 0; i < n; ++i) {
//         cin >> grid[i];
//     }
//     path = vector<vector<int>>(n, vector<int>(m, 0));
//     if (solve(grid,0,0)){
//         for (int i = 0; i < n; ++i) {
//             for (int j = 0; j < m; ++j) {
//                 cout << path[i][j] << " ";
//             }
//             cout << endl;
//         }
//     } else {
//         cout << "NO PATH FOUND" << endl;
//     }
//     return 0;
// }

                        // Subset_problem ( Recursion )
// #include <bits/stdc++.h>
// using namespace std;
// void printSubsets(vector<int>& arr, int target, vector<int>& subset, int index) {
//     if (target == 0) {
//         for (int num : subset) {
//             cout << num << " ";
//         }
//         cout << "  ";
//         return;
//     }
//     if (index == arr.size() || target < 0) {
//         return;
//     }
//     subset.push_back(arr[index]);
//     printSubsets(arr, target - arr[index], subset, index + 1);
//     subset.pop_back();
//     printSubsets(arr, target, subset, index + 1);
// }
// int countSubsets(vector<int>& arr, int target, int index) {
//     if (target == 0) {
//         return 1;
//     }
//     if (index == arr.size() || target < 0) {
//         return 0;
//     }
//     int include = countSubsets(arr, target - arr[index], index + 1);
//     int exclude = countSubsets(arr, target, index + 1);
//     return include + exclude;
// }
// int main() {
//     int N;
//     cin >> N;
//     vector<int> arr(N);
//     for (int i = 0; i < N; ++i) {
//         cin >> arr[i];
//     }
//     int target;
//     cin >> target;
//     vector<int> subset;
//     printSubsets(arr, target, subset, 0);
//     cout << endl;
//     int count = countSubsets(arr, target, 0);
//     cout << count << endl;
//     return 0;
// }

                        // Mazepath_D(Count, Print)
// #include <bits/stdc++.h>
// using namespace std;
// void findPaths(int i, int j, int n, int m, string path, vector<string>& paths) {
//     if (i == n-1 && j == m-1) {
//         paths.push_back(path);
//         return;
//     }
//         if (i < n-1) {
//         findPaths(i+1, j, n, m, path + "V", paths);
//     }
//         if (j < m-1) {
//         findPaths(i, j+1, n, m, path + "H", paths);
//     }
//         if (i < n-1 && j < m-1) {
//         findPaths(i+1, j+1, n, m, path + "D", paths);
//     }
// }
// int main() {
//     int n1, n2;
//     cin >> n1 >> n2;
//     vector<string> paths;
//     findPaths(0, 0, n1, n2, "", paths);
//         for (const string& path : paths) {
//         cout << path << " ";
//     }
//     cout << endl;
//         cout << paths.size() << endl;
//     return 0;
// }

                        // Recursion Twins
// #include <bits/stdc++.h>
// using namespace std;
// int countTwins(string str, int index) {
//     if (index >= str.length() - 2) {
//         return 0;
//     }
//         if (str[index] == str[index + 2]) {
//         return 1 + countTwins(str, index + 1);
//     } else {
//         return countTwins(str, index + 1);
//     }
// }
// int main() {
//     string str;
//     cin >> str;
//     int result = countTwins(str, 0);
//     cout << result << endl;
//     return 0;
// }

                        // Dictionary Order(Larger)
// #include <bits/stdc++.h>
// using namespace std;
// void permute(string str, int l, int r, vector<string> &result) {
//     if (l == r) {
//         result.push_back(str);
//     } else {
//         for (int i = l; i <= r; i++) {
//             swap(str[l], str[i]);
//             permute(str, l + 1, r, result);
//             swap(str[l], str[i]);
//         }
//     }
// }
// int main() {
//     string input;
//     cin >> input;
//     vector<string> permutations;
//     permute(input, 0, input.length() - 1, permutations);
//     sort(permutations.begin(), permutations.end());
//     for (const string &perm : permutations) {
//         if (perm > input) {
//             cout << perm << endl;
//         }
//     }
//     return 0;
// }

                        // Dictionary Order(Smaller)
// #include <bits/stdc++.h>
// using namespace std;
// void permute(string str, int l, int r, vector<string>& result, const string& original) {
//     if (l == r) {
//         if (str < original) {
//             result.push_back(str);
//         }
//     } else {
//         for (int i = l; i <= r; i++) {
//             swap(str[l], str[i]);
//             permute(str, l + 1, r, result, original);
//             swap(str[l], str[i]);
//         }
//     }
// }
// int main() {
//     string input;
//     cin >> input;
//     vector<string> result;
//     permute(input, 0, input.size() - 1, result, input);
//     sort(result.begin(), result.end());
//     for (const string& s : result) {
//         cout << s << endl;
//     }
//     return 0;
// }

                        // Generate Parenthesis
// #include <bits/stdc++.h>
// using namespace std;
// void generateParentheses(int n, int open, int close, string current, vector<string>& result) {
//     if (current.length() == 2 * n) {
//         result.push_back(current);
//         return;
//     }
//         if (close < open) {
//         generateParentheses(n, open, close + 1, current + ')', result);
//     }
//     if (open < n) {
//         generateParentheses(n, open + 1, close, current + '(', result);
//     }
// }
// void printAllParentheses(int n) {
//     vector<string> result;
//     generateParentheses(n, 0, 0, "", result);
//         for (const string& s : result) {
//         cout << s << endl;
//     }
// }
// int main() {
//     int n;
//     cin >> n;
//     printAllParentheses(n);
//     return 0;
// }

                        // Maze_path( Count, Print)
// #include <bits/stdc++.h>
// using namespace std;
// void findPaths(int i, int j, int n, int m, string path, vector<string>& paths) {
//     if (i == n-1 && j == m-1) {
//         paths.push_back(path);
//         return;
//     }
//         if (i < n-1) {
//         findPaths(i+1, j, n, m, path + "V", paths);
//     }
//         if (j < m-1) {
//         findPaths(i, j+1, n, m, path + "H", paths);
//     }
// }
// int main() {
//     int n1, n2;
//     cin >> n1 >> n2;
//     vector<string> paths;
//     findPaths(0, 0, n1, n2, "", paths);
//         for (const string& path : paths) {
//         cout << path << " ";
//     }
//     cout << endl;
//     cout << paths.size() << endl;
//     return 0;
// }

                        // Boardpath(Count,Print)
// #include <bits/stdc++.h>
// using namespace std;
// int ans = 0;
// void printPaths(int n, int m, string path) {
//     if (n == 0) {
//         cout << path << " ";
//         ans++;
//         return;
//     }
//     if (n < 0) return;
//     for (int i = 1; i <= m; ++i) {
//         printPaths(n - i, m, path + to_string(i));
//     }
// }
// int main() {
//     int N, M;
//     cin >> N>>M;
//     printPaths(N, M, "");
//     cout << endl<<ans<<endl;
//     return 0;
// }

                        // Vivek Loves Array Game
// #include <bits/stdc++.h>
// using namespace std;
// int maxPoints(vector<int>& A, int start, int end) {
//     if (start >= end) {
//         return 0;
//     }
//     int totalSum = 0;
//     for (int i = start; i <= end; ++i) {
//         totalSum += A[i];
//     }
//     int leftSum = 0;
//     for (int i = start; i < end; ++i) {
//         leftSum += A[i];
//         int rightSum = totalSum - leftSum;
//         if (leftSum == rightSum) {
//             int leftPoints = maxPoints(A, start, i);
//             int rightPoints = maxPoints(A, i + 1, end);
//             return 1 + max(leftPoints, rightPoints);
//         }
//     }
//     return 0;
// }
// int main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         int N;
//         cin >> N;
//         vector<int> A(N);
//         for (int i = 0; i < N; ++i) {
//             cin >> A[i];
//         }
//         cout << maxPoints(A, 0, N - 1) << endl;
//     }
//     return 0;
// }

                        // Generate Binary Strings
// #include <bits/stdc++.h>
// using namespace std;
// void generateBinaryStrings(string s, int index, vector<string>& results) {
//     if (index == s.size()) {
//         results.push_back(s);
//         return;
//     }
//     if (s[index] == '?') {
//         s[index] = '0';
//         generateBinaryStrings(s, index + 1, results);
//         s[index] = '1';
//         generateBinaryStrings(s, index + 1, results);
//         s[index] = '?';
//     } else {
//         generateBinaryStrings(s, index + 1, results);
//     }
// }
// int main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         string S;
//         cin >> S;
//         vector<string> results;
//         generateBinaryStrings(S, 0, results);
//         for (const string& res : results) {
//             cout << res << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

                        // Mapped string
// #include <bits/stdc++.h>
// using namespace std;
// void decodeStrings(const string& digits, int index, string& current, set<string>& result, unordered_map<int, char>& mapping) {
//     if (index == digits.length()) {
//         result.insert(current);
//         return;
//     }
//     int num1 = digits[index] - '0';
//     if (num1 >= 1 && num1 <= 9) { 
//         current.push_back(mapping[num1]);
//         decodeStrings(digits, index + 1, current, result, mapping);
//         current.pop_back();
//     }
//     if (index + 1 < digits.length()) {
//         int num2 = stoi(digits.substr(index, 2));
//         if (num2 >= 10 && num2 <= 26) { 
//             current.push_back(mapping[num2]);
//             decodeStrings(digits, index + 2, current, result, mapping);
//             current.pop_back();
//         }
//     }
// }
// void decodeNumber(const string& digits) {
//     unordered_map<int, char> mapping;
//     for (int i = 1; i <= 26; ++i) {
//         mapping[i] = 'A' + i - 1;
//     }
//     set<string> result;
//     string current;
//     decodeStrings(digits, 0, current, result, mapping);
//         for (const string& s : result) {
//         cout << s << endl;
//     }
// }
// int main() {
//     string input;
//     cin >> input;
//     decodeNumber(input);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int maxLength = 0;
// int printAllSubstrings(string st,string output) {
//     int n = st.size();
//     for (int i = 0; i < n; i++) {
//         for (int len = 1; len <= n - i; len++) {
//             for (int j = i; j < i + len; j++) {
//                 output=output+st[j];
//             }
//             int p = output.size();
//             if(p>maxLength){
//                 maxLength = p;
//             }
//             output="";
//         }
//     }
//     return maxLength;
// }
// int main() {
//     string S;
//     cin >> S;
//     int ans = printAllSubstrings(S,"");
//     cout<<ans;
//     return 0;
// }

                // Split array ( Recursion )
// #include<bits/stdc++.h>
// using namespace std;
// int count(vector<int>arr,int n,int sum1,int sum2){
//     if(n==0){
//         return sum1==sum2;
//     }
//     return count(arr,n-1,sum1+arr[n-1],sum2) + count(arr,n-1,sum1,sum2+arr[n-1]); 
// }
// void print(vector<int>arr,int n,int i,int sum1,int sum2,vector<int>group1,vector<int>group2){
//     if(i==n){
//         if(sum1==sum2){
//             for(int i=0;i<group1.size();i++){
//                 cout<<group1[i]<<" ";
//             }
//             cout<<"and ";
//             for(int j=0;j<group2.size();j++){
//                 cout<<group2[j]<<" ";
//             }
//             cout<<endl;
//         }
//         return ;
//     }
//         group1.push_back(arr[i]);
//         print(arr,n,i+1,sum1+arr[i],sum2,group1,group2);
//         group1.pop_back();
//         group2.push_back(arr[i]);
//         print(arr,n,i+1,sum1,sum2+arr[i],group1,group2);
//         group2.pop_back();
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	vector<int>arr(n);
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	vector<int>group1;
// 	vector<int>group2;
// 	print(arr,n,0,0,0,group1,group2);
// 	cout<<count(arr,n,0,0);
// 	return 0;
// }

                // Single in engineering college
// #include <bits/stdc++.h>
// using namespace std;
// long long calculateWood(const vector<int>& trees, int H) {
//     long long totalWood = 0;
//     int n = trees.size();
//     for (int i=0;i<n;i++) {
//         if (trees[i] > H) {
//             totalWood += trees[i] - H;
//         }
//     }
//     return totalWood;
// }
// int findMaxHeight(const vector<int>& trees, int x, int low, int high) {
//     if (low > high) {
//         return high;
//     }
//     int mid = low + (high - low) / 2;
//     long long wood = calculateWood(trees, mid);
//     if (wood >= x) {
//         return findMaxHeight(trees, x, mid + 1, high);
//     } else {
//         return findMaxHeight(trees, x, low, mid - 1);
//     }
// }
// int main() {
//     int N, x;
//     cin >> N;
//     vector<int> trees(N);
//     for (int i = 0; i < N; ++i) {
//         cin >> trees[i];
//     }
//     cin >> x;
//     int maxHeight = *max_element(trees.begin(), trees.end());
//     int result = findMaxHeight(trees, x, 0, maxHeight);
//     cout << result << endl;
//     return 0;
// }