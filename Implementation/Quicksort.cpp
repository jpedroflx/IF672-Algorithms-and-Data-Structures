#include <iostream>
#include <vector>

using namespace std;

// função para fazer a partição do vetor
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];  // escolhe o último elemento como pivô
    int i = low - 1;  // inicializa o índice do menor elemento

    for (int j = low; j < high; j++) {
        // se o elemento atual é menor ou igual ao pivô
        if (arr[j] <= pivot) {
            i++;  // incrementa o índice do menor elemento
            swap(arr[i], arr[j]);  // troca os elementos
        }
    }
    swap(arr[i + 1], arr[high]);  // coloca o pivô na posição correta
    return i + 1;
}

// função principal do algoritmo quicksort
void quicksort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);  // faz a partição do vetor

        // ordena os elementos à esquerda e à direita do pivô
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

int main() {
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    int n = arr.size();

    quicksort(arr, 0, n - 1);

    cout << "Vetor ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
