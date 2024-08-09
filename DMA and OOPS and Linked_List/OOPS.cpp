                    // Basic (object creation statically)
/*
#include<bits/stdc++.h>
using namespace std;
// ************ // template / Blue Print// *********** //
class Student{
    public:
        char name[100];
        int RollNumber;
        int age;
};
// class are also called as user defined data type
// . used to access properties of an object
int main(){
    int a=10; // integer data ko store kare gya

    Student s1; // s1 ek Student data type ka variable h
                // yaha pe isko variable na bolkar bolte h object
    strcpy(s1.name,"Priya");
    s1.age = 18;
    s1.RollNumber = 1053;

    // to know the value of properties

    cout<<"Name: "<<s1.name<<endl;
    cout<<"Roll No. :"<<s1.RollNumber<<endl;
    cout<<"Age :"<<s1.age<<endl;
    return 0;
}               */                

                // Object creation dynamically
/*
#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        char name[100];
        int RollNumber;
        int age;
};
int main(){
    Student *s = new Student();
    strcpy(s->name,"Priya"); // strcpy(*s.name,"Priya")
    s->RollNumber = 1053;
    s->age = 18;

    cout<<"Name: "<<s->name<<endl;
    cout<<"Roll No. : "<<s->RollNumber<<endl;
    cout<<"Age : "<<s->age<<endl;

    return 0;
}               */

                // Getters and Setters
/*
#include<bits/stdc++.h>
using namespace std;
class student{
    public:
        char name[100];
        int RN;
        int age;
    private:
        int bankBalance;
    public:
        void Setters(int data,string pwd){
            if(pwd=="abc"){
                bankBalance = data;
                cout<<"Bank Balance updated"<<endl;
            }
            else{
                cout<<"It is not accessible to you !! Give Correct password "<<endl;
            }
            return ;
        }
        int Getters(string pwd){
            if(pwd == "abc")
            return bankBalance;

            return -1;
        }
};
int main(){
    student s1;
    strcpy(s1.name,"Priya");
    s1.RN = 1053;
    s1.age = 18;
    s1.Setters (10,"abc");

    cout<<"Name: "<<s1.name<<endl;
    cout<<"Roll No. :"<<s1.RN<<endl;
    cout<<"Age :"<<s1.age<<endl;
    cout<<"Bank Balance : "<<s1.Getters("abc")<<endl;
    return 0;
}               */

                    // Constructor
/*
#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        char name[100];
        int RollNumber;
        int age;
    // Default Constructor
    // by default garbage se initialize karta h data members ko
    Student(){
        cout<<"Default constructor called"<<endl;
    }
    // Parameterized Constructor / Custom constructor
    // hmne jo value pass kari h usse initialize ki h
    Student(char*n,int r,int a){
        cout<<"Paramaterized constructor called!!"<<endl;
        strcpy(name,n);
        RollNumber = r;
        age = a;
    }
};
int main(){
    Student s1;
    strcpy(s1.name,"Priya");
    s1.RollNumber = 1053;
    s1.age = 18;

    // cout<<"Name: "<<s1.name<<endl;
    // cout<<"Roll No. :"<<s1.RollNumber<<endl;
    // cout<<"Age :"<<s1.age<<endl;
    Student s2("Mohit",102,19);
    // cout<<"Name: "<<s2.name<<endl;
    // cout<<"Roll No. :"<<s2.RollNumber<<endl;
    // cout<<"Age :"<<s2.age<<endl;

    Student *s = new Student("Dinesh",104,21);
    return 0;
}               */

                    // Member Function
/*
#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        char name[100];
        int RollNumber;
        int age;
    // member function
    void print(){
        cout<<name<<endl;
        cout<<RollNumber<<endl;
        cout<<age<<endl;
    }
};
int main(){
    Student s1;
    Student s2;
    strcpy(s1.name,"Priya");
    s1.RollNumber = 1053;
    s1.age = 18;
    strcpy(s2.name,"Mohit");
    s2.RollNumber = 101;
    s2.age = 12;
    s1.print();
    s2.print();
    return 0;
}               */

                    // 

#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        char name[100];
        int RollNumber;
        int age;
    // member function
    Student(char* name,int RollNumber,int age){
        strcpy(this->name,name);
        this->age = age;
        this->RollNumber = RollNumber;
    }
    void print(){
        cout<<this->name<<endl;
        cout<<this->RollNumber<<endl;
        cout<<this->age<<endl;
    }
};
int main(){
    Student("Priya",1053,18);
    return 0;
}