#include <iostream>
using namespace std;

int main() {
    int a = 10;         // 1-Déclaration d’un entier
    int& ref_a = a;     // 2- Référence vers a
    int* p_a = &a;      // 3️- Pointeur vers a

    // 4️-Affichage des valeurs et adresses
    cout << "Valeur de a : " << a << endl;
    cout << "Adresse de a : " << &a << endl << endl;

    cout << "Valeur de ref_a (référence) : " << ref_a << endl;
    cout << "Adresse de ref_a (même que a) : " << &ref_a << endl << endl;

    cout << "Valeur du pointeur p_a (adresse de a) : " << p_a << endl;
    cout << "Valeur pointée par p_a (*p_a) : " << *p_a << endl;
    cout << "Adresse du pointeur p_a : " << &p_a << endl;

    return 0;
}
