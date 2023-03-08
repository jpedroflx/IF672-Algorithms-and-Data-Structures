#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int>& arr, int target) {
    int left = 0;                   // índice do primeiro elemento da sublista
    int right = arr.size() - 1;     // índice do último elemento da sublista

    while (left <= right) {         // enquanto a sublista não for vazia
        int mid = (left + right) / 2;   // índice do elemento do meio da sublista
        if (arr[mid] == target) {       // se encontrou o elemento
            return mid;
        } else if (arr[mid] < target) { // se o elemento do meio é menor que o alvo
            left = mid + 1;             // descarta a metade esquerda da sublista
        } else {                        // se o elemento do meio é maior que o alvo
            right = mid - 1;            // descarta a metade direita da sublista
        }
    }

    return -1;  // caso não encontre o elemento, retorna -1
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13};
    int target = 7;

    int index = binarySearch(arr, target);
    if (index == -1) {
        cout << "Elemento nao encontrado." << endl;
    } else {
        cout << "Elemento encontrado na posicao " << index << "." << endl;
    }

    return 0;
}
