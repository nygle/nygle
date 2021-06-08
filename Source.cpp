#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	string soubor = "yo.txt";
	ifstream cti;
	cti.open(soubor);

	if (cti.fail()) {
		cout << "chyba s souborem" << endl;
		system("Pause");
		return 0;
	}



	string text;
	int const N = 1000;
	int cisla, suma = 0;
	int i = 0;
	string pole[N];

	while (cti >> text >> cisla) {
		if (text == "Humus") {
			continue;
		}
		cout << "Jidlo: " << text << " - " << cisla << "x" << endl;
		suma += cisla;
	}
	cout << "kolikrat jsem mel tohle jidlo za tyden?: " << suma << "x" << endl;





	while(getline(cti, text)) {
		cout << text << endl;
}
	cti.close();




	while (cti >> text) {
		pole[i] = text;
		i++;
	}
	cti.close();
	for (int a = 0; a < i; a++) {
		cout << pole[a] << endl;
	}


	system("Pause");
	return 0;

}