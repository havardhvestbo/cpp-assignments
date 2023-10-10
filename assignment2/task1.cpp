#include <iostream>
using namespace std;

int main() {
    int i = 3;
    int j = 5;
    int *p = &i;
    int *q = &j;

    cout << "Adresse til i: " << &i << " Innhold: " << i << endl;
    cout << "Adresse til j: " << &j << " Innhold: " << j << endl;
    cout << "Adresse til p: " << &p << " Innhold (peker til i): " << p << " Dereferenced: " << *p << endl;
    cout << "Adresse til q: " << &q << " Innhold (peker til j): " << q << " Dereferenced: " << *q << endl;

    *p = 7;
    *q += 4;
    *q = *p + 1;
    p = q;
    cout << *p << " " << *q << endl;

    return 0;
}
