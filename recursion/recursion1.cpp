                                //Factorial using recursion
/*
#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    // base
    if(n==0)
    return 1;
    // recursion
    // recurreence relation
    // int smallerAns = fact(n-1);
    //int BiggestAns = n*smallerAns;    

    // int BiggestAns = n*fact(n-1);  
    return n * fact(n-1);
}
int main(){
    int n;
    cin>>n;
    int result = fact(n);
    cout<<"Factorial of "<<n<< " is "<<result<<endl;
    return 0;
}                           */        
                                //Sum of first n natural numbers using recursion
/*
#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    // base
    if(n==1)
    return 1;
    return n + sum(n-1);
}
int main(){
    int n;
    cin>>n;
    int result = sum(n);
    cout<<"Sum of first "<<n<< " natural numbers is "<< result <<endl;
    return 0;
}                                                       */
                                //Sum of  Fibonacci series using recursion
 /*           // 0 1 1 2 3 5 8 13 21 ...................
#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    // base case
    if(n==0 || n==1)
    return n;
    return fibonacci(n-1)+fibonacci(n-2); // recurreence relation
}
int main(){
    int n;
    cin>>n;
    int result = fibonacci(n);
    cout<<"Sum of fibonacci series of "<<n<< " numbers is "<< result <<endl;
    return 0;
}                                           */
                                //check array is sorted or not using recursion
/*
#include<bits/stdc++.h>
using namespace std;

bool is_sorted1(int arr[],int n){
    // base case
    if(n==1)
    return true;
    // return (arr[0]>=arr[1] && is_sorted1(arr+1,n-1));  // recurrence relation for descending order
     return (arr[0]<=arr[1] && is_sorted1(arr+1,n-1));  // recurrence relation for ascending order
   // bool a = (arr[0]<=arr[1] && is_sorted1(arr+1,n-1));
   // bool b = (arr[0]>=arr[1] && is_sorted1(arr+1,n-1));
   // return (a || b);            // for both sorted(ascending or descending)
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result = is_sorted1(arr,n);
    cout<<"[";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<", ";
    }
    cout<<"] ";
    if(result == true)
    cout<<"This array is sorted."<<endl;
    else
    cout<<"This array is not sorted."<<endl;
    return 0;
}                                           */
                                // Another method of check array is sort or not
/*
#include<bits/stdc++.h>
using namespace std;

bool is_sorted2(int arr[],int n){
    // base case
    if(n==1)
    return true;
     return (arr[n-2]<=arr[n-1] && is_sorted2(arr,n-1)); // recurrence relation for ascending order
    // return (arr[n-2]>=arr[n-1] && is_sorted2(arr,n-1)); // recurrence relation for descending order
    //bool a = (arr[n-2]<=arr[n-1] && is_sorted2(arr,n-1));
   //bool b = (arr[n-2]>=arr[n-1] && is_sorted2(arr,n-1));
   //return (a || b); // recurrence relation for both
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result = is_sorted2(arr,n) ;
    cout<<"[";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<", ";
    }
    cout<<"] ";
    if(result == true)
    cout<<"This array is sorted."<<endl;
    else
    cout<<"This array is not sorted."<<endl;
    return 0;
}                                                       */
        // Print all natural number upto number given by user in descreasing order
/*
#include<bits/stdc++.h>
using namespace std;

void print(int n){
    // base case
    if(n==0)
    return ;
    cout<<n<<" ";
    print(n-1); // recurrence case
 }
int main(){
    int n;
    cin>>n;
    print(n);
     return 0;
}                        */
        // Print all natural number upto number given by user in increasing order
/*
#include<bits/stdc++.h>
using namespace std;

void print(int n){
    // base case
    if(n==0)
    return ;
    print(n-1); // recurrence case
    cout<<n<<" ";
 }
int main(){
    int n;
    cin>>n;
    print(n);
    return 0;
}                                   */
   // Print all natural number upto number given by user in increasing or descreasing order
/* 
#include<bits/stdc++.h>
using namespace std;

void print_incre(int n){
    if(n==0)
    return;
    print_incre(n-1);
    cout<<n<<" ";
}
void print_decre(int n){
    if(n==0)
    return;
    cout<<n<<" ";
    print_decre(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<"Print number in increasing order: "<<endl;
    print_incre(n);
    cout<<endl<<"Print number in decreasing order: "<<endl;
    print_decre(n);
    return 0;
}
                                                */
                                // Sum of array using recursion
