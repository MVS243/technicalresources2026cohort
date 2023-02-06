#include <iostream>
using namespace std;
int main(){
    int i,j,n,d=1;
    cout<<"Enter no. of lines in pattern: ";
    cin >> n;
    for (i=1;i<=n;i++){
        for (j=1;j<=i;j++){
            cout<<d<<" ";
            d++;
        }
        cout<<"\n";
    }
}
