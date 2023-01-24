#include <iostream>
using namespace std;
#include <cmath>
int main(){
    double i,j,k,n,d=0,num=0,inverse=0;
    cout<<"Enter number of digits in the number: "<<endl;
    cin >> n;
    for (i=0;i<n;i++){
        cout<<"Enter digit (right to left): "<<endl;
        cin>>num;
        if (num>=1 && num<=n){
            d+=num*(pow(10,i));
        }
        else{
            cout<<"INVALID ENTRY FOR INVERSE DISPLAYING GARBAGE VALUE"<<endl;
            break;
        }        
    }
    cout<<"The number is: "<<d<<endl;
    for (j=1;j<=n;j++){
        k=int(d)%10;
        inverse+=j*(pow(10,k-1));
        d/=10;
    }
    cout<<"Inverse is "<<inverse;
   
}
