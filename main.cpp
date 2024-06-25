#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, P, M;
    int pequenas = 0, medias = 0;

    // Leitura do número de candidatos
    cin >> N;

    // Vector para armazenar os tamanhos solicitados
    vector<int> T(N);

    // Leitura dos tamanhos escolhidos
    for (int i = 0; i < N; i++) {
        cin >> T[i];
        if (T[i] == 1) {
            pequenas++;
        } else if (T[i] == 2) {
            medias++;
        }
    }

    // Leitura do número de camisetas pequenas produzidas
    cin >> P;
    // Leitura do número de camisetas médias produzidas
    cin >> M;

    // Verificação se todos os premiados podem ser atendidos
    if (P >= pequenas && M >= medias) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}
