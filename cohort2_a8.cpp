#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter no. of lines in patten: ";
    cin>>n;
    for (i=1;i<=n;i++){
        for (j=n;j>0;j--){
            if (i==j){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
}
