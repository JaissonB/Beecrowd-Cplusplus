#include <iostream>

using namespace std;

int main () {
    int x,y,n,i,temp,sum=0;
    cin >> x >> y;
    if (x>y) {
        temp=y;
        y=x;
        x=temp;
    }
    if (x%2==0) {
        x++;
        n=x;
    } else
        n = x+2;
    for (i = n; i < y; i +=2)
        sum += i;
    cout << sum << endl;

    return 0;
}
