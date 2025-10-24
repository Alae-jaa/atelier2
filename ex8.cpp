#include <iostream>
#include <string>
using namespace std;

class Voiture {
private:
    string marque;
    string modele;
    int annee;
    float kilometrage;
    float vitesse;

public:
    // 1️- Constructeur par défaut
    Voiture() {
        marque = "Inconnue";
        modele = "Inconnu";
        annee = 0;
        kilometrage = 0.0;
        vitesse = 0.0;
    }

    // 2️- Constructeur avec paramètres
    Voiture(string m, string mod, int a, float km, float v) {
        marque = m;
        modele = mod;
        annee = a;
        kilometrage = km;
        vitesse = v;
    }

    // 3️- Méthode pour accélérer
    void accelerer(float valeur) {
        vitesse += valeur;
        cout << "La voiture accelere de " << valeur << " km/h. Vitesse actuelle : " << vitesse << " km/h." << endl;
    }

    // 4️- Méthode pour freiner
    void freiner(float valeur) {
        vitesse -= valeur;
        if (vitesse < 0)
            vitesse = 0;
        cout << "La voiture freine de " << valeur << " km/h. Vitesse actuelle : " << vitesse << " km/h." << endl;
    }

    // 5️- Méthode pour afficher les informations
    void afficherInfo() {
        cout << "==============================" << endl;
        cout << "Marque       : " << marque << endl;
        cout << "Modele       : " << modele << endl;
        cout << "Annee        : " << annee << endl;
        cout << "Kilometrage  : " << kilometrage << " km" << endl;
        cout << "Vitesse      : " << vitesse << " km/h" << endl;
        cout << "==============================" << endl;
    }

    // 6️- Méthode pour avancer (augmenter le kilométrage)
    void avancer(float distance) {
        kilometrage += distance;
        cout << "La voiture avance de " << distance << " km. Nouveau kilometrage : " << kilometrage << " km." << endl;
    }

    // 7️-Destructeur
    ~Voiture() {
        cout << "La voiture " << marque << " " << modele << " est detruite." << endl;
    }
};

// Programme principal
int main() {
    // Création d’une voiture avec le constructeur par défaut
    Voiture v1;
    v1.afficherInfo();

    // Création d’une voiture avec le constructeur paramétré
    Voiture v2("Toyota", "Corolla", 2020, 35000.5, 0);
    v2.afficherInfo();

    // Utilisation des méthodes
    v2.accelerer(60);
    v2.avancer(120.5);
    v2.freiner(30);
    v2.freiner(50);  // Test de la limite vitesse = 0

    v2.afficherInfo();

    return 0;
}
