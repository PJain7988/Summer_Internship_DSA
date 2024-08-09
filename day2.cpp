/***********************************************Question-1 ***************************/
/* #include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"----------Print Square Pattern--------------"<<endl;
    cout<<"Enter term:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<"*\t";
        }
        cout<<"\n";
    }
    return 0;
}       */
/***********************************************Question-2 ***************************/
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"----------Print triangle Pattern--------------"<<endl;
    cout<<"Enter term:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            cout<<"*\t";
        }
        cout<<endl;
    }
    return 0;
}                       */
/***********************************************Question-3 ***************************/
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"----------Print triangle Pattern for row numbers printing--------------"<<endl;
    cout<<"Enter term:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<i<<"\t";
        }
        cout<<endl;
    }
    return 0;
}                   */
/***********************************************Question-4 ***************************/
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"----------Print triangle Pattern for column numbers printing--------------"<<endl;
    cout<<"Enter term:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<j<<"\t";
        }
        cout<<endl;
    }
    return 0;
}               */
/***********************************************Question-5 ***************************/
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"----------Print Pyramid Pattern-----------------"<<endl;
    cout<<"Enter term :"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++)
        cout<<"\t";
        for(int j=0;j<2*i-1;j++){
        cout<<"*\t";
        }
        cout<<endl;
    }
    return 0;
}           */
/************************Question-6 (Printing ASCII value A to Z)*************************/
// Using type casting
/* #include<bits/stdc++.h>
using namespace std;

int main(){
   for(char i = 'A';i<='Z';i++){
       cout<<i<<"="<<int(i)<<"\t";
   }
}
// Without using type casting
#include<bits/stdc++.h>
using namespace std;

int main(){
   for(int i = 'A';i<='Z';i++){
       cout<<i<<"\t";
   }
}                       */
/************************Question-7 (Checking prime numbers 1 to n)*************************/
/* #include<bits/stdc++.h>
using namespace std;

int main(){
    int n,c=0;
    cout<<"Enter Number:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0)
        c++;
    }
    if(c>2)
    cout<<"No";
    else
    cout<<"Yes";
}                   */
/************************Question-8 (Printing prime numbers 1 to n)*************************/
/* #include<bits/stdc++.h>
using namespace std;

bool check_prime(int n){
    int c=0;
    for(int i=1;i<=n;i++){
        if(n%i==0)
        c++;
    }
    if(c>2)
    return false;
    else
    return true;
}
int main(){
    int n;
    cout<<"Enter Number:"<<endl;
    cin>>n;
    for(int i=2;i<=n;i++){
        if(check_prime(i))
        cout<<i<<"\t";
    }

}                           */
