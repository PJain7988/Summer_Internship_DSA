/*Stone Game II*/
#include<bits/stdc++.h>
using namespace std;
int stoneGameII(vector<int>& piles) {
    int n = piles.size();
    sort(piles.begin(),piles.end());
    vector<vector<int>> dp(n, vector<int>(n + 1, 0));
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<n;j++){
            if(i+j>=n) dp[i][j] = 0;
            else dp[i][j] = max(dp[i+j+1][j], dp[i][
                j*2]) + piles[i];
        }
    }
    return dp[0][1];
}
int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << stoneGameII(arr) << endl;
    return 0;
}