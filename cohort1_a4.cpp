#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int low, high, i, j, count;
    cout<<"Enter lower limit: ";
    cin >> low;
    cout<<"Enter higher limit: ";
    cin >> high;
    for (i=low; i<=high; i++){
        for (j=2; j<=(i/2); j++){
            if (i!=2 && i!=3 && i%j==0){
                break;
            }
            else{
                cout<<i<<endl;
                break;
            }
        }
    }
}
