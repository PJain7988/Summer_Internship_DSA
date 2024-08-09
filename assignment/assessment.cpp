// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n,r,e=0,o=0,m=100,j=0;
//     cin>>n;
//     int arr[m];
//     for(int i=0;i<m;i++){
//         r=n%10;
//         arr[i]=r;
//         n=n/10;
//         j++;
//     }
//     for(int i=0;i<j;i++){
//         if(i%2!=0)
//         o=arr[i]+o;
//         else
//         e=arr[i]+e;
//     }
//     cout<<e<<endl;
//     cout<<o<<endl;
//     return 0;
// }

/**************************************Count digit************************************/
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n,m,c=0,r;
//     cin>>n;
//     cin>>m;
//     while(n!=0){
//         r=n%10;
//         if(r==m)
//         c++;
//         n=n/10;
//     }
//     cout<<c<<endl;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n,rem,rev=0;
//     cin>>n;
//     int p=n;
//     for(int i=0;p>0;p/=10){
//         rem =p%10;
//         rev=rev*10+rem;
//         i++;
//     }
//     cout<<rev<<endl;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// int n,k=0,p,sum=0,r;
// cin>>n;
//     p=n;
//     while(n>0){
//         n=n/10;
//         k++;
//     }
// for(int i=0;i<=k;i++){
//     if(i==0){
//     sum=p%10;
//     p=p/10;}
//     else{
//       r=p%10;
//       sum=sum+(r*pow(2,i));
//       p=p/10;
//     }
// }
// cout<<sum;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void print_series(int n1, int n2)
// {
//     int d,c=1;
//     for(int i=1;;i++){
//         d=3*i+2;
//         if(c<=n1){
//         if(d%n2!=0){
//             cout<<d<<endl;
//             c++;
//         }}
//         else
//         break;
//     }
// }
// int main()
// {
//     int n1, n2;
//     cin >> n1 >> n2;
//     print_series(n1, n2);
//     return 0;
// }

/***********************************Fernhit to celsisus******************************/
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int s,e,d,c;
//     cin>>s>>e>>d;
//     for(int f=s;f<=e;f=f+d){
//         c=(5*(f-32))/9;
//         cout<<f<<"\t"<<c<<endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n,a=0,b=1,sum;
//     cin>>n;
//     if(n==1)
//     cout<<a;
//     else if(n==2)
//     cout<<b;
//     else{
//         for(int i=1;i<n;i++){
//         sum=a+b;
//         a=b;
//         b=sum;
//         }
//         cout<<sum;
//     }
//     return 0;
// }

/***************************************Simple input**************************************** */

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n , sum = 0;
//     while(cin>>n){
//         sum += n;
//         if(sum>=0)
//         cout<<n<<endl;
//         else
//         break;
//     }
//     return 0;
// }

/*************************************Odd or even Delhi back********************************* */

