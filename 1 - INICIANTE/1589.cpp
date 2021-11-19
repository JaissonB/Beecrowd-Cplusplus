#include <iostream>

using namespace std;

int main(){
    int n, r1, r2, conduite;
    cin >> n;
    while(n--) {
        cin >> r1 >> r2;
        conduite = ((r1*2)+(r2*2))/2;
        cout << conduite << endl;
    }

    return 0;
}
