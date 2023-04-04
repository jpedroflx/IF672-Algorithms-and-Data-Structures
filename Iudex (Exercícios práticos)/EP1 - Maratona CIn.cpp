#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

struct Participante {
    char nome[31];
    int tempo;
};

bool compareParticipantes(const Participante& p1, const Participante& p2) {
    if (p1.tempo == p2.tempo) {
        return strcmp(p1.nome, p2.nome) < 0;
    }
    return p1.tempo < p2.tempo;
}

int main() {
    int c;
    cin >> c;
    Participante participantes[c];

    for (int i = 0; i < c; i++) {
        cin >> participantes[i].nome >> participantes[i].tempo;
    }

    sort(participantes, participantes + c, compareParticipantes);

    for (int i = 0; i < c; i++) {
        cout << participantes[i].nome << " " << participantes[i].tempo << endl;
    }

    return 0;
}
