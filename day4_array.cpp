/* #include<bits/stdc++.h>
using namespace std;
int main(){
    // initialization of array
    // not a good practice
    int a[5];
    a[0]=1;
    a[1]=2;
    a[2]=3;
    a[3]=4;
    a[4]=5;

    // take some inputs and store them in an array
    for(int i=0;i<5;i++){
        int input_val;
        cin>>input_val;
        a[i] = input_val;
    }

    int b[5]={2,4,5,6,7};

    //deault value 0 se initialize
    int c[5] ={0};
    for(int i=0;i<5;i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;

    // will not initialize with default value zero;
    int d[5]={1};
    for(int i=0;i<5;i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;

    return 0;
}                           */

/*Find max or min value of a given array*/
/*  #include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5]={3,-1,-10,10,8};
    int max = INT_MIN;
    for(int i=0;i<5;i++){
        if(max<a[i])
        max = a[i];
    }
    int min = INT_MAX;
    for(int i=0;i<5;i++){
        if(min>a[i])
        min = a[i];
    }
    cout<<"Maximum:"<<max<<endl<<"Minimum:"<<min<<endl;
    return 0;
}                                       */

/*reverse the array by swapping*/
/* #include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int j=0;
    for(int i=n-1;i>=n/2;i--){
        int t= a[j];
        a[j]=a[i];
        a[i]=t;
        j++;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    return 0;
}       */

//Important Question for reverse an array by swapping of left and right
/* #include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Before Reverse:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
//Important Point of reverse order
    int left = 0,right = n-1;
    while(left<=right){
        swap(a[left],a[right]);
        left++,right--;
    }
    cout<<endl<<"After Reverse:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    return 0;
}           */ 
/* given range[l,r]->reverse an array b/w range l to r*/
/* #include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],left,right;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>left>>right;
    cout<<"Before Reverse:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    while(left<=right){
        swap(a[left],a[right]);
        left++,right--;
    }
    cout<<endl<<"After Reverse:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    return 0;
}               */

// class Solution {
//     public:
//     void reverse(vector<int>& arr,int l,int r){
//         int left = l;
//         int right = r;
//         while(left<=right){
//             swap(arr[left],arr[right]);
//             left++;
//             right--;
//         }
//     }
//     void rotate(vector<int>& nums, int k){
//         int n= nums.size();
//         if(k>n){
//             k%=n;
//         }
//         if(k==0) return ; 
//         reverse(nums,0,n-1);
//         reverse(nums,0,k-1);
//         reverse(nums,k,n-1);
//     }
// };


/*Second max*/
/* #include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter Element: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max = INT_MIN;
    int sm = INT_MIN;
    for(int i=0;i<n;i++){
        if(max<a[i]){
        sm=max;
        max = a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(sm<a[i] && max>a[i])
        sm=a[i];
    }
    cout<<"Maximum:"<<max<<endl<<"Second Maximum:"<<sm<<endl;
    return 0;
}       */


/*Second minimum*/
/* #include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter Element: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int min = INT_MAX;
    int sm = INT_MAX;
    for(int i=0;i<n;i++){
        if(min>a[i]){
        sm=min;
        min = a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(sm>a[i] && min<a[i])
        sm=a[i];
    }
    cout<<"Minimum:"<<min<<endl<<"Second Minimum:"<<sm<<endl;
    return 0;
}                   */