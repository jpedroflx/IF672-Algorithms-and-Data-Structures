#include <iostream>
#include <vector>

using namespace std;

int linearSearch(vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {   // percorre a lista linearmente
        if (arr[i] == target) {             // se encontrar o elemento desejado
            return i;                       // retorna sua posição na lista
        }
    }

    return -1;  // caso não encontre o elemento, retorna -1
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13};
    int target = 7;

    int index = linearSearch(arr, target);
    if (index == -1) {
        cout << "Elemento nao encontrado." << endl;
    } else {
        cout << "Elemento encontrado na posicao " << index << "." << endl;
    }

    return 0;
}
