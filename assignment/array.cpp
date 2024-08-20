/****************Inverse an array*************************** */
/* #include<bits/stdc++.h>
using namespace std;

void inverseArray(int a[],int b[],int index,int n){
	if(index<n){
	b[a[index]] = index;
	inverseArray(a,b,index+1,n);
	}
}
	int main(){
		int n;
		cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	inverseArray(a,b,0,n);
	for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}       */

/****************************************Arrays-Selection Sort**********************************/
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
// 	int n;
// 	cin>>n;
// 	int a[n];
// 	for(int i=0;i<n;i++){
// 		cin>>a[i];
// 	}
// 	for(int i=0;i<n-1;i++){
// 		int min = i;
// 		for(int j=i+1;j<n;j++){
// 			if(a[min]>a[j])
// 			min=j;
// 		}
// 		int t = a[min];
// 		a[min] = a[i];
// 		a[i] = t;
// 	}
// 	for(int i=0;i<n;i++){
// 		cout<<a[i]<<endl;
// 	}
// 	return 0;
// }

/****************************************Arrays-Insertion Sort**********************************/
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
// 	int n;
// 	cin>>n;
// 	int a[n];
// 	for(int i=0;i<n;i++){
// 		cin>>a[i];
// 	}
// 	for(int i=1;i<n;i++){
// 		int b = a[i];
// 		int j= i-1;
// 		while(j>=0 && a[j]>b){
// 			a[j+1] = a[j];
// 			j=j-1;
// 		}
// 		a[j+1]=b;
// 	}
// 	for(int i=0;i<n;i++){
// 		cout<<a[i]<<" ";
// 	}
// 	return 0;
// }

