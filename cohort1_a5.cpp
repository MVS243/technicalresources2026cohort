#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int n, d=0;
    cout<<"Enter a number: "<<endl;
    cin >> n;
    while (n!=0 || n%10>0){
        d++;
        n/=10;
    }
    cout<<"Number of digits is ";
    cout<<d;
}
