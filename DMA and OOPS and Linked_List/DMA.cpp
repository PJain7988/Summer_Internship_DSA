                // Basic
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    // how to create variable dynamically
    int *a = new int;
    *a = 10;
    cout<<*a<<endl;

    float *b = new float;
    *b = 20;
    cout<<*b<<endl;

    int *arr = new int[10];
    for(int i=0;i<10;i++){
        arr[i]=i+1;
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // to deallocate dynamically occupied memory

    delete a;
    delete b;
    delete[] arr;

    return 0;
}               */

            // Creating a 2-D array dynamically

#include<bits/stdc++.h>
using namespace std;

void print(int ** matrix,int n,int m){
    // to 2-D array in function
}
int main(){
    int **matrix = new int*[4];
    for(int i=0;i<4;i++){
        matrix[i]= new int[5];
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            cout<<"{"<<i<<" "<<j<<"},";
        }
        cout<<endl;
    }

    // deallocate
    for(int i=0;i<4;i++){
        delete[] matrix[i];
    }

    delete[] matrix;

    return 0;
}           

