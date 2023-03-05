#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    unordered_set<int> nums; // conjunto para armazenar os números
    int num, count = 0;

    for (int i = 0; i < n; i++) {
        cin >> num;
        nums.insert(num); // adiciona o número ao conjunto
    }

    // percorre o conjunto procurando pares com diferença k
    for (auto num : nums) {
        if (nums.count(num + k)) {
            count++;
        }
    }

    cout << count << endl; // imprime o número de pares encontrados

    return 0;
}