/****************************************Arrays-Bubble Sort**********************************/
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// 	int n;
// 	cin>>n;
// 	int a[n];
// 	for(int i=0;i<n;i++){
// 		cin>>a[i];
// 	}
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<n-1;j++){
// 			if(a[j]>a[j+1]){
// 				int t= a[j];
// 				a[j] = a[j+1];
// 				a[j+1] = t;
// 			}
// 		}
// 	}
// 	for(int i=0;i<n;i++){
// 		cout<<a[i]<<endl;
// 	}
// 	return 0;
// }

/****************************************Sort just Zeroes and Ones**********************************/
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
// 	int n,z=0,o=0;
// 	cin>>n;
// 	int a[n];
// 	for(int i=0;i<n;i++){
// 		cin>>a[i];
// 		if(a[i]==0)  z++;
// 		else 	o++;
// 	}
// 	int i=0;
// 	while(z>0){
// 		a[i]=0;
// 		i++;
// 		z--;
// 	}
// 	while(o>0){
// 		a[i]=1;
// 		i++;
// 		o--;
// 	}
// 	for(int i=0;i<n;i++){
// 		cout<<a[i]<<" ";
// 	}
// 	return 0;
// }

/****************************************Squares of a Sorted Array**********************************/
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     int a[n],b[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//         b[i]=a[i]*a[i];
//     }
//     sort(b,b+n);
//     for(int i=0;i<n;i++){
//         cout<<b[i]<<" ";
//     }
//     return 0;
// }

/****************************************Arrays-Reverse an Array**********************************/
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	int n;
// 	cin>>n;
// 	int a[n];
// 	for(int i=0;i<n;i++){
// 		cin>>a[i];
// 	}
// 	int left = 0,right =n-1;
// 	while(left<right){
// 		swap(a[left],a[right]);
// 		left++,right--;
// 	}
// 	for(int i=0;i<n;i++){
// 		cout<<a[i]<<endl;
// 	}
// 	return 0;
// }

/****************************************Arrays-Max Value In Array**********************************/
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
// 	int n;
// 	cin>>n;
// 	int a[n],max = INT_MIN;
// 	for(int i=0;i<n;i++){
// 		cin>>a[i];
// 	}
// 	for(int i=0;i<n;i++){
// 		if(a[i]>max)
// 		max=a[i];
// 	}
// 	cout<<max<<endl;
// 	return 0;
// }

/*****************************************Arrays-Target Sum Pairs*********************************/
// #include<bits/stdc++.h>
// using namespace std;
// void targetSum(int arr[], int n, int target)
// {
//     int left = 0;
//     int right = n - 1;
//     sort(arr,arr+n);
//     while (left < right)
//     {
//         int sum = arr[left] + arr[right];
//         if (sum > target)
//         {
//             right--;
//         }
//         else if (sum < target)
//         {
//             left++;
//         }
//         else
//         {
//             cout << arr[left] << " and " << arr[right] << endl;
//             left++;
//             right--;
//         }
//     }
// }
// int main() {
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	int x;
// 	cin>>x;
// 	targetSum(arr,n,x);
// 	return 0;
// }

/*****************************************Arrays-Linear Search*********************************/
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n;
// 	cin>>n;
// 	int a[n],m;
// 	for(int i=0;i<n;i++){
// 		cin>>a[i];
// 	}
// 	cin>>m;
// 	for(int i=0;i<n;i++){
// 		if(a[i]==m){
// 		cout<<i<<endl;
// 		return 0;
// 		}
// 	}
// 	cout<<"-1";
// 	return 0;
// }

/****************************************Arrays-Target Sum Triplets**********************************/
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
// 	int n,tar;
// 	cin>>n;
// 	int a[n];
// 	for(int i=0;i<n;i++){
// 		cin>>a[i];
// 	}
// 	cin>>tar;
// 	sort(a,a+n);
// 	for(int i=0;i<n;i++){
// 		int l=i+1;
// 		int r=n-1;
// 		while(l<r){
// 			if(a[i]+a[l]+a[r]==tar){
// 			cout<<a[i]<<", "<<a[l]<<" and "<<a[r]<<endl;
// 			l++;
// 			r--;
// 			}else if(a[i]+a[l]+a[r]<tar){
// 			l++;
// 		}else
// 			r--;
// 		}
// 	}

// 	return 0;
// }

/**************************************How many Questions?************************************/
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//      int t,s=0,n=0;
//      cin>>t;
//      while(t>0){
//          int a[3],o=0,z=0;
//          for(int i=0;i<3;i++){
//              cin>>a[i];
//              if(a[i]==1)
//              o++;
//              else
//              z++;
//          }
//          if(o>z)
//          s++;
//          else
//          n++;
//          t--;
//      }
//      cout<<s<<endl;
//     return 0;
// }

/**************************************Next Permutation************************************/
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
// 	int t ;
// 	cin>>t;
// 	while(t>0){
// 		int n;
// 		cin>>n;
// 		int a[n];
// 		for(int i=0;i<n;i++){
// 			cin>>a[i];
// 		}
// 		next_permutation(a,a+n);
// 		for(int i=0;i<n;i++){
// 			cout<<a[i]<<" ";
// 		}a
// 		cout<<endl;
// 		t--;
// 	}
// 	return 0;
// }

/**************************************Von Neuman Loves Binary************************************/

// #include<bits/stdc++.h>
// using namespace std;
// int binary(int num){
// 	int i=0;
// 	int s=0;
// 	while(num!=0){
// 		int r= num%10;
// 		num/=10;
// 		s+=r*pow(2,i);
// 		i++;
// 	}
// 	return s;
// }
// int main() {
// 	int n,num;
// 	cin>>n;
// 	while(n!=0){
// 		cin>>num;
// 		int d= binary(num);
// 		cout<<d<<endl;
// 		n--;
// 	}
// 	return 0;
// }

/********************************Pair of roses*************************** */
/*
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int m,m_d=INT_MAX;
		cin>>m;
		int l=0,r=n-1,p1=0,p2=0;
		sort(a,a+n);
		while(l<r){
			int sum = a[l]+a[r];
			if(sum==m){
				int d=a[r]-a[l];
				if(d<m_d){
					p1=a[l];
					p2=a[r];
					m_d=d;
				}
			l++;
			r--;
			}
		else if(sum<m)  l++;
		else r--;
		}
		cout<<"Deepak should buy roses whose prices are "<< p1 << " and " << p2 <<"."<<endl;
		t--;
		cout<<endl;
	}
	return 0;
}   */

/*****************************Watermelon Split********************** */
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     if(n>2 && n%2==0)
//     cout<<"YES"<<endl;
//     else
//     cout<<"NO"<<endl;
//     return 0;
// }

/********************************Nobita Scored Good Marks******************************* */
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, x;
//         cin >> x >> n;
//         int remainder = x%n;
//         int take = n- remainder;
//         int ans = min(remainder,take);
//         cout << ans << endl;
//     }
//     return 0;
// }           

/********************************Help Ramu**************************************** */
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int c1,c2,c3,c4;
// 		cin>>c1>>c2>>c3>>c4;
// 		int n , m,sumR =0,sumC = 0;
// 		cin>>n>>m;
// 		int r[n],c[m];
// 		for(int i=0;i<n;i++)
// 		cin>>r[i];
// 		for(int i=0;i<m;i++)
// 		cin>>c[i];
// 		for(int i=0;i<n;i++){
// 			sumR+=min(r[i]*c1,c2);
// 	}
// 		int TotalCost_R = min(sumR,c3);
// 		for(int i=0;i<m;i++){
// 			sumC+=min(c[i]*c1,c2);
// 		}
// 		int TotalCost_C = min(sumC,c3);
// 		int TotalCost = min((TotalCost_R + TotalCost_C),c4);
// 		cout<<TotalCost<<endl;
// 	}
// 	return 0;
// }

/**********************************Alex Shopping********************** */
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int a[n];
//     for (int i = 0; i < n; ++i) {
//         cin >> a[i];
//     }
//     sort(a, a+n);

//     int t;
//     cin >> t;

//     while (t--) {
//         int A, k;
//         cin >> A >> k;
//         int count = 0;
//         for (int i = 0; i < n; ++i) {
//             if (A % a[i] == 0) {
//                 count++;
//             }
//             if (count >= k) {
//                 break;
//             }
//         }

//         if (count == k) {
//             cout << "Yes" << endl;
//         } else {
//             cout << "No" << endl;
//         }
//     }

//     return 0;
// }

/***************************Running Sum of the Array********************* */
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     int a[n],b[n],sum=0;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++){
//         b[i]=a[i]+sum;
//         sum =b[i];
//         cout<<b[i]<<" ";
//     }
//     return 0;
// }


/***************************maximum Circular sum********************* */
// #include<bits/stdc++.h>
// using namespace std;
// int h(int a[],int n) {
//     int end = a[0], far = a[0];
//     for (int i = 1; i < n; i++) {
//         end = max(a[i], end + a[i]);
//         far = max(far, end);
//     }
//     return far;
// }
// int maxCircularSum(int a[],int n) {
//         int maxi = h(a,n);
//         int total_sum = 0;
//     for (int i=0;i<n;i++) {
// 		int num = a[i];
//         total_sum += num;
//     }
//         int end = a[0], far = a[0];
//     for (int i = 1; i < n; ++i) {
//         end = min(a[i], end + a[i]);
//         far = min(far, end);
//     }
//         int max_circular = total_sum - far;
//         if (max_circular == 0) {
//         return maxi;
//     }
//         return max(maxi, max_circular);
// }
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         int a[n];
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }
//         cout << maxCircularSum(a,n) << endl;
//     }
//     return 0;
// }

/***************************Sorting In Linear Time********************* */
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
// 	int n,z=0,o=0,t=0;
// 	cin>>n;
// 	int a[n];
// 	for(int i=0;i<n;i++){
// 		cin>>a[i];
// 	}
// 	for(int i=0;i<n;i++){
// 		if(a[i]==0)
// 		z++;
// 		else if(a[i]==1)
// 		 o++;
// 		else
// 		t++;
// 	}
// 	int i=0;
// 	while(z>0){
// 		a[i]=0;
// 		i++;
// 		z--;
// 	}
// 	while(o>0){
// 		a[i]=1;
// 		i++;
// 		o--;
// 	}
// 	while(t>0){
// 		a[i]=2;
// 		t--;
// 		i++;
// 	}
// 	for(int i=0;i<n;i++){
// 		cout<<a[i]<<endl;
// 	}
// 	return 0;
// }
/************************* Trapping Rainwater******************** */

// #include<bits/stdc++.h>
// using  namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int heights[n];
//         for(int i=0;i<n;i++){
//             cin>>heights[i];
//         }

//         int leftmax[n];
//         int rightmax[n];
//         leftmax[0]=heights[0];
//         for(int i=1;i<n;i++){
//             leftmax[i]=max(leftmax[i-1],heights[i]);
//         }
//         rightmax[n-1]=heights[n-1];
//         for(int i=n-2;i>=0;i--){
//             rightmax[i]=max(rightmax[i+1],heights[i]);
//         }
//         int ans=0;
//         for(int i=0;i<n;i++){
//             int height=min(leftmax[i],rightmax[i])-heights[i];
//             if(height>0){
//                 ans=ans+height*1;
//             }
//         }
//         cout<<ans<<endl;
//     }
//    return 0;
// }

/*******************************Majority Element*********************** */
// #include<bits/stdc++.h>
// using namespace std;
// int main () {
// 	int n,c=0;
// 	cin>>n;
// 	int a[n],f[n];
// 	for(int i=0;i<n;i++){
// 		cin>>a[i];
// 		f[i]=0;
// 	}
// 	for(int i=0;i<n;i++){
// 		if(f[i]==0){
// 			c=0;
// 		for(int j=0;j<n;j++){
// 			if(a[i]==a[j]){
// 				c++;
// 				f[j]=1;
// 			}
// 		}
// 		if(c>n/2)
// 		cout<<a[i]<<endl;
// 		}
// 	}
// 	return 0;
// }

/************************************Maximum sum path in two arrays**************** */
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	int n,m;
// 	cin>>n>>m;
// 	int a[n] , b[m];
// 	for(int i=0;i<n;i++){
// 		cin>>a[i];
// 	}
// 	for(int i=0;i<m;i++){
// 		cin>>b[i];
// 	}
    
//     int i = 0, j = 0;
//     int sum1 = 0, sum2 = 0;
//     int result = 0;

//     while (i < n && j < m) {
//         if (a[i] < b[j]) {
//             sum1 += a[i];
//             i++;
//         }
//         else if (a[i] > b[j]) {
//             sum2 += b[j];
//             j++;
//         }
//         else {
//             result += max(sum1, sum2) + a[i];
//             sum1 = 0;
//             sum2 = 0;
//             i++;
//             j++;
//         }
//     }
//     while (i < n) {
//         sum1 += a[i];
//         i++;
//     }
//     while (j < m) {
//         sum2 += b[j];
//         j++;
//     }
//     result += max(sum1, sum2);
//     cout<<result<<endl;
// 	}
// return 0;
// }

/*************************Calculate the sum*************************** */
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n,m=pow(10,6)+7;
//     cin >> n;
//     int arr[n], temp[n];
//         for(int i = 0; i < n; ++i) {
//         cin >> arr[i];
//     }
//     int Q;
//     cin >> Q;
//     int operations[Q];
//     for(int i = 0; i < Q; i++) {
//         cin >> operations[i];
//     }
//         for(int i = 0; i < Q; i++) {
//         int X = operations[i];
//                 for(int j = 0; j < n; j++) {
//             temp[j] = arr[j];
//         }
//                 for(int j = 0; j < n; j++) {
//             arr[j] = (temp[j] + temp[(j + n - X) % n]) % m;
//         }
//     }
//         int sum = 0;
//     for(int i = 0; i < n; i++) {
//         sum = (sum + arr[i]) % m;
//     }
//     cout << sum << endl;
    
//     return 0;
// }

/*********************Product Except Self *********************/
// #include<iostream>
// using namespace std;
// int main(){
//     int N;
//     cin>>N;
//     int arr[N];
//     for(int i=0;i<N;i++){
//         cin>>arr[i];
//     }
    // long long output[N];
    // long long temp = 1;
    // for(int i=0;i<N;i++){
    //     output[i] = temp;
    //     temp *= arr[i];
    // }
    // temp = 1;
    // for(int i=N-1;i>=0;i--){
    //     output[i] *= temp;
    //     temp *= arr[i];
    // }
//     for(int i=0;i<N;i++){
//         cout<<output[i]<<" ";
//     }
//     cout<<endl;
// return 0;
// }

/**************************** Find Majority Elements - 2 **********************************/
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int N;
//     cin >> N;
//     int A[N];
//     for (int i = 0; i < N; ++i) {
//         cin >> A[i];
//     }
//     sort(A,A+N);
//     int candidate1 = -1, candidate2 = -1, count1 = 0, count2 = 0;
    
//     for (int i = 0; i < N; ++i) {
//         if (A[i] == candidate1) {
//             count1++;
//         } else if (A[i] == candidate2) {
//             count2++;
//         } else if (count1 == 0) {
//             candidate1 = A[i];
//             count1 = 1;
//         } else if (count2 == 0) {
//             candidate2 = A[i];
//             count2 = 1;
//         } else {
//             count1--;
//             count2--;
//         }
//     }
//     count1 = 0;
//     count2 = 0;
    
//     for (int i = 0; i < N; ++i) {
//         if (A[i] == candidate1) {
//             count1++;
//         } else if (A[i] == candidate2) {
//             count2++;
//         }
//     }

//     int threshold = N / 3;
//     bool found = false;

//     if (count1 > threshold) {
//         cout << candidate1 << " ";
//         found = true;
//     }
//     if (count2 > threshold) {
//         cout << candidate2 << " ";
//         found = true;
//     }
    
//     if (!found) {
//         cout << "No Majority Elements";
//     }

//     cout << endl;
//     return 0;
// }