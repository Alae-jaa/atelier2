#include <iostream>
using namespace std;

int compteur = 0; // variable globale

void compteurAppels() {
    compteur++;
    cout << "Appel numéro " << compteur << endl;
}

int main() {
    compteurAppels();
    compteurAppels();
    compteurAppels();
    return 0;
}