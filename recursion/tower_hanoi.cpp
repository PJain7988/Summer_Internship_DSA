        // ye sirf bataye gya ki disk ko move kaise kare
#include<bits/stdc++.h>
using namespace std;
void toh(int n,char src,char help,char des){
    if(n==0){
        return ;
    }
    toh(n-1,src,des,help);
    cout<<n<<": "<<src<<"-->"<<des<<endl;
    toh(n-1,help,src,des);
}
int main(){
    int n;
    cin>>n;
    toh(n,'A','B','C');
    return 0;
}