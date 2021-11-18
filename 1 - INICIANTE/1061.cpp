#include <iostream>

using namespace std;

int main() {
    int d1, h1, m1, s1;
    int d2, h2, m2, s2;
    int d3, h3, m3, s3;
    char x = ':';
    string Dia;
    int t1s, t2s;
    cin >> Dia;
    cin >> d1;
    cin >> h1;
    cin >> x;
    cin >> m1;
    cin >> x;
    cin >> s1;
    cin >> Dia;
    cin >> d2;
    cin >> h2;
    cin >> x;
    cin >> m2;
    cin >> x;
    cin >> s2;
    t1s = (d1 * 86400) + (h1 * 3600) + (m1 * 60) + s1 ;
    t2s = (d2 * 86400) + (h2 * 3600) + (m2 * 60) + s2 ;
    d3 = (t2s - t1s) / 86400;
    h3 = ((t2s - t1s) %86400) / 3600 ;
    m3 = (((t2s - t1s) %86400) %3600 ) / 60  ;
    s3 = ((((t2s - t1s) %86400 ) %3600) %60)  ;
    cout << d3 << " dia(s)" << endl;
    cout << h3 << " hora(s)" << endl;
    cout << m3 << " minuto(s)" << endl;
    cout << s3 << " segundo(s)" << endl;

    return 0;
}
