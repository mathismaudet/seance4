#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int>tab(3); // création de tableau
	tab[0]=3;
	tab[1]=4;
	tab[2]=5;

	tab.push_back(1000); // permet de rajouter un élément dans le tableau

	cout << tab[0] << " " << tab[1] << " " << tab[2] << " " << tab[3] << endl;

	cout << tab.size() << endl; // renvoie la taille du tableau

	tab[3]=101; // modifie une case du tableau, donc ici on remplace 1000 par 101

	cout << tab[3] << endl;

	return 0;
}
