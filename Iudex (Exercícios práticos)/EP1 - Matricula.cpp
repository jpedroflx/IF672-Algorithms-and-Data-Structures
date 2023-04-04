#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// Função para comparar strings lexicograficamente
bool compareStrings(const std::string& a, const std::string& b) {
    return a < b;
}

int main() {
    int e, q;
    std::cin >> e; // Ler o número de estudantes
    std::vector<std::string> estudantes(e);
    for (int i = 0; i < e; i++) {
        std::cin >> estudantes[i]; // Ler os nomes dos estudantes
    }
    std::sort(estudantes.begin(), estudantes.end(), compareStrings); // Ordenar os estudantes lexicograficamente

    std::cin >> q; // Ler o número de consultas
    std::string consulta;
    for (int i = 0; i < q; i++) {
        std::cin >> consulta; // Ler o nome da consulta
        // Realizar busca binária para verificar se o nome está na lista de estudantes
        if (std::binary_search(estudantes.begin(), estudantes.end(), consulta)) {
            std::cout << "+" << std::endl; // Se estiver, imprimir "+"
        } else {
            std::cout << "-" << std::endl; // Caso contrário, imprimir "-"
        }
    }

    return 0;
}
