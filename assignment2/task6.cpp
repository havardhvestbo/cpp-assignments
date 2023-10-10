#include <iostream>

// Funksjon for å finne summen av elementene i en tabell
int find_sum(const int *table, int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += table[i];
    }
    return sum;
}

int main() {
    // Oppretter en tabell med 20 elementer
    int table[20];

    // Fyller tabellen med tallene 1, 2, 3, osv.
    for (int i = 0; i < 20; i++) {
        table[i] = i + 1;
    }

    // Finner summen av de 10 første tallene
    int sum_first_10 = find_sum(table, 10);
    std::cout << "Summen av de 10 første tallene: " << sum_first_10 << std::endl;

    // Finner summen av de 5 neste tallene
    int sum_next_5 = find_sum(table + 10, 5);
    std::cout << "Summen av de 5 neste tallene: " << sum_next_5 << std::endl;

    // Finner summen av de 5 siste tallene
    int sum_last_5 = find_sum(table + 15, 5);
    std::cout << "Summen av de 5 siste tallene: " << sum_last_5 << std::endl;

    return 0;
}
