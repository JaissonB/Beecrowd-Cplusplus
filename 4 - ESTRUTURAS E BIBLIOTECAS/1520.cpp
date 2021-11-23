#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int N,x,y,p,last;

    while(cin>>N) {
        int vetor[10000], init=0, first=0, dif=0;
        while(N--) {
            cin >> x >> y;
            dif=dif+(y-x)+1;

            for(int i=init; i<dif; i++) {
                vetor[i]=x;
                x+=1;
            }
            init= dif;
        }
        int vet[dif-1], aux[dif-1], p=-1;
        for(int i=0; i<dif; i++) {
            vet[i]=vetor[i];
        }
        int cont=0;
        sort(vet, vet + dif);
        cin >> p;

        for(int i=0; i<dif; i++) {
            if(vet[i]==p) {
                last=i;
                first++;
            }
        }

        if(first==0) {
            cout << p << " not found" << endl;
        } else {
            cout << p << " found from " << last-(first-1) << " to " << last << endl;
        }
    }

    return 0;
}
