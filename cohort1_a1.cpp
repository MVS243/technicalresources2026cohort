#include<iostream>
using namespace std;
int main(int argc, char** agrc) {
    int i,j;
    for (i=1;i<=5;i++){
        for (j=1;j<=5;j++){
            if(i==1||i==5||i+j==6){
                cout<<"*";
            }
            else if(i+j!=6){
                cout<<" ";
            }
        }
    cout<<endl;
    }
}