/*
#include<bits/stdc++.h>
using namespace std;

int sum_array(int arr[],int n){
    // base case
    if(n==0)
    return 0;
    return arr[0]+sum_array(arr+1,n-1); // recurrence relation
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result = sum_array(arr,n);
    cout<<"Sum of array is : "<<result<<endl;
    return 0;
}
                                                */
                                // Sum of array using iterater (recursion)
/*
#include<bits/stdc++.h>
using namespace std;
int sum_array(int arr[],int n,int i){
    // base case
    if(i==n)
    return 0;
    return arr[i]+sum_array(arr,n,i+1); // recurrence relation
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result = sum_array(arr,n,0);
    cout<<"Sum of array is : "<<result<<endl;
    return 0;
}               */
                                // find power of n^x using recursion
/*
#include<bits/stdc++.h>
using namespace std;
int power(int n,int x){
    // base case
    if(x==0)
    return 1;
    return n * power(n,x-1); // recurrence relation
}

int main(){
    int n,x;
    cin>>n>>x;
    int result = power(n,x);
    cout<<"Power of "<<n<<" of "<<x<<" is : "<<result<<endl;
    return 0;
}                       */
                                // to print number in words using recursion using switch case
/*
#include<bits/stdc++.h>
using namespace std;

void print_in_words(int n){
    if(n==0)
    return ;
    print_in_words(n/10);
    int x = n%10;
    switch(x){
        case 1: cout<<"One"<<" ";
                break;
        case 2: cout<<"Two"<<" ";
                break;
        case 3: cout<<"Three"<<" ";
                break;
        case 4: cout<<"Four"<<" ";
                break;
        case 5: cout<<"Five"<<" ";
                break;
        case 6: cout<<"Six"<<" ";
                break;
        case 7: cout<<"Seven"<<" ";
                break;
        case 8: cout<<"Eight"<<" ";
                break;
        case 9: cout<<"Nine"<<" ";
                break;
        case 0: cout<<"Zero"<<" ";
                break;
    }
}
int main(){
    int n;
    cin>>n;
    print_in_words(n);
    return 0;
}               */
                                // to print number in words using recursion using string
/*
#include<bits/stdc++.h>
using namespace std;

string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void print_in_words(int n){
    if(n==0)
    return;
    print_in_words(n/10);
    int x = n%10;
    cout<<arr[x]<<" ";
}
int main(){
    int n;
    cin>>n;
    cout<<n<<" number in words is : "<<endl;
    print_in_words(n);
    return 0;
}                           */         
 // given an array and check it contains x number then find its first and last index and also print all index of that number
/*
#include<bits/stdc++.h>
using namespace std;
bool check_element(int arr[],int n,int i,int x){
    if(i==n)
    return false;
    if(arr[i]==x)
    return true;
    check_element(arr,n,i+1,x);
}
int first_index(int arr[],int n,int i,int x){
    if(i==n)
    return -1;
    if(arr[i]==x)
    return i;
    first_index(arr,n,i+1,x);
}
int last_index(int arr[],int n,int i,int x){
    if(i==-1)
    return -1;
    if(arr[i]==x)
    return i;
    last_index(arr,n,i-1,x);
}
void All_index(int arr[],int n,int i,int x){
    if(i==n)
    return ;
    if(arr[i]==x)
    cout<<i<<" ";
    All_index(arr,n,i+1,x);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    bool result = check_element(arr,n,0,x);
    if(result== true)
    cout<<"true"<<endl;
    else
    cout<<"False"<<endl;
    cout<<"First index of 7 is "<<first_index(arr,n,0,x)<<endl;
    cout<<"last index of 7 is "<<last_index(arr,n,n-1,x)<<endl;
    cout<<"All index of 7 is : ";
    All_index(arr,n,0,x);
    return 0;
}                                   */
                                // multiply two numbers using recursion
/*
#include<bits/stdc++.h>
using namespace std;

int multiply_num(int n, int m){
    if(m==0)
    return 0;
    return n+multiply_num(n,m-1);
}
int main(){
    int n,m;
    cin>>n>>m;
    int result = multiply_num(n,m) ;
    cout<<"multiply "<<n<<" and "<<m<<" numbers is : "<<result<<endl;
    return 0;
}                   */
                                // bubble sort using recursion
/*
#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n,int i){
    if(i==n)
    return ;
    for(int j=0;j<n-1;j++){
    if(arr[j]>arr[j+1])
    swap(arr[j],arr[j+1]);
    }
    bubble_sort(arr,n,i+1);
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
bubble_sort(arr,n,0);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}               */
                                // Another method of bubble sort using recursion
