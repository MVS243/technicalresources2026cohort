#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter number of lines in pattern: ";
    cin >> n;
    for (i=1;i<=n;i++){
        for (j=1;j<=n;j++){
            if (i==n||j==n||i+j>=n+1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}
