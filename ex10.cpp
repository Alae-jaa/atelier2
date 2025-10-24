#include <iostream>
using namespace std;

class Complexe {
private:
    float reel;
    float imag;

public:
    // 1️- Constructeur avec valeurs par défaut
    Complexe(float r = 0, float i = 0) {
        reel = r;
        imag = i;
    }

    // 2️-Lecture des valeurs depuis le clavier
    void saisir() {
        cout << "  Partie reelle : ";
        cin >> reel;
        cout << "  Partie imaginaire : ";
        cin >> imag;
    }

    // 3️- Affichage du nombre complexe
    void afficher() const {
        cout << reel;
        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";
    }

    // 4️-Addition
    Complexe addition(const Complexe &c) const {
        return Complexe(reel + c.reel, imag + c.imag);
    }

    // 5️-Soustraction
    Complexe soustraction(const Complexe &c) const {
        return Complexe(reel - c.reel, imag - c.imag);
    }

    // 6️- Multiplication
    Complexe multiplication(const Complexe &c) const {
        return Complexe(reel * c.reel - imag * c.imag, reel * c.imag + imag * c.reel);
    }

    // 7️- Division
    Complexe division(const Complexe &c) const {
        float denominateur = c.reel * c.reel + c.imag * c.imag;
        if (denominateur == 0) {
            cout << "Erreur : division par zero !" << endl;
            return Complexe(0, 0);
        }
        float r = (reel * c.reel + imag * c.imag) / denominateur;
        float i = (imag * c.reel - reel * c.imag) / denominateur;
        return Complexe(r, i);
    }

    // 8️- Égalité
    bool egal(const Complexe &c) const {
        return (reel == c.reel && imag == c.imag);
    }
};

// Programme principal avec menu
int main() {
    Complexe c1, c2, resultat;
    int choix;

    cout << "=== Calcul sur Nombres Complexes ===" << endl;

    cout << "\nSaisir le premier nombre complexe :" << endl;
    c1.saisir();

    cout << "\nSaisir le second nombre complexe :" << endl;
    c2.saisir();

    do {
        cout << "\n===== MENU =====" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Soustraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Tester l’egalite" << endl;
        cout << "0. Quitter" << endl;
        cout << "Votre choix : ";
        cin >> choix;

        switch (choix) {
        case 1:
            resultat = c1.addition(c2);
            cout << "\nResultat de l'addition : ";
            resultat.afficher();
            cout << endl;
            break;

        case 2:
            resultat = c1.soustraction(c2);
            cout << "\nResultat de la soustraction : ";
            resultat.afficher();
            cout << endl;
            break;

        case 3:
            resultat = c1.multiplication(c2);
            cout << "\nResultat de la multiplication : ";
            resultat.afficher();
            cout << endl;
            break;

        case 4:
            resultat = c1.division(c2);
            cout << "\nResultat de la division : ";
            resultat.afficher();
            cout << endl;
            break;

        case 5:
            cout << "\nLes deux nombres sont ";
            if (c1.egal(c2))
                cout << "egaux." << endl;
            else
                cout << "differents." << endl;
            break;

        case 0:
            cout << "\nFin du programme." << endl;
            break;

        default:
            cout << "\nChoix invalide, reessayez !" << endl;
        }

    } while (choix != 0);

    return 0;
}
