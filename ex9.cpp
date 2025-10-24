#include <iostream>
#include <cmath> // pour sqrt()
using namespace std;

class Vecteur3D {
private:
    float x, y, z;

public:
    // 1️- Constructeur avec valeurs par défaut
    Vecteur3D(float a = 0, float b = 0, float c = 0) {
        x = a;
        y = b;
        z = c;
    }

    // 2️- Fonction d’affichage
    void afficher() const {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }

    // 3️- Somme de deux vecteurs → renvoyée par valeur
    Vecteur3D somme(const Vecteur3D &v) const {
        return Vecteur3D(x + v.x, y + v.y, z + v.z);
    }

    // 4️-Produit scalaire de deux vecteurs
    float produitScalaire(const Vecteur3D &v) const {
        return x * v.x + y * v.y + z * v.z;
    }

    // 5️-Test de coïncidence
    bool coincide(const Vecteur3D &v) const {
        return (x == v.x && y == v.y && z == v.z);
    }

    // 6️- Norme du vecteur
    float norme() const {
        return sqrt(x * x + y * y + z * z);
    }

    // 7️-normax - version 1 : renvoie par valeur
    Vecteur3D normax_valeur(const Vecteur3D &v) const {
        if (this->norme() >= v.norme())
            return *this;
        else
            return v;
    }

    // 8️- normax - version 2 : renvoie par adresse (pointeur)
    const Vecteur3D* normax_adresse(const Vecteur3D *v) const {
        if (this->norme() >= v->norme())
            return this;
        else
            return v;
    }

    // 9️-normax - version 3 : renvoie par référence
    const Vecteur3D& normax_reference(const Vecteur3D &v) const {
        if (this->norme() >= v.norme())
            return *this;
        else
            return v;
    }
};

//  Programme principal
int main() {
    Vecteur3D v1(3, 4, 0);
    Vecteur3D v2(1, 2, 2);

    cout << "v1 = "; v1.afficher();
    cout << "v2 = "; v2.afficher();

    cout << "\n Somme : ";
    Vecteur3D v3 = v1.somme(v2);
    v3.afficher();

    cout << " Produit scalaire : " << v1.produitScalaire(v2) << endl;
    cout << " Norme de v1 : " << v1.norme() << endl;
    cout << " Norme de v2 : " << v2.norme() << endl;

    cout << "\n Test coïncidence : ";
    cout << (v1.coincide(v2) ? "Identiques" : "Différents") << endl;

    cout << "\n--- Comparaison des normes ---" << endl;

    cout << "Par valeur : ";
    v1.normax_valeur(v2).afficher();

    cout << "Par adresse : ";
    (v1.normax_adresse(&v2))->afficher();

    cout << "Par référence : ";
    v1.normax_reference(v2).afficher();

    return 0;
}
