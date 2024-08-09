#include<iostream>
#include<vector>
using namespace std;
void print(vector<vector<char>>& vec){ 
    int n = vec.size();
    int m= vec[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
} // pass by reference
//void print(vector<vector<char>> vec){ } // pass by value
int main(){
    // declare
    vector<vector<int>> nums;
    // declare + initialize
    vector<vector<int>> nums2 = {{1,2,3},{4,3,5},{9,10,11}};
    int row = nums2.size(); // find no of rows
    int col = nums2[0].size();  // find no of columns for this use any index of row
    
    vector<vector<int>> nums3 ={{1,2,3,4},{3,4}}; // another method for declare + initialize
    // 2-D vector does not occupy extra space this is dynamically 2-D array.
    
    // transversing for print element
    int rows = nums3.size();
    for(int i=0;i<rows;i++){
        int cols = nums3[i].size();
        for(int j=0;j<cols;j++){
            cout<<nums3[i][j]<<" ";
        }
        cout<<endl;
    }

    // input rows-n and cols-m
    // 2-D vector of n*m;
    int n,m;
    cin>>n>>m;
    vector<vector<char>> arr(n,vector<char>(m,10));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    print(arr);
    return 0;
}