// #include<bits/stdc++.h>
// using namespace std;
// void delhi(int n){
//     int r,e=0,o=0,m=100,j=0;
//     int arr[m];
//     for(int i=0;i<m;i++){
//         r=n%10;
//         arr[i]=r;
//         n=n/10;
//         j++;
//     }
//     for(int i=0;i<j;i++){
//         if(arr[i]%2!=0)
//         o=arr[i]+o;
//         else
//         e=arr[i]+e;
//     }
//     if(o%3==0 || e%4==0)
//     cout<<"Yes"<<endl;
//     else
//     cout<<"No"<<endl;
// }
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++){
//         delhi(a[i]);
//     }

//     return 0;
// }

/*************************************check armstrong number********************************* */

// #include<bits/stdc++.h>
// using namespace std;
// bool check_aremstrong(int n){
//     int p,k=0,r,sum=0;
//     p=n;
//     while(n>0){
//         n=n/10;
//         k++;
//     }
//     n=p;
//     for(int i=0;i<=k;i++){
//         r=n%10;
//         sum=sum+pow(r,k);
//         n=n/10;
//     }
//     if(p==sum)
//     return 1;
//     else
//     return 0;
// }
// int main(){
//     int n,result;
//     cin>>n;
//     result = check_aremstrong(n);
//     if(result==1)
//     cout<<"true";
//     else
//     cout<<"false";
//     return 0;
// }

/*************************************Print armstrong number********************************* */
// #include<bits/stdc++.h>
// using namespace std;
// bool check_aremstrong(int n){
//     int p,k=0,r,sum=0;
//     p=n;
//     while(n>0){
//         n=n/10;
//         k++;
//     }
//     n=p;
//     for(int i=0;i<=k;i++){
//         r=n%10;
//         sum=sum+pow(r,k);
//         n=n/10;
//     }
//     if(p==sum)
//     return 1;
//     else
//     return 0;
// }
// int main(){
//     int n1,n2;
//     cin>>n1>>n2;
//     int n=n2-n1;
//     int a[n],sum=n1;
//     for(int i=0;i<n;i++){
//         sum++;
//         a[i]=sum;
//     }
//     for(int i=0;i<n;i++){
//         int d=check_aremstrong(a[i]);
//         if(d==1)
//         cout<<a[i]<<endl;
//     }

//     return 0;
// }

/**************************************Replace them All************************************/

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     long long int n,p=0;
// 	int r;
//     cin>>n;
//     if(n==0){
//         n=5;
//     }
// 	else{
//     while(n>0){
//         r=n%10;
//         if(r==0){
//         r=5;
//         }
//         p=p*10+r;
//         n/=10;
//     }
//     while(p>0){
//         r=p%10;
//         n=n*10+r;
//         p/=10;
//     }
// 	}
//     cout<<n<<endl;
//     return 0;
// }

/*********************************Shopping Game*****************************/
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     int i = 1;
//     while(i<=t){
//         int m,n;
//         cin >>m >> n;
//         int countA = 0, countH = 0;
//         int j=1;
//         while(1){
//             if(j%2==1){
//                 countA += j;
//                 if(countA > m){
//                     cout<<"Harshit"<<endl;
//                     break;
//                 }
//             }else{
//                 countH += j;
//                 if(countH > n){
//                   cout<<"Aayush"<<endl;
//                     break;
//                 }
//             }
//             j++;
//         }
//         i++;
//     }

//     return 0;
// }

/**************************************Boston Numbers************************************/
// #include<bits/stdc++.h>
// using namespace std;
// int sumOfDigits(int num) {
//     int sum = 0;
//     while (num > 0) {
//         sum += num % 10;
//         num /= 10;
//     }
//     return sum;
// }
// bool isBostonNumber(int num) {
//     int originalSum = sumOfDigits(num);
//     int factorSum = 0;
//     int n = num;
//     for (int i = 2; i <= sqrt(n); ++i) {
//         while (n % i == 0) {
//             factorSum += sumOfDigits(i);
//             n /= i;
//         }
//     }
//     if (n > 1) {
//         factorSum += sumOfDigits(n);
//     }
//     return originalSum == factorSum;
// }
// int main() {
//     int num;
//     cin >> num;
//     if (isBostonNumber(num)) {
//         cout <<true<<endl;
//     } else {
//         cout << false<<endl;
//     }
//     return 0;
// }


/**************************************Chewbacca and Number************************************/
// #include<iostream>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int i=0;
//     if(s[i]=='9'){
//         i++;
//     }
//     for(;s[i]!='\0';i++){
//         int digit=s[i]-'0';
//         if(digit>=5){
//             digit=9-digit;
//         }
//         s[i]=digit+'0';
//     }
//     cout<<s<<endl;
//     return 0;
// }

/*************************************Conversion Any to Any********************************* */
// #include<bits/stdc++.h>
// using namespace std;

// int toDecimal(int sb, int sn) {
//     int decimalValue = 0;
//     int basePower = 1;
    
//     while (sn > 0) {
//         int lastDigit = sn % 10;
//         decimalValue += lastDigit * basePower;
//         basePower *= sb;
//         sn /= 10;
//     }
    
//     return decimalValue;
// }

// string fromDecimal(int db, int decimalValue) {
//     string result = "";
    
//     while (decimalValue > 0) {
//         int remainder = decimalValue % db;
//         result = to_string(remainder) + result;
//         decimalValue /= db;
//     }
    
//     return result;
// }

// string convertBase(int sb, int db, int sn) {
//     int decimalValue = toDecimal(sb, sn);
//     if (decimalValue == 0) 
//     return "0";
//     else
//     return fromDecimal(db, decimalValue);
// }

// int main() {
//     int sb, db, sn;
//     cin >> sb >> db >> sn;
//     cout << convertBase(sb, db, sn) << endl;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//      int t,s=0,n=0;
//      cin>>t;
//      while(t>0){
//          int a[3],o=0,z=0;
//          for(int i=0;i<3;i++){
//              cin>>a[i];
//              if(a[i]==0)
//              z++;
//              else
//              o++;
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

/**************************Inverse of a number************************************* */
// #include<bits/stdc++.h>
// using namespace std;
// int inverseNumber(int number) {
//     int inverse = 0;
//     int position = 1;

//     while (number > 0) {
//         int digit = number % 10;
//         inverse += position * pow(10, digit - 1);
//         number /= 10;
//         position++;
//     }

//     return inverse;
// }

// int main() {
//     int number;
//     cin >> number;
//     int result = inverseNumber(number);
//     cout << result << endl;

//     return 0;
// }
