#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t,n,num,m;
    cout<<"How many times do you want to test for prime number?  ";
    cin>>t;
    for (n=1;n<=t;n++){
        cout<<"Enter number: ";
        cin>>num;
        for (m=2;m<=(num/2);m++){
            if (num%m==0){
                cout<<"Not Prime"<<endl;
                break;
            }
            if (num%m!=0){
                cout<<"Prime"<<endl;
                break;
            }
        }
    }    
}
