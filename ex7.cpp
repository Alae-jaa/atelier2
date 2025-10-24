#include <iostream>
using namespace std;

void afficherPermutations(string prefixe, string reste) {
    if (reste.length() == 0) {
        cout << prefixe << endl;  // Si plus de caractères à placer → afficher la permutation
        return;
    }

    for (int i = 0; i < reste.length(); i++) {
        // On choisit une lettre du reste et on la déplace dans le préfixe
        string nouveauPrefixe = prefixe + reste[i];
        string nouveauReste = reste.substr(0, i) + reste.substr(i + 1);
        afficherPermutations(nouveauPrefixe, nouveauReste);
    }
}

int main() {
    string mot;
    cout << "Entrez une chaine de caracteres : ";
    cin >> mot;

    cout << "\nLes permutations possibles sont :\n";
    afficherPermutations("", mot);

    return 0;
}
