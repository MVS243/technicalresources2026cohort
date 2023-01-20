#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int num1, num2, gcd, lcm,i,j;
    cout<<"Enter numbers whose gcd and lcm are to be found: ";
    cin >> num1 >> num2;
    if (num1>num2){
        lcm=num1;
        gcd=num2;
    }
    else if (num2>num1){
        lcm=num2;
        gcd=num1;
    }
    for (i=1; i<=lcm;i++){
        if (num1%i==0 && num2%i==0){
            gcd=i;
        }}
    for (j<=num1*num2; j>=1; j--){
        if (j%num1==0 && j%num2==0){
            lcm=j;
        }
    }
    cout<<"gcd is "<<gcd<<endl;
    cout<<"lcm is "<<lcm<<endl;
    }
