#include <iostream>
#include <vector>

using namespace std;

// função auxiliar que combina dois subarrays ordenados
void merge(vector<int>& arr, int left, int middle, int right) {
    int n1 = middle - left + 1;     // tamanho do primeiro subarray
    int n2 = right - middle;        // tamanho do segundo subarray

    // cria subarrays temporários
    vector<int> leftArr(n1);
    vector<int> rightArr(n2);

    // copia os elementos para os subarrays temporários
    for (int i = 0; i < n1; i++) {
        leftArr[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++) {
        rightArr[j] = arr[middle + 1 + j];
    }

    // combina os subarrays temporários de volta no array original
    int i = 0;      // índice do primeiro subarray
    int j = 0;      // índice do segundo subarray
    int k = left;   // índice do array combinado
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    // copia os elementos restantes do subarray esquerdo, se houver
    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    // copia os elementos restantes do subarray direito, se houver
    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

// função principal do Merge Sort
void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;  // encontra o meio do array
        mergeSort(arr, left, middle);            // chama recursivamente para o subarray esquerdo
        mergeSort(arr, middle + 1, right);       // chama recursivamente para o subarray direito
        merge(arr, left, middle, right);         // combina os subarrays ordenados
    }
}

int main() {
    vector<int> arr = {5, 2, 4, 6, 1, 3};
    int n = arr.size();

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
