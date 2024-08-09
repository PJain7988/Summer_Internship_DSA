// topic->reference variable
/*
1. Pass by value -> In this both main function and another function are like neighbour and they do their own work.
                    a new copy is created first then value is stored.
                    int a=1;
                    int b=a;
2. pass by reference -> It is also called niet name.
                    int a=1;
                    int &b=a;
3. Const reference -> in this address is same but not change the value.
                    int a=10;
                    const int &b = a;
*/
/* #include<bits/stdc++.h>
using namespace std;
void update1(int n){
    n++;
}
// pass by reference the value is increase
void update2(int& n){
    n++;
}
void update3(const int& n){
    n++;
}

int main(){
    int n1=10;
    update1(n1);
    cout<<n1<<endl;

int n2=20;
    update2(n2);
    cout<<n2<<endl;

    int n3=30;
    update3(n3);
    cout<<n3<<endl;
    return 0;
}       */

// Descending order selection sort by function.
/* #include<bits/stdc++.h>
using namespace std;
void selection_sort(int a[],int n){
    for(int i=0;i<n;i++){
        int min = i;
        for(int j=i;j<n;j++){
            if(a[j]>a[min])
            min = j;
        }
        swap(a[i],a[min]);
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    selection_sort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}       */

// Boston Number
// #include <bits/stdc++.h>
// using namespace std;

// int isprime(int n)
// {
//     int c = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//             c++;
//     }
//     if (c > 2)
//         return 0;
//     else
//         return 1;
// }
// int main()
// {
//     int n, f = 2, p, sum = 0, fa = 0;
//     cin >> n;
//     p = n;
//     while (p > 0)
//     {
//         sum += p % 10;
//         p /= 10;
//     }
//     while (n > 1)
//     {
//         if (n % f == 0 && isprime(f))
//         {
//             fa += f;
//             n /= f;
//         }
//         else
//             f++;
//     }
//     if (sum == fa)
//         cout << true;
//     else
//         cout << false;
//     return 0;
// }