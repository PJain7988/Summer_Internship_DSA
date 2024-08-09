/* Basic
#include<bits/stdc++.h>
// #include<map>
#include<unordered_map>
using namespace std;

int main(){
    // declaration
    // unordered map

    // unordered_map<key_data_type,value_data_type> nameOfMap
    // name->roll number
    unordered_map<string,int> student;
    pair<string,int> p = {"abc",101};
    // .insert(pair)
    student.insert(p);

    // [] -> square bracket
    student["def"]=202;
    student["xyz"]; // default value is 0

    // how to access
    // .at(key)
    int value = student.at("abc");
    cout<<value<<endl;
    cout<<student.at("def")<<endl;

    //[key] -> square bracket
    cout<<student["abc"]<<endl;

    //cout<<student.at("uvw")<<endl; // it gives error because uvw is not declared.
    cout<<student["uvw"]<<endl; // but it gives 0 because uvw is not declared.

    // .count(key)-> true/ false - ye check karta h ki particular key data me h ya nhi
    cout<<student.count("abc")<<endl;
    cout<<student.count("Ram")<<endl;

    // remove / delete
    // . erase(key)
    student.erase("abc");
    cout<<student.count("abc")<<endl;

    // unordered_map<string , int> ::iterator it = student.begin();
    // it = student.begin();
    auto it = student.begin();
    cout<<"Key : value"<<endl;
    cout<<".............."<<endl;
    // for(auto it1= it;it!=student.end();it1++){
    //     cout<<it1->first<<" "<<it1->second<<endl;
    // }
    // for(auto it2:student){
    //     cout<<it2.first<<" "<<it2.second<<endl;
    // }
    // for(auto &it2:student){
    //     it2.second = 100;
    //     cout<<it2.first<<" "<<it2.second<<endl;
    // }
    for(auto it2:student){
        it2.second = 100;
    }
    for(auto it2:student){
        cout<<it2.first<<" "<<it2.second<<endl;
    }
    return 0;
}               */

// count the frequency of each integer
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int> fr;
    for(int i=0;i<n;i++){
        fr[arr[i]]++;
    }
    for(auto it:fr){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}               */

// Remove Duplicates from unsorted array
/*
#include<bits/stdc++.h>
#include<map>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int>ar;
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(ar.count(arr[i])){
            ans.push_back(arr[i]);
            ar[arr[i]]=1;
        }
    }
    return 0;
}               */

// Max Frequency element
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int>fr;
    int max= 0;
    int element;
    for(int i=0;i<n;i++){
        fr[arr[i]]++;
    }
    for(auto it:fr){
        if(it.second>max){
            max = it.second;
            element = it.first;
        }
    }
    cout<<element<<" : "<<max;
    return 0;
}               */

// Intersection of two array
/*
#include<bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int>ans;
    unordered_map<int,int>n1;
    unordered_map<int,int>n2;
    for(int i=0;i<nums1.size();i++){
        n1[nums1[i]]++;
    }
    for(int i=0;i<nums2.size();i++){
        n2[nums2[i]]++;
    }
    for(auto i : n1){
        for(auto j : n2){
            if(i.first == j.first){
                ans.push_back(i.first);
            }
        }
    }
    return ans; 
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    vector<int>arr1(m);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    vector<int>ans = intersection(arr,arr1);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}               */
/*
#include<bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int>ans;
    unordered_map<int,int>n1;
    int n = nums1.size();
    int m = nums2.size();
    for(int i=0;i<n;i++){
        n1[nums1[i]]++;
    }
    for(int i=0;i<m;i++){
        if(n1[nums2[i]] >= 1){
            ans.push_back(nums2[i]);
            n1[nums2[i]] = 0;
        }
    }
    return ans; 
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    vector<int>arr1(m);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    vector<int>ans = intersection(arr,arr1);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}               */

// Longest Consecutive Sequence
/*
#include<bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int>& nums) {
    int n= nums.size();
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[nums[i]]++;
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        int s = nums[i];
        if(mp.count(s-1)==0){
            int c = 0;
            while(mp.count(s)){
                c++;
                s+=1;
            }
            if(c>ans){
                ans = c;
            }
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<longestConsecutive(arr)<<endl;
    return 0;
}                   */

// Group Anagrams
/*
#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    int n = strs.size();
    vector<vector<string>>ans;
    unordered_map<string,vector<string>>st;
    for(int i=0;i<n;i++){
        string temp = strs[i];
        sort(temp.begin(),temp.end());
        st[temp].push_back(strs[i]);
    }
    for(auto i: st){
        ans.push_back(i.second);
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<string>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<string>>ans = groupAnagrams(arr);
    cout<<"[";
    for(int i=0;i<ans.size();i++){
        cout<<"[";
        int m = ans[i].size();
        for(int j=0;j<m;j++){
            cout<<ans[i][j];
            if(j<(m-1)){
                cout<<" , ";
            }
        }
        cout<<"]"<<endl;
    }
    cout<<"]";
    return 0;
}               */

// Top K frequet elements
/*
#include<bits/stdc++.h>
using namespace std;
vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int>mp;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    priority_queue<pair<int,int>>pq;
    for(auto i: mp){
        pq.push({-i.second,i.first});
    }
    vector<int>ans;
    while(k>0){
        ans.push_back(pq.top().second);
        pq.pop();
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    vector<int>ans = topKFrequent(arr,k);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}               */

/******************************* DP **************************/
// Fibonacci Series
/*
#include<bits/stdc++.h>
using namespace std;
// Recursive code
int fibo(int n) {
    if (n <= 1)
    return n;
    return fibo(n - 1) + fibo(n - 2);
}
// Memoizatio
int fib(int n, int dp[]) {
    if (n <= 1)
    return n;
    // check kar rahe h ki  pahle se ans calculated h ya nhi
    if (dp[n] != -1){
    return dp[n];
    }
    // memorization
    dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
    return dp[n];
}
// Tabular DP/ Bottom up approach

int fib_tabular(int n) {
    int dp[n + 1];
    // base case-> as a intialization
    dp[0] = 0;
    dp[1] = 1;
    // 0->n
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    int dp[n+1];
    for(int i=0;i<n+1;i++){
        dp[i] = -1;
    }
    cout<<fib(n, dp)<<endl;
    cout<<fib_tabular(n)<<endl;
    cout<<fibo(n)<<endl;
    return 0;
}               */

// Climbing Trees

#include<bits/stdc++.h>
using namespace std;
// recursive code
int solve(int n) {
    if (n <= 1)
    return n;
    return solve(n-1)+solve(n-2);
}
// Memoization
int solve_memo(int n, int dp[]) {
    if (n <= 1)
    return 1;
    // pahlse hi stored h to return kr do
    if (dp[n] != -1){
        return dp[n];
    }
    dp[n] = solve_memo(n - 1, dp) + solve_memo(n - 2, dp);
    return dp[n];
}
// Tabular DP/ Bottom up approach
int solve_tabular(int n) {
    int dp[n + 1];
    // base case-> as a intialization
    dp[0] = 1;
    dp[1] = 1;
    // 0->n
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}
int main(){
    int n;
    cin>>n;
    int dp[n+1];
    memset(dp,-1,sizeof(dp));
    cout<<solve_memo(n, dp)<<endl;
    cout<<solve_tabular(n)<<endl;
    cout<<solve(n)<<endl;
    return 0;
}

