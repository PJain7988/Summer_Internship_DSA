#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int start,int mid,int end){
    int n=mid-start+1;
    int m=end-mid;
    int b[n],c[m];
    for(int i=0;i<n;i++){
        b[i]=arr[start+i];
    }
    for(int i=0;i<m;i++){
        c[i]=arr[mid+1+i];
    }
    int i=0,j=0;
    int k=start;
    while(i<n && j<m){
        if(b[i]<c[j]){
            arr[k]=b[i];
            k++;i++;
        }else{
            arr[k]=c[j];
            k++;j++;
        }
    }
    while(i<n){
        arr[k]=b[i];
        k++;i++;
        }
    while(j<m){
        arr[k]=b[j];
        k++;j++;
        }
}
void merge_sort(int arr[],int start,int end){
    if(start>=end)
        return;
    int mid = (start+end)/2;
    merge_sort(arr,start,mid);
    merge_sort(arr,mid+1,end);
    merge(arr,start,mid,end);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Before Sort : [";
    for(int i=0;i<n;i++){
        cout<<arr[i];
        if(i<n-1)
        cout<<", ";
    }
    cout<<"]"<<endl;
    merge_sort(arr,0,n-1);
    cout<<"After Sort : [";
    for(int i=0;i<n;i++){
        cout<<arr[i];
        if(i<n-1)
        cout<<", ";
    }
    cout<<"]"<<endl;
    return 0;
}