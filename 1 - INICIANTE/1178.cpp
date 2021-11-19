#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << fixed << setprecision(4);
    double N[100];

    cin >> N[0];
    cout << "N[" << 0 << "] = " << N[0] << endl;

    for(int i=0; i<99; i++){
        N[i+1]=N[i]/2;
        cout << "N[" << i+1 << "] = " << N[i+1] << endl;
    }

    return 0;
}
