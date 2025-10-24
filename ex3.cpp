//En utilisant le tableau

#include <iostream>
using namespace std;

int main() {
    int tab[10];          // tableau de 10 entiers
    int i, min, max;

    //Lecture des 10 nombres
    cout << "Entrez 10 entiers :" << endl;
    for (i = 0; i < 10; i++) {
        cin >> tab[i];
    }

    //Initialisation du min et max
    min = tab[0];
    max = tab[0];

    //Recherche du plus petit et du plus grand
    for (i = 1; i < 10; i++) {
        if (tab[i] < min)
            min = tab[i];
        if (tab[i] > max)
            max = tab[i];
    }

    //Affichage des résultats
    cout << "Le plus petit nombre est : " << min << endl;
    cout << "Le plus grand nombre est : " << max << endl;

    return 0;
}
//En utilisant le pointeur

#include <iostream>
using namespace std;

int main() {
    int T[10];
    int *p;        // pointeur sur int
    int min, max;

    cout << "Entrez 10 entiers :" << endl;

    //Lecture des 10 entiers via pointeur
    for (p = T; p < T + 10; p++) {
        cin >> *p;   // *p représente la case mémoire pointée
    }

    //Réinitialiser le pointeur au début du tableau
    p = T;
    min = *p;
    max = *p;

    //Recherche du min et max
    for (p = T + 1; p < T + 10; p++) {
        if (*p < min)
            min = *p;
        if (*p > max)
            max = *p;
    }
    //l'affichage 
    cout << "Le plus petit nombre est : " << min << endl;
    cout << "Le plus grand nombre est : " << max << endl;

    return 0;
}