/*
#include<bits/stdc++.h>
using namespace std;

void bubble_sort2(int arr[],int n,int j){
    if(j==n)
    return ;
    if(arr[j]>arr[j+1])
    swap(arr[j],arr[j+1]);
    bubble_sort2(arr,n,j+1);
}
void bubble_sort(int arr[],int n,int i){
    if(i==n)
    return ;
    bubble_sort2(arr,n-1,0);
    bubble_sort(arr,n,i+1);
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
bubble_sort(arr,n,0);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}                   */
                                // binary search using recursion
/*
#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[],int x,int left,int right){
    if(left>right)
    return -1;
    int mid = (left+right)/2;
    if(arr[mid]==x)
    return mid;
    else if(arr[mid]>x)
    binary_search(arr,x,left,mid-1);
    else
    binary_search(arr,x,mid+1,right);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int result = binary_search(arr,x,0,n-1);
    cout<<"[";
    for(int i=0;i<n;i++){
        cout<<arr[i];
        if(i<n-1)
        cout<<", ";
    }
    cout<<"]"<<endl;
    if(result == -1)
    cout<<x<<" is not found in the array."<<endl;
    else
    cout<<x<<" is at "<<result<<" index in the array ."<<endl;
    return 0;
}                       */                  
                                // convert string into integer using recursion
/*
#include<bits/stdc++.h>
using namespace std;

int convert_string(string s , int size){
    if(size == 0)
    return 0;
    int ld = s[size-1]-'0';
    return  convert_string(s,size-1)*10 + ld;
}
int main(){
    string s;
    cin>>s;
    int size = s.size();
    int result = convert_string(s,size);
    cout<<s<< " string to integer is : "<<result<<endl;
    return 0;
}                                   */
/*
#include<bits/stdc++.h>
using namespace std;

int convert_string(string s , int size ,int i){
    if(i==-1)
    return 0;
    int ld = s[i]-'0';
    return  convert_string(s,size,i-1)*10 + ld;
}
int main(){
    string s;
    cin>>s;
    int size = s.size();
    int result = convert_string(s,size,size-1);
    cout<<s<< " string to integer is : "<<result<<endl;
    return 0;
}       */
                                // Print all subsequences of a string by(include/exclude) method
/*
#include<bits/stdc++.h>
using namespace std;

void solve(string& s, int i,string output){
    int n = s.size();
    // base case
    if(i==n){
        cout<<output<<endl;
        return ;
    }
    // exclude karke ith char ko
    solve(s,i+1,output);
    // include karke ith char ko
    solve(s,i+1,output+s[i]);
}
int main(){
    string s,output;
    cin>>s;
    cout<<"Subsequences of "<<s<<" string is : "<<endl;
    solve(s,0,"");
    return 0;
}               */
                                // Print all permutations of a string using include/exclude technique
/*
#include<bits/stdc++.h>
using namespace std;

void permutation(string& s,int i,int n){
    // base case
    if(i==n){
        cout<<s<<endl;
    }
    // to generate all permutation
    for(int j=i;j<n;j++){
        swap(s[i],s[j]);
        permutation(s,i+1,n);
        // backtrack using of & 
        swap(s[j],s[i]);
    }
}
int main(){
    string s;
    cin>>s;
    int n = s.size();
    cout<<"Permutation of "<<s<<" string is : "<<endl;
    permutation(s,0,n);
    return 0;
}                   */
/*
#include<bits/stdc++.h>
using namespace std;

void permutation(string s,int i,int n){
    // base case
    if(i==n){
        cout<<s<<endl;
    }
    // to generate all permutation
    for(int j=i;j<n;j++){
        swap(s[i],s[j]);
        permutation(s,i+1,n);
    }
}
int main(){
    string s;
    cin>>s;
    int n = s.size();
    cout<<"Permutation of "<<s<<" string is : "<<endl;
    permutation(s,0,n);
    return 0;
}               */
                                // Rat_in_a_maze
