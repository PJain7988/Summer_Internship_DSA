/**********lower boend() *********************8*/
// time complexity = 0(n)
// #include<bits/stdc++.h>

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//    vector<int>a(n);
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int x,ans=-1;
//     cin>>x;
    // for(int i=0;i<n;i++){
    //     if(a[i]>=x){
    //         ans =i;
    //         break;
    //     }
    // }
//     cout<<ans<<endl;
//     return 0;
// }

// By function time complexity = 0(n^2)
// #include<iostream>
// #include<vector>
// using namespace std;

// int Lower_bound(vector<int>& a,int n,int x){
//     int ans = -1;
//         int left =0,right=n-1;
//     while(left<=right){
//         int mid = (left+right)/2;
//         if(a[mid]>=x){
//             ans=mid;
//             right=mid-1;
//         }
//         else{
//             left=mid+1;
//         }
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//    vector<int>a(n);
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int x;
//     cin>>x;
//     int ind = Lower_bound(a,n,x);
//     // using inbuilt function-> lower_bound(begin,end,search_value)

//     int index = lower_bound(a.begin(),a.end(),x)-a.begin();
//     cout<<ind<<endl;
//     cout<<index<<endl;
//     return 0;
// }

// Upper Bound 
// #include<iostream>
// #include<vector>
// #include<bits/stdc++.h>
// using namespace std;

// int Upper_bound(vector<int>& a,int n,int x){
//     int ans = -1;
//         int left =0,right=n-1;
//     while(left<=right){
//         int mid = (left+right)/2;
//         if(a[mid]>x){
//             ans=mid;
//             right=mid-1;
//         }
//         else{
//             left=mid+1;
//         }
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//    vector<int>a(n);
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int x;
//     cin>>x;
//     int ind = Upper_bound(a,n,x);
//     // inbuilt function upper_bound()
//     int index = upper_bound(a.begin(),a.end(),x)-a.begin();
//     cout<<ind<<endl;
//     return 0;
// }

/****************Find nth root **********************/
//#include<bits/stdc++.h>
// using namespace std;

// int power(int x,int n){
//     int p=1;
//     for(int i=0;i<n;i++){
//         p=p*x;
//     }
//     return p;
// }
// int main(){
//     int n,m,ans;
//     cin>>n>>m;
//     // Brute force
//     // x^n == m
//     for(int x=1;x<=1e9;x++){
//         if(power(x,n)==m){
//             ans = x;
//             break;
//         }
//     }
//     cout<<ans<<endl;
// }

// by binary search
#include<bits/stdc++.h>
using namespace std;
int power(int x,int n){
    int p=1;
    for(int i=0;i<n;i++){
        p=p*x;
    }
    return p;
}

int findNthRoot(int n,int m){
    int lo=1,hi=m;
    while(lo<=hi){
        long mid = (lo+hi)/2;
        if(power(mid,n)==m){
            return mid;
        }else if(power(mid,n)>m){
            hi=mid-1;
        }else{
            lo=mid+1;
        }
    }
    return -1;
}
int main(){
    int n,m;
    cin>>n>>m;
    int result = findNthRoot(n,m);
    cout<<result<<endl;
}