#include <iostream>
using namespace std;

// Fonction qui teste si un nombre est pair (multiple de 2)
int estPair(int n) {
    if (n % 2 == 0)
        return 1;   // vrai
    else
        return 0;   // faux
}

// Fonction qui teste si un nombre est multiple de 3
int estMultipleDe3(int n) {
    if (n % 3 == 0)
        return 1;   // vrai
    else
        return 0;   // faux
}

int main() {
    int nbr;

    cout << "Donnez un entier : ";
    cin >> nbr;

    // Vérification avec les fonctions
    if (estPair(nbr))
        cout << "Il est pair" << endl;

    if (estMultipleDe3(nbr))
        cout << "Il est multiple de 3" << endl;

    // Multiple de 6 = à la fois multiple de 2 et de 3
    if (estPair(nbr) && estMultipleDe3(nbr))
        cout << "Il est divisible par 6" << endl;

    return 0;
}
