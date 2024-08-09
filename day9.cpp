/*********************Perfect Square *********************/
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// int n;
// cin>>n;

// int start=0,end=n/2;
// bool isPerfectSquare=false;
// while(start<=end){
//     int mid=(start+end)/2;
//     if(mid*mid==n){
//         isPerfectSquare=true;
//         break;

//     }
//     else if(mid*mid>n){
//         end=mid-1;
//     }
//     else{
//         start=mid+1;

//     }
// }
// if(isPerfectSquare){
// 		cout<<"yes"<<end;
// 	}else{
// 		cout<<"no"<<end;
// 	}
// 	return 0;
// }

/****************Prime Factor **********************/
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int num;
//     cin>>num;

//     //is 2 a prime factor of the num
//     if(num%2==0){
//         cout<<2<<",";
//         while(num%2==0){
//             num/=2;
//         }  
//     }

//     for(int i=3 ;i*i<num;i+=2){
//         if(num%i==0){
//               cout<<i<<",";
//             while(num%i==0){
//               num/=i;
//             }     
//         }
//     }
//     if(num>1){
//         cout<<num<<" ";
//     }
// }
//worst case complexity =sqrt(n)


/**********************Vector *************************/
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     //vector declare
//     vector<int >nums;
//     nums.push_back(10);
//     //to check last element 
//     cout<<nums.back()<<endl;
//     cout<<nums.size()<<endl;
//     cout<<nums.capacity()<<endl;
//     cout<<"size"<<nums.size()<<endl;
//     cout<<"capacity"<<nums.capacity()<<endl;

//     nums.push_back(12);
//     cout<<nums.back()<<endl;
//     cout<<"size"<<nums.size()<<endl;
//     cout<<"capacity"<<nums.capacity()<<endl;
   

// }

/***************************Char_array and String ************/
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// //     char arr[200] ={'a','b','c','\0'};
// //         cout<<arr<<endl;
// //     char name[8] ="Dafa ho";
// //     cout<<name<<endl;

// // for(int i=0; name[i]!='\0';i++){
// //     cout<<name[i]<<" ";
// // }


// //input
// char naam[100];
// // cin>>naam;//cin white spaces ko ignore karta h
// // cout<<naam<<endl;

// int i=0;
// char ch;
// ch=cin.get();
// while(ch!='$'){
//      naam[i]=ch;
//      i++;
//      ch=cin.get();
// }
// naam[i]='\0';
// // name[i]='\0';
// // cout<<name<<endl;
// // cin.getline(arr_name,num_input,delimiter);
// char name[100];
// cin.getline(name,100,'\n');
// cout<<name<<endl;


// //find size of string 
// cout<<strlen(name)<<endl;

// //check pallindrome
// //ARORA ,NAMAN

//     char str[100];
//     cin>>str;
//      int n=strlen(str);
//      int left=0,right=n-1;
//      while(left<=right&&str[left]==str[right]){
//          left++;
//          right--;
//      }
// if(left>=right){
//     cout<<"Yes"<<endl;
// }
// else{
//     cout<<"No"<<endl;
// }
//     return 0;
// }


/*****************************************HomeWork *****************************************/
                                    // Write a function to reverse a string.
/* #include<bits/stdc++.h>
using namespace std;
string Reverse_String(char st[]){
    char st1[100];
    int len=strlen(st);
    int i=0,j=len-1;
    while(j>=0){
        st1[i]=st[j];
        i++;
        j--;
    }
    st1[i]='\0';
    return st1;
}
int main(){
    int i=0;
char st[100];
cin>>st;
    cout<<Reverse_String(st)<<endl;
    return 0;
}       */      

            // Given a string rotate it by n characters.
/* #include<bits/stdc++.h>
using namespace std;

int main(){
    char st[100] = "GeetaUniversity";
    int len = strlen(st);
    int n,j=0;
    cin>>n;
    char st1[100];
     for(int i=len-n;i<len;i++){
        st1[j]=st[i];
        j++;
     }
    for(int i=0;i<len-n;i++){
        st1[j]=st[i];
        j++;
     }
    cout<<st1<<endl;
    return 0;
}           */

                // Check if two strings are permutations of each other:
/* #include<bits/stdc++.h>
using namespace std;
bool arePermutations(char st[],char st1[]) {
    int n = strlen(st);
    int m = strlen(st1);
    if (n != m) 
    return false;
    string Str1 = st;
    string Str2 = st1;
    sort(Str1.begin(), Str1.end());
    sort(Str2.begin(), Str2.end());
    return Str1 == Str2;
}

int main() {
    char st1[100] = "Listen";
    char st2[100] = "siLent";
    if (arePermutations(st1, st2)) {
        cout << st1 << " and " << st2 << " are permutations of each other." << endl;
    } else {
        cout << st1 << " and " << st2 << " are not permutations of each other." << endl;
    }
    return 0;
}           */


#include<bits/stdc++.h>
using namespace std;

void printAllSubstrings(char st[]) {
    int n = strlen(st);
    for (int i = 0; i < n; i++) {
        for (int len = 1; len <= n - i; len++) {
            for (int j = i; j < i + len; j++) {
                cout << st[j];
            }
            cout << endl;
        }
    }
}

int main() {
    char st[100];
    cin>>st;
    cout << "Substrings of " << st << ":" << endl;
    printAllSubstrings(st);
    return 0;
}