#include <iostream>
#include <string>
#include <vector>
#include "etudiant.h"
#include <fstream>

using namespace std;

int main()
{
	vector <etudiant> classe;

	string name;
	int grade;

	ofstream f_notes;
	f_notes.open("notes.txt");
	for (int i = 0; i < 3; i++) {
		cout << "Nom de l'etudiant: " << endl;
		cin >> name;
		cout << "Note de l'etudiant: " << endl;
		cin >> grade;

		classe.push_back(etudiant());
		classe[i].nom = name;
		classe[i].note = grade;

		f_notes<<classe[i].nom<<" "<< classe[i].note << endl;
	}
	f_notes.close();

	for (int i = 0; i < classe.size(); i++) {
		cout << classe[i].nom << " " << classe[i].note << endl;
	}

	cout << "Choisissez un etudiant pour savoir sa note: " << endl;
	cin >> name;

	for (int i=0; i<classe.size(); i++) {
		if (name == classe[i].nom) {
			cout << "La note de " << classe[i].nom << " est: " << classe[i].note;
		}
	}
	//Gérer la persistence des notes

	ofstream fichier_notes;
	fichier_notes.open("file.txt");
	fichier_notes<<"epsi";
	fichier_notes.close();

	return 0;
}
