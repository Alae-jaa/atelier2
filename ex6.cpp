#include <iostream>
using namespace std;

//Fonction qui incrémente une variable via son adresse
void incrementer(int* p) {
    (*p)++;  // On incrémente la valeur pointée
}

//Fonction qui échange deux variables via leurs adresses
void permuter(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;

    cout << "Avant incrementer : x = " << x << endl;
    incrementer(&x);   // on passe l’adresse de x
    cout << "Après incrementer : x = " << x << endl;

    cout << "\nAvant permutation : x = " << x << ", y = " << y << endl;
    permuter(&x, &y);  // on passe les adresses
    cout << "Après permutation : x = " << x << ", y = " << y << endl;

    return 0;
}
