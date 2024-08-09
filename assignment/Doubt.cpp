            // Maximum sum of array in two paths
/*
#include<bits/stdc++.h>
using namespace std;

int maxPath(int a[],int b[],int n,int m){
        int ans =0,sumA=0,sumB=0;
    int i=0,j=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            sumA+=a[i];
            i++;
        }
        else if(a[i]>b[j]){
            sumB+=b[j];
            j++;
        }else if(a[i]==b[j]){
            if(sumA>sumB){
            ans+=sumA;
            }else{
            ans+=sumB;
        }
            ans+=a[i];
            i++;
            j++;
            sumA=0;
            sumB=0;
        }
    }
    while(i<n){
        sumA+=a[i];
        i++;
    }
    while(j<m){
        sumB+=b[j];
        j++;
    }
    ans+=max(sumA,sumB);
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int result = maxPath(a,b,n,m);
    cout<<result<<endl;
    }
    return 0;
}               */

                            // Longest Valid Parentheses
/*
#include<bits/stdc++.h>
using namespace std;
int left_to_right(string s){
    int o=0,c=0,ans=0;
    for(int i=0;i<s.size();i++){
        if(s[i] == '(')     o++;
        else if(s[i]==')')       c++;
        if(c>o){
            o=0;c=0;
        }
        if(o==c)
            ans = max(ans,o+c);
        }
    return ans;
}
int right_to_left(string s){
    int o=0,c=0,ans=0;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i] == ')')     o++;
        else if(s[i]=='(')       c++;
        if(c>o){
            o=0;c=0;
        }
        if(o==c)
            ans = max(ans,o+c);
        }
    return ans;
}
int main(){
    string s;
    cin>>s;
    int ans = max(left_to_right(s),right_to_left(s));
    cout<<ans<<endl;
    return 0;
}               */

