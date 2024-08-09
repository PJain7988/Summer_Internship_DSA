            //Write a function to reverse a string.
/*
#include<bits/stdc++.h>
// #include<cstring>
using namespace std;
int main(){
    char str[100]="Coding";
    int n=strlen(str);
    int left=0,right=n-1;
    cout<<"Before: "<<str<<endl;
    while(left<=right){
        swap(str[left],str[right]);
        left++;
        right--;
    }
    cout<<"After: "<<str<<endl;
}                               */

            // Write a code to given a string rotate by n characters.
/*
#include<bits/stdc++.h>
using namespace std;
void rotate(char str[],int left,int right){
    while(left<=right){
        swap(str[left],str[right]);
    }
}
int main(){
    char st[100];
    cin>>st;
    int n;
    cin>>n;
    int len = strlen(st);
    rotate(st,0,len-1);
    rotate(st,0,n-1);
    rotate(st,n,len-1);

    cout<<st<<endl;
    return 0;
}                   */

                // Check if two strings are permutations of each other:
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    char st1[100] ="abcd";
    char st2[100] = "bcaed";
    int n= strlen(st1);
    int freq1[26] = {0};
    int freq2[26] = {0};
     // ( In Vector,
    // vector<int>freq1[26]=(26,0)
    // vector<int>freq2[26]=(26,0)
    //  )       
    for(int i=0;i<n;i++){
        int ind1 = st1[i]-'a';
        freq1[ind1]++;
        int ind2 = st2[i]-'a';
        freq2[ind2]++;
    }
    bool isPrem = true;
    for(int i=0;i<26;i++){
        if(freq1[i]!=freq2[i]){
        isPrem=false;
        break;
    }
    }
    if(isPrem == true)
    cout<<"Yes"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}                           */

                    // Print All Substrings(continuous part of string and oder is same as of original string) of a given array.
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    char st[100];
    cin>>st;
    int n = strlen(st);
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
            cout<<st[k];
            }
            cout<<endl;
        }
    }
    return 0;
}               */
                    // By string datatype here Time complexity of print all substring is 0(n^2)
/* #include<bits/stdc++.h>
using namespace std;
int main(){
    string st;
    cin>>st;
    int n = st.size();
    for(int i=0;i<n;i++){
        string SubStr = "";
        for(int j=i;j<n;j++){
            //SubStr.push_back(st[j]);
            SubStr=SubStr+st[j];
            cout<<SubStr<<endl;
        }
    }
    return 0;
}       */

                                    // String Datatype

/*
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string str; // declare
    str = "abc"; // initialization
    string s = "def"; // declaration + initialisation
    string st,st1;
    cin>>st; // not read white space
    // getline(cin,name_of_string,delimiter)
    // default = '\n'
    getline(cin,st1,'$');
    cout<<st<<endl;
    cout<<st1<<endl;

                // Some Function of a string
// 1) Concatenate the string
    string s1 ="abc";
    string s2 = "def";
    string s3=s1+s2;
    cout<<s3<<endl;

//2) Clear -> to delete
    s3.clear();
    cout<<s3<<endl;

//3) .empty() -> check khali h ya nhi
    cout<<s3.empty()<<endl;
// 4) compare -> to compare two strings and follow dictionary order and used in lexographically
    cout<<s1.compare(s2)<<endl; // -1
    string a , b;
    cin>>a>>b;
    cout<<a.compare(b)<<endl; //0
    cout<<s2.compare(s1)<<endl; // 1
    string s4=s1+s2;
    cout<<s4<<endl;
// 5) erase(pos,length)
    s4.erase(1,3);
    cout<<s4<<endl;
// 6) find (string) -> index of first occurence
    string s5 = s1+s2;
    cout<<s5.find("abc")<<endl;

// 7) size()-> find length of string
    cout<<s5.size()<<endl;
// 8) substr(pos,len) -> to find substring
    cout<<s5.substr(2,4)<<endl;
    cout<<s5.substr(0)<<endl;

// 9) string -> integer (in string only number is put)
    string num = "3457";
    int number = stoi(num);
    cout<<number<<endl;

// 10) integer -> string 
    int num1 = 8756;
    string numToStr = to_string(num1);
    cout<<numToStr.size()<<endl;
    cout<<numToStr<<endl;

// 11) sort(str.begin(),str.end());
    sort(s5.begin(),s5.end());
    cout<<s5<<endl;

// 12) transform() -> to transform from lowercase to uppercase or vice versa
    transform(s5.begin(),s5.end(),s5.begin(),::toupper);
    cout<<s5<<endl;
    transform(s5.begin(),s5.end(),s5.begin(),::tolower);
    cout<<s5<<endl;

// 14) int arr[5] = {1,2,3,4,5};
    string arr[5]={"abc","coding","Hello","hi","Leet"};
    cout<<"Before Sort: "<<endl;
    for(int i=0;i<5;i++){
    cout<<arr[i]<<"\t";
    }
    cout<<endl<<"After Sort: "<<endl;
    sort(arr,arr+5);
    for(int i=0;i<5;i++){
    cout<<arr[i]<<"\t";
    }
    return 0;
}               */

                //Questions floor on Greeks for Greeks
// class solution{
//     public:
// int findFloor(vector<long long> arr, long long n, long long x){
//         int low=0,high=n-1;
//         int ans = -1;
//         while(low<=high){
//             int mid=(low+high)/2;
//             if(arr[mid]<=x){
//             ans=mid;
//             low=mid+1;
//             }
//             else if(arr[mid]>x){
//                 high=mid-1;
//             }
//         }
//         return ans; 
        
//     }
//     };


