/***Bubble Sort****** */
// Take max element rises to top by adjacent swapping.
//  Its worst case Time Complexity = 0(n^2)
//  Its best case Time Complexity = 0(n) (When array is already sort)

/* #include<bits/stdc++.h>
using namespace std;
void BubbleSort(int a[],int n){
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<i;j++){
            if(a[j]>a[j+1])
            swap(a[j],a[j+1]);
        }
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    BubbleSort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}                                           */

// For best case Time complexity = 0(n)
/*  #include<bits/stdc++.h>
using namespace std;
void BubbleSort(int a[],int n){
    for(int i=n-1;i>=1;i--){
        bool isSorted = true;
        for(int j=0;j<i;j++){
            if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
            isSorted =false;
        }
    }
    if(isSorted ==true){
        break;
    }
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    BubbleSort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}                               */

/****************Insertion Sort ************/
// Take the element to its correct position in sorted array.
// Its worst case Time complexity = 0(n^2) (When elements are in decreasing order or descending order)
// Its Best case Time complexity = 0(n)  (when elements are in increasing order or in sorted)

/*  #include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}
int main(){
    int arr[] ={10,9,4,5,3};
    int n= sizeof(arr)/sizeof(int);
    insertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}                       */

// Time complexity of linear search is 0(n)
/***************Binary Search(most important algorithum) **********************/
// is used for searching and applied on sorted arrays always.

/*  #include <bits/stdc++.h>
using namespace std;
bool BinarySearch(int a[], int target, int n)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (a[mid] == target)
        {
            return true;
        }
        else if (a[mid] > target)
        {
            end = mid - 1;
        }
        else if (a[mid] < target)
        {
            start = mid + 1;
        }
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int target;
    cin >> target;
    bool ans = BinarySearch(a, target, n);
    if (ans == true)
    {
        cout << "Target found !!!" << endl;
    }
    else
    {
        cout << "Target not found !!!" << endl;
    }
    return 0;
}                                   */

// Print all the prime factors of an integer.
/* #include<bits/stdc++.h>
using namespace std;
int isprime(int n){
    int c=0;
    for(int i=1;i<=n;i++){
        if(n%i==0)
        c++;
    }
    if(c>2)
    return 0;
    else
    return 1;
} 
int main(){
    int n;
    cin>>n;
    int f=2;
    while(n>1){
    if(n%f==0 && isprime(f)){
        cout<<f<<" ";
        n/=f;
    }
    else 
    f++;
    }
    return 0;
}               */
// 
/* #include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2==0){
        while(n%2==0){
            cout<<2<<" ,";
            n/=2;
        }
    }
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0)
        while(n%i==0){
        cout<<i<<" ,";
        n/=i;
        }
    }
    if(n>1){
        cout<<n<<" ";
    }
    return 0;
}       */

// For unique prime factor

/* #include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2==0){
        cout<<2<<" , ";
        while(n%2==0){
            n/=2;
        }
    }
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0)
        cout<<i<<" , ";
        while(n%i==0){
        n/=i;
        }
    }
    if(n>1){
        cout<<n<<" ";
    }
    return 0;
}                           */

/*********************************find value of n(C)r************************/
/*  #include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int n , r;
    cin>>n>>r;
    int ncr = factorial(n)/(factorial(n-r)*factorial(r));
    cout<<ncr<<endl;
    return 0;
}           */