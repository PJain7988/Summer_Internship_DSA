/************** Priyanshu and his Strings ***************/

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     string s1, s2;
//     cin >> s1 >> s2;
//         transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
//     transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
//         if (s1 < s2) {
//         cout << "-1" << endl;
//     } else if (s1 > s2) {
//         cout << "1" << endl;
//     } else {
//         cout << "0" << endl;
//     }
    
//     return 0;
// }

/**************** Is Subsequence  ******************/
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s1,s2;
//     cin>>s1>>s2;
//     transform(s1.begin(),s1.end(),s1.begin(),::towlower);
//     transform(s2.begin(),s2.end(),s2.begin(),::towlower);
//     int n = s1.size();
//     int m = s2.size();
//     int i=0 , j=0;
//     while(i<n && j<m){
//         if(s1[i]==s2[j])
//         i++;
//         j++;
//     }
//     if(i==n)
//     cout<<"true"<<endl;
//     else
//     cout<<"false"<<endl;
//     return 0;
// }

/************************* Form Biggest Number *********************/
// #include <bits/stdc++.h>
// using namespace std;
// bool compare(string X, string Y) {
//     string XY = X + Y;
//     string YX = Y + X;
//     return XY > YX;
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         string arr[100];
//         for (int i = 0; i < n; ++i) {
//             cin >> arr[i];
//         }
//         sort(arr, arr + n, compare);
//         for (int i = 0; i < n; ++i) {
//             cout << arr[i];
//         }
//         cout << endl;
//     }
//     return 0;
// }

/******************** String Compression ***********************/
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s1;
//     cin>>s1;
//     int n = s1.size();
//     int c=1;
//     char C_C=s1[0];
//     for(int i=1;i<n;i++){
//         if(s1[i]==C_C)
//         c++;
//         else{
//             cout << C_C << c;
//             C_C = s1[i];
//             c = 1;
//         }
//     }
//     cout << C_C << c << endl;
//     return 0;
// }

/*********************** Strings-Remove Duplicates *************************/
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s1;
//     cin>>s1;
//     int n = s1.size();
//     int c=1;
//     char C_C=s1[0];
//     for(int i=1;i<n;i++){
//         if(s1[i]==C_C)
//         c++;
//         else{
//             cout << C_C ;
//             C_C = s1[i];
//         }
//     }
//     cout << C_C << endl;
//     return 0;
// }

/***************** Strings-Count Palindromic Substrings ******************/
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int n=s.size();
//     int count = 0;
//     for (int i = 0; i < 2 * n - 1; i++) {
//         int left = i / 2;
//         int right = left + i % 2;
//         while (left >= 0 && right < n && s[left] == s[right]) {
//             count++;
//             left--;
//             right++;
//         }
//     }
    
//     cout << count << endl;
//     return 0;
// }

/**************************String is Pallindrome ***************/
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s1;
//     cin>>s1;
//     int n=s1.size(),f=0;
//     for(int i=0;i<=n/2;i++){
//         if(s1[i]==s1[n-i-1])
//         f++;
//         else{
//             f=0;
//             break;
//         }
//     }
//     if(f==0)
//     cout<<"false"<<endl;
//     else
//     cout<<"true"<<endl;
//     return 0;
// }

/****************** Can You Read This?****************/
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string S;
//     cin>>S;
//     int n = S.size();
//     int start = 0;
//     for (int i = 0; i < n; i++) {
//         if (isupper(S[i])) {
//             if (start < i) {
//                 cout << S.substr(start, i - start) << endl;
//             }
//             start = i;
//         }
//     }
//     if (start < n) {
//         cout << S.substr(start, n - start) << endl;
//     }
//     return 0;
// }

/****************** Strings-Toggle Case ****************/
//  #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s;
//     cin>>s;
//     int n = s.size();
//     for(int i=0;i<n;i++){
//         char c = s[i];
//     if(isupper(c)){
//          c=tolower(c);
//     }
//     else{
//         c=toupper(c);
//     }
//         s[i]=c;
//     }
//     cout<<s<<endl;
//     return 0;
// }

/****************** Strings-Odd Even Character ****************/
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s;
//     cin>>s;
//     int n = s.size();
//     for(int i=0;i<n;i++){
//         char c = s[i];
//         if(i%2==0)
//         c=c+1;
//         else
//         c=c-1;
//         s[i]=c;
//     }
//     cout<<s<<endl;
//     return 0;
// }

/*************************** Strings-Max Frequency Character **************************/
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s,f;
//     cin>>s;
//     int n = s.size(),d=0;
//     char a;
//     for(int i=0;i<n;i++){
//         f[i]=0;
//     }
//     for(int i=0;i<n;i++){
//         if(f[i]==0){
//             int c=0;
//             for(int j=0;j<n;j++){
//                 if(s[i]==s[j]){
//                     c++;
//                     f[j]=1;
//                 }
//             }
//             if(c>d){
//                 d=c;
//                 a=s[i];
//             }
//         }
//     }
//     cout<<a<<endl;
//     return 0;
// }

/******************** String String Compression ***********************/
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s1;
//     cin>>s1;
//     int n = s1.size();
//     int c=1;
//     char C_C=s1[0];
//     for(int i=1;i<n;i++){
//         if(s1[i]==C_C)
//         c++;
//         else{
//             if(c==1){
//             cout << C_C;
//             }
//             else{
//                 cout << C_C<<c;
//             }
//             C_C = s1[i];
//             c = 1;
//         }
//     }
//     if(c==1){
//         cout<<C_C<<endl;
//     }
//     else{
//     cout << C_C << c << endl;
//     }
//     return 0;
// }

/****************************Good String ****************/
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string S;
//     cin >> S;
    
//     int maxLength =0;
//     int currentLength = 0;
//     int n = S.length();
    
//     for (int i = 0; i < n; ++i) {
//         char ch = S[i];
//         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
//             currentLength++;
//             if (currentLength > maxLength) {
//                 maxLength = currentLength;
//             }
//         } else {
//             currentLength = 0;
//         }
//     }
    
//     cout << maxLength << endl;
//     return 0;
// }

/************************Strings-Difference in Ascii Codes **************/
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s;
//     cin >> s;
//     string result = "";
//     for (int i = 0; i < s.length() - 1; i++) {
//         result += s[i];
//         int diff = s[i+1] - s[i];
//         result += to_string(diff);
//     }
//     result += s[s.length() - 1];
//     cout << result << endl;

//     return 0;
// }