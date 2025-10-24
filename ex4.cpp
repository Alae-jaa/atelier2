#include <iostream>
using namespace std;

int main() {
    int n;

    //Lire la taille du tableau
    cout << "Entrez la taille du tableau : ";
    cin >> n;

    //Allouer dynamiquement le premier tableau
    int* tab = new int[n];

    //Lire les valeurs du premier tableau
    cout << "Entrez " << n << " entiers :" << endl;
    for (int i = 0; i < n; i++) {
        cin >> tab[i];
    }

    //Créer un deuxième tableau pour stocker les carrés
    int* tabCarres = new int[n];
    for (int i = 0; i < n; i++) {
        tabCarres[i] = tab[i] * tab[i];
    }

    //Supprimer le premier tableau
    delete[] tab;
    tab = nullptr;

    //Afficher le deuxième tableau
    cout << "Les carrés des nombres sont :" << endl;
    for (int i = 0; i < n; i++) {
        cout << tabCarres[i] << " ";
    }
    cout << endl;

    //Supprimer le deuxième tableau
    delete[] tabCarres;
    tabCarres = nullptr;

    return 0;
}
