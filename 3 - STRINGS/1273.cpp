#include <iostream>

using namespace std;

int main() {

    int N;
    int maxLetras = 0, dif;
    string maiorPalavra;
    string espaco = " ";
    cin >> N;

    string palavra[100];
    while (true) {

        for(int i=1; i<=N; i++) {
            cin >> palavra[i];

            if(palavra[i].size() > maxLetras) {
                maiorPalavra = palavra[i];
                maxLetras = maiorPalavra.size();
            }
            if(i==N) {
                for(int j=1; j<=N; j++) {
                    dif = maiorPalavra.size() - palavra[j].size();
                    for (int k=0; k<dif; k++) {
                        cout << espaco;
                    }
                    cout << palavra[j] << endl;
                }
                maxLetras = 0;
            }
        }
        cin >> N;
        if(N!=0)
            cout<<endl;
        else break;
    }

    return 0;
}
