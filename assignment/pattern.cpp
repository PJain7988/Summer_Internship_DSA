/**********************************R4 -- Pattern *********************************/
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for (int j=0;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*************************Pattern InvertedHourGlass *******************/
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int N;
//     cin >> N;
//     for (int i = N; i >= 0; --i) {
//         for (int j = N; j >= i; --j) {
//             cout << j << " ";
//         }
//         for (int j = 0; j < 2 * i - 1; ++j) {
//             cout << "  ";
//         }
//         for (int j = i; j <= N; ++j) {
//             if (j != 0) {
//                 cout << j << " ";
//             }
//         }
//         cout << endl;
//     }
//     for (int i = 1; i <= N; ++i) {
//         for (int j = N; j >= i; --j) {
//             cout << j << " ";
//         }
//         for (int j = 0; j < 2 * i - 1; ++j) {
//             cout << "  ";
//         }
//         for (int j = i; j <= N; ++j) {
//             if (j != 0) {
//                 cout << j << " ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }

/**********************************Pattern Number ladder *********************************/
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
    // int n,val=1;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for (int j=0;j<=i;j++){
    //         cout<<val<<"\t";
    //         val++;
    //     }
    //     cout<<endl;
    // }
//     return 0;
// }

/**********************************fibonacci number pattern *********************************/
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,val=0,a=0,b=1;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for (int j=0;j<=i;j++){
//             cout<<a<<"\t";
//             val=a+b;
//             a=b;
//             b=val;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/****************************New diamond pattern******************** */
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
// 	int n;
// 	cin>>n;
// 	 for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (i == j || i + j == n - 1 || (n % 2 == 1 && (i == n / 2 || j == n / 2))) {
//                 cout << "*\t";
//             } else {
//                 cout << "\t";
//             }
//         }
//         cout << endl;
//     }
// 	return 0;
// }

/****************************Hollow diamond pattern******************** */
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int i,j,k=0,n;
//      cin>>n;
//      for(i=0;i<n;i++)
//      {
//           if(i==0||i==n-1)
//           {
//                for(j=0;j<n;j++)
//                     cout<<"*\t";
//           }
//           else if(i<=n/2)
//           {
//                for(j=0;j<(n/2)-i+1;j++)
//                cout<<"*\t";
//                for(j=0;j<2*i-1;j++)
//                cout<<"\t";
//                for(j=0;j<(n/2)-i+1;j++)
//                cout<<"*\t";
//                if(i==n/2)
//                     k=2;
//           }
//           else
//           {
//                for(j=0;j<k;j++)
//                     cout<<"*\t";
//                for(j=0;j<n-(2*k);j++)
//                     cout<<"\t";
//                for(j=0;j<k;j++)
//                     cout<<"*\t";
//                k++;
//           }
//           cout<<"\n";
//      }
// 	return 0;
// }

/***************************Triangle number pattern******************** */

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n,val;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=0;j<n-i;j++)
//         cout<<"\t";
// 		int x= 2*i-1;
// 		val=i;
//         for(int j=0;j<x;j++){
//         cout<<val<<"\t";
// 		if(j<x/2)
// 		val++;
// 		else
// 		val--;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/************************************* Mirror star pattern ************************* */

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int x = (n + 1) / 2;
//     for (int i = 1; i < x; ++i) {
//         for (int j = 1; j <= x - i; ++j) {
//             cout << "\t";
//         }
//         for (int j = 1; j <= 2 * i - 1; ++j) {
//             cout << "*\t";
//         }
//         cout << endl;
//     }
//     for (int i = 1; i <= 2 * x - 1; ++i) {
//         cout << "*\t";
//     }
//     cout << endl;
//     for (int i = x - 1; i >= 1; --i) {
//         for (int j = 1; j <= x - i; ++j) {
//             cout << "\t";
//         }
//         for (int j = 1; j <= 2 * i - 1; ++j) {
//             cout << "*\t";
//         }
//         cout << endl;
//     }
//     return 0;
// }

/************************************* Hollow Rhombus pattern ************************* */

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int i,j,n;
//     cin>>n;
//     for(i=1; i<=n; i++){
//    for(j=1; j<=n-i; j++){
//    cout<<" ";
//    }
//    for(j=1; j<=n; j++){
//    if(i==1 || i==n || j==1 || j==n){
//    cout<<"*";
//    }
//    else{
//        cout<<" ";
//    }
// }
//  cout<<endl;
// }
//     return 0;
// }

/************************************* Print with Zeros pattern ************************* */
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int n;
// 	cin>>n;
// 	for(int i=1;i<=n;i++){
// 		int val =i;
// 		for(int j=0;j<i;j++){
// 			if(j==0||j==i-1)
// 			cout<<val<<"\t";
// 			else
// 			cout<<"0\t";
// 		}
// 		cout<<endl;
// 	}
// 	return 0;
// }

/************************************* Rhombus pattern ************************* */

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int maxVal = n * 2 - 1;
//     for (int i = 1; i <= n; ++i) {
//         for (int j = 1; j <= n - i; ++j) {
//             cout << "\t";
//         }
//         for (int j = 0; j < i; ++j) {
//             cout << (i + j);
//             if (j < i - 1) {
//                 cout << "\t";
//             }
//         }
//         for (int j = i - 2; j >= 0; --j) {
//             cout << "\t" << (i + j);
//         }

//         cout << endl;
//     }
//     for (int i = n - 1; i >= 1; --i) {
//         for (int j = 1; j <= n - i; ++j) {
//             cout << "\t";
//         }
//         for (int j = 0; j < i; ++j) {
//             cout << (i + j);
//             if (j < i - 1) {
//                 cout << "\t";
//             }
//         }
//         for (int j = i - 2; j >= 0; --j) {
//             cout << "\t" << (i + j);
//         }

//         cout << endl;
//     }
//     return 0;
// }

/************************ */
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int n;
// 	cin>>n;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n - i; j++) {
//             cout << "  ";
//         }
//         for (int j = 1; j <= i; j++) {
//             cout << j << " ";
//         }
//         for (int j = i - 1; j >= 1; j--) {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     for (int i = n - 1; i >= 1; i--) {
//         for (int j = 1; j <= n - i; j++) {
//             cout << "  ";
//         }
//         for (int j = 1; j <= i; j++) {
//             cout << j << " ";
//         }
//         for (int j = i - 1; j >= 1; j--) {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// return 0;
// }

/*************************Pattern Mountain******************* */
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for (int i = 1; i <= n; ++i) {
//         for (int j = 1; j <= i; ++j) {
//             cout << j << "\t";
//         }

//         int p = 2 * (n - i) - 1;
//         for (int j = 0; j < p; ++j) {
//             cout <<"\t";
//         }

//         if (i == n) {
//             for (int j = i - 1; j >= 1; --j) {
//                 cout << j << "\t";
//             }
//         } else {
//             for (int j = i; j >= 1; --j) {
//                 cout << j << "\t";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

/************************************Pascal Triangle*************** */
// #include<bits/stdc++.h>
// using namespace std;
// int factorial(int n) {
//     if (n == 0 || n == 1)
//         return 1;
//     int result = 1;
//     for (int i = 2; i <= n; ++i) {
//         result *= i;
//     }
//     return result;
// }
// int binomialCoeff(int n, int k) {
//     return factorial(n) / (factorial(k) * factorial(n - k));
// }
// void printPascalsTriangle(int n) {
//     for (int line = 0; line < n; ++line) {
//         for (int i = 0; i <= line; ++i) {
//             int coeff = binomialCoeff(line, i);
//             if (i == 0)
//                 cout << coeff;
//             else
//                 cout << "\t" << coeff;
//         }
//         cout << endl;
//     }
// }
// int main() {
//     int n ;
//     cin>>n;
//     printPascalsTriangle(n);
//     return 0;
// }

/**************************Pattern HourGlass************************* */
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int n ;
//     cin>>n;
//  for (int i = 0; i <= n; ++i) {
//         for (int j = 0; j < i; ++j) {
//             cout << "  ";
//         }
//         for (int j = n - i; j >= 0; --j) {
//             cout << j << " ";
//         }
//         for (int j = 1; j <= n - i; ++j) {
//             if (j == n - i) {
//                 cout << j;
//             } else {
//                 cout << j << " ";
//             }
//         }
//         cout << endl;
//     }
//         for (int i = n - 1; i >= 0; --i) {
//         for (int j = 0; j < i; ++j) {
//             cout << "  ";
//         }
//         for (int j = n - i; j >= 0; --j) {
//             cout << j << " ";
//         }
//         for (int j = 1; j <= n - i; ++j) {
//             if (j == n - i) {
//                 cout << j;
//             } else {
//                 cout << j << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

/*************************Pattern Magic********************************** */
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//     for(int j=i;j<n;j++){
//         cout<<'*';
//     }
//     for(int k=1;k<=(2*i)-1;k++){
//         cout<<' ';
//     }
//     if(i==0){
//         for(int j=i;j<n-1;j++){ 
//          cout<<'*';
//        }
//     }
//     else{
//         for(int j=i;j<n;j++){   
//          cout<<'*';
//         }
//     }
//     cout<<endl;
// }
// for(int i=n-2;i>=0;i--){
//     for(int j=i;j<n;j++){
//         cout<<'*';
//     }
//     for(int k=1;k<=(2*i)-1;k++){
//         cout<<' ';
//     }
//     if(i==0){
//         for(int j=i;j<n-1;j++){ 
//          cout<<'*';
//         }
//     }
//     else{
//         for(int j=i;j<n;j++){   
//          cout<<'*';
//         }
//     }
//     cout<<endl;
// }
// return 0;
// }

/***********************************Double Sided Arrow **************/
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     for(int i=1;i<=(n+1)/2;i++){
//         for(int j=1;j<=(2*(n+1-2*i));j++){
//             cout<<" ";
//         }
//         for(int j = i;j>0;j--){
//             cout<<j<<" ";
//         }
       
//         for(int j=1;j<(4*(i-1)-1);j++){
//             cout<<" ";
//         }
//         if(i>1){
//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//     }
//         cout<<endl;
//     }
//     for(int i=n/2;i>0;i--){
//          for(int j=1;j<=(2*(n+1-2*i));j++){
//             cout<<" ";
//         }
//         for(int j = i;j>0;j--){
//             cout<<j<<" ";
//         }
        
//         for(int j=1;j<(4*(i-1)-1);j++){
//             cout<<" ";
//         }
//         if(i>1){
//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         }
//         cout<<endl;
//     }
// 	return 0;
// }