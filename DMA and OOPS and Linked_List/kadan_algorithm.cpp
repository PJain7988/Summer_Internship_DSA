#include<bits/stdc++.h>
using namespace std;
int kadanes(vector<int> &a,int n){
    int sum = 0;
    int maxSum = INT_MIN;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum>maxSum)
        maxSum=sum;
        if(sum<0)
        sum=0;
    }
    return maxSum;
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<kadanes(a,n)<<endl;
    return 0;
}