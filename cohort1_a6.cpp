#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int n;
    cout<<"Enter a number: "<<endl;
    cin >> n;
    while (n!=0 || n%10>0){
        cout<<n%10<<endl;
        n/=10;
    } 
}