/*
#include<bits/stdc++.h>
using namespace std;
int n,m;
void solve(vector<string>& grid,int i,int j,vector<vector<int>> path){
    // base case
    // last cell pe pahuch gaya
    if(i== n-1 && j== m-1){
        path[i][j]=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<path[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return;
    }
    //recursion
    if(i<n && j<m && grid[i][j]=='.'){
        // current cell mere path ka part h
        path[i][j]=1;
        // right me check kar
        solve(grid,i,j+1,path);
        // down check kr
        solve(grid,i+1,j,path);
    }
}
int main(){
    vector<string> grid = {"....","..xx","....",".x.."};
    n = grid.size();
    m = grid[0].size();
    vector<vector<int>>path(n,vector<int>(m,0));
    solve(grid,0,0,path);
    return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int n,m;
void solve(vector<string>& grid,int i,int j, vector<vector<int>>& path){
    // base case
    // last cell pe pahuch gaya
    if(i==n-1 && j==m-1){
        path[i][j]=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<path[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        // back track
        path[i][j]=0;
        return ;
    }
    // recursion
    if(i<n && j<m &&  grid[i][j]=='.'){
        // current cell mere path ka part hai
        path[i][j]=1;
        // right me check kr
        solve(grid,i,j+1,path);
        // down check kr
        solve(grid,i+1,j,path);

        // backtrack
        path[i][j]=0;
    }
    
}


int main(){
    vector<string> grid={"....","..XX","....",".X.."};
    n=grid.size();
    m=grid[0].size();
    vector<vector<int>> path(n,vector<int>(m,0));
    solve(grid,0,0,path);
    // after recursion call
    cout<<"after recursion call:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<path[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}               */

                                // n-queen(Chess)
/*
#include<bits/stdc++.h>
using namespace std;
bool safeHai(vector<vector<char>>& grid,int row,int col,int n){
    for(int j=col;j>=0;j--){
        if(grid[row][j]=='Q')  return false;
    }
    for(int i=row,j=col; i>=0 ,j>=0;i--,j--){
        if(grid[i][j]=='Q')  return false;
    }
    for(int i=row,j=col;i<n && j>=0;i++,j--){
        if(grid[i][j]=='Q')  return false;
    }
    return true;
}
void solve(vector<vector<char>>& grid,int col,int n){
    // base case
    if(col==n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<grid[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return ;
    }
    // recursion-> ek valid position pe place kr de baki recursion dekh lega
    for(int row=0;row<n;row++){
        if(grid[row][col]=='.'){
            if(safeHai(grid,row,col,n)){
                grid[row][col]='Q';
                // go and try for next cols
                solve(grid,col+1,n);
                // backtrack
                grid[row][col]='.';
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<vector<char>> grid(n,vector<char>(n,'.'));
    solve(grid,0,n);
    return 0;
}               */

                                // letter combination of a phone number
/*
#include<bits/stdc++.h>
using namespace std;

string arr[10]={".",".","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
int n;
void solve(string& s,string& output,int i){
    // base
    if(i==n){
        // print 
        cout<<output<<endl;
        return ;
    }
    // recursion
    int d = s[i]-'0'; //2
    string temp = arr[d];
    for(int j=0;j<temp.size();j++){
        output.push_back(temp[j]);
        solve(s,output,i+1);
        // backtrack
        output.pop_back();
    }
}
int main(){
    string digit;
    cin>>digit;
    n=digit.size();
    string output = "";
    solve(digit,output,0);
    return 0;
}           */

                                // StairCase
/*
#include<bits/stdc++.h>
using namespace std;
int climbStairs(int n){
    if(n<0)
    return 0;
    if(n==0)
    return 1;
    return climbStairs(n-1)+climbStairs(n-2)+climbStairs(n-3);
}
int main(){
    int n;
    cin>>n;
    int result = climbStairs(n);
    cout<<"No of ways to climb stairs(When 1,2,3 jumps are possible) : "<<result<<endl;
    return 0;
}           */

                                // Sudoku
/*
#include <bits/stdc++.h>
using namespace std;
bool isSafe(vector<vector<char>>& board, int row, int col, char num) {
    for (int x = 0; x < 9; x++) {
        if (board[row][x] == num || board[x][col] == num || 
            board[row - row % 3 + x / 3][col - col % 3 + x % 3] == num) {
            return false;
        }
    }
    return true;
}

bool solveSudoku(vector<vector<char>>& board) {
    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {
            if (board[row][col] == '.') {
                for (char num = '1'; num <= '9'; num++) {
                    if (isSafe(board, row, col, num)) {
                        board[row][col] = num;
                        if (solveSudoku(board)) {
                            return true;
                        }
                        board[row][col] = '.';
                    }
                }
                return false;
            }
        }
    }
    return true;
}

void printBoard(vector<vector<char>>& board) {
    for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }
}

int main() {
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };

    if (solveSudoku(board)) {
        printBoard(board);
    } else {
        cout << "No solution exists" << endl;
    }

    return 0;
}               */

