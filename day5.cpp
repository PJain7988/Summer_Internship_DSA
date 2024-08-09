/* #include<bits/stdc++.h>
using namespace std;
int findmax(int arr[],int n){
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
        
    }return maxi;
}
int main(){
    int arr[]={2,8,1,10,4};
    int n = sizeof(arr)/sizeof(int);
    int max = findmax(arr,n);
    cout<<"Maximum number is: "<<max<<endl;
    int sm = INT_MIN;
    for(int i=0;i<n;i++){
        if(sm<arr[i] && arr[i]<max){
        sm=arr[i];
        }
    } 
    cout<<"Second maximum number is: "<<sm<<endl;
}       */
//
/* #include<bits/stdc++.h>
using namespace std;
int findSecondmax(int arr[],int n){
    int maxi = INT_MIN;
    int sm = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            sm = maxi;
            maxi = arr[i];
        }
        else if(arr[i]>sm){
            sm = arr[i];
        }
    }return sm;
}
int main(){
    int arr[]={2,8,1,10,4};
    int n = sizeof(arr)/sizeof(int);
    int sm = findSecondmax(arr,n);
    cout<<"Second maximum number is: "<<sm<<endl;
}   */

// given a range 1 to n and each element is exactly once. find the missing element.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,j=1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        
    }
    return 0;
}