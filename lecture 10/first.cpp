#include<bits/stdc++.h>
using namespace std;
vector<int> find(int arr[], int n , int x )
    {
        int f = -1, l=-1;
        for(int i=0;i<n;i++){
            if(arr[i]==x){
                f=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(arr[i]==x){
                l=i;
                break;
            }
        }
        cout<<"["<<f<<","<<l<<"]"<<endl;
    }
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    find(arr, n , x );
    return 0;
}

/******************************* *****************/
// class Solution {
// public:
//     int findfirstposition(vector<int>& arr, int target){
//         int n= arr.size();
//         int lo=0,high=n-1;
//         int ans=-1;
//         while(lo<=high){
//             int mid = (lo+high)/2;
//             if(arr[mid]==target){
//                 ans=mid;
//                 high=mid-1;
//             }else if(arr[mid]<target){
//                 lo=mid-1;
//             }else if(arr[mid]>target){
//                 high=mid-1;
//             }
//         }
//         return ans;
//     }
//     int findlastposition(vector<int>& arr, int target){
//         int n= arr.size();
//         int lo=0,high=n-1;
//         int ans=-1;
//         while(lo<=high){
//             int mid = (lo+high)/2;
//             if(arr[mid]==target){
//                 ans=mid;
//                 high=mid+1;
//             }else if(arr[mid]<target){
//                 lo=mid+1;
//             }else if(arr[mid]>target){
//                 high=mid-1;
//             }
//         }
//         return ans;
//     }
//     vector<int> searchRange(vector<int>& arr, int target) {
//         int first =findfirstposition(arr,target);
//         int last =findlastposition(arr,target);

//         return {first,last};
//     }
// };