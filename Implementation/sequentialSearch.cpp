#include <iostream>
#include <vector>

using namespace std;

int sequentialSearch(vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = { 9, 2, 7, 5, 1, 8, 3, 6, 4 };
    int target = 8;
    int index = sequentialSearch(arr, target);
    if (index != -1) {
        cout << "O elemento " << target << " foi encontrado na posição " << index << endl;
    }
    else {
        cout << "O elemento " << target << " não foi encontrado no vetor" << endl;
    }
    return 0;
}
