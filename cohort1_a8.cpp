#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int i,n,k;
    cout<<"Enter number and times it has to be rotated: "<<endl;
    cin>>n>>k;
    i=pow(10,k);
    cout<<n%i;
    n/=i;
    cout<<n;
}
