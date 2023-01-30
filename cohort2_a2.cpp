#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter number of lines in pattern: ";
    cin >> n;
    for (i=1;i<=n;i++){
        for (j=n;j>=i;j--){
            cout<<"* ";
        }
        cout<<"\n";
    }
}
