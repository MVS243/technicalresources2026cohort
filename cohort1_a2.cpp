#include<iostream>
using namespace std;
int main(int argc, char**argv){
    int marks;
    cout<<"Enter marks: ";
    cin>>marks;
    if (marks>90){
        cout<<"Excellent"<<endl;
    }
    else if (marks>80 && marks<=90){
        cout<<"Good"<<endl;
    }
    else if (marks>70 && marks<=80){
        cout<<"Fair"<<endl;
    }
    else if (marks>60 && marks<=70){
        cout<<"Meets expectation"<<endl;
    }
    else if (marks<=60){
        cout<<"Below par"<<endl;
    }
    return 0;
}
