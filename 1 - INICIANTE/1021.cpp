#include <iostream>
#include <iomanip>

using namespace std;

int main() {

     int b,c,d,e,f,g,h,i,j,k,l,m;
     double n;
     cin >> n;
     cout << fixed << setprecision(2);
     b=(n/100.00);
     c=(n-b*100)/50.00;
     d=(n-b*100-c*50)/20.00;
     e=(n-b*100-c*50-d*20)/10.00;
     f=(n-b*100-c*50-d*20-e*10)/5.00;
     g=(n-b*100-c*50-d*20-e*10-f*5)/2.00;
     h=(n-b*100-c*50-d*20-e*10-f*5-g*2)/1.00;
     i=(n-b*100-c*50-d*20-e*10-f*5-g*2-h*1)*2;
     j=(n-b*100-c*50-d*20-e*10-f*5-g*2-h*1-i*0.5)*4;
     k=(n-b*100-c*50-d*20-e*10-f*5-g*2-h*1-i*0.5-j*0.25)*10;
     l=(n-b*100-c*50-d*20-e*10-f*5-g*2-h*1-i*0.5-j*0.25-k*0.10)*20;
     m=(n-b*100-c*50-d*20-e*10-f*5-g*2-h*1-i*0.5-j*0.25-k*0.10-l*0.05)*100+0.001;

     cout << "NOTAS:" << endl;
     cout << b << " nota(s) de R$ 100.00" << endl;
     cout << c << " nota(s) de R$ 50.00" << endl;
     cout << d << " nota(s) de R$ 20.00" << endl;
     cout << e << " nota(s) de R$ 10.00" << endl;
     cout << f << " nota(s) de R$ 5.00" << endl;
     cout << g << " nota(s) de R$ 2.00" << endl;
     cout << "MOEDAS:" << endl;
     cout << h << " moeda(s) de R$ 1.00" << endl;
     cout << i << " moeda(s) de R$ 0.50" << endl;
     cout << j << " moeda(s) de R$ 0.25" << endl;
     cout << k << " moeda(s) de R$ 0.10" << endl;
     cout << l << " moeda(s) de R$ 0.05" << endl;
     cout << m << " moeda(s) de R$ 0.01" << endl;

    return 0;
}
