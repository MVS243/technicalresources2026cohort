#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter no. of lines in pattern: ";
    cin >> n;
    for (i=1;i<=n;i++){
        for (j=1;j<=n;j++){
            if (j==1||j==n){
                cout<<"* ";
            }
            else if (i>n/2 && (i==j || j==n+1-i)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<"\n";
    }

}
