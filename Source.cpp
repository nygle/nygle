#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    ifstream cteni;
    string text = "yo.txt"; // jakej koliv txt file ale musí být společně s Source.cpp v složce
    cteni.open(text);

    if (cteni.fail()) {
        cout << "Chyba " << endl;                    //když tam bude chyba v čtení z TXT nebo tam bude jinej název text souboru tak to ukáže tohle.
        system("Pause");
        return 0;
    }

    string slovo;
    const int N = 1000;
    int cislo, suma = 0;        //zakladni deklarace a další věci
    string pole[N];
    int i = 0;

    while (cteni >> slovo >> cislo) {
        if (slovo == "Vegetarianske_Jidlo") {
            continue;                                                            //když chcu přeskočit slovičko
        }

        cout << "Jidlo: " << slovo << " - " << cislo << "x" << endl;        //slovicko + cislo
        suma += cislo;                                                        //když chci sčíst všechny čísla
    }

    cout << "kolikrat jsem snedl jidlo?: " << suma << "x" << endl;





    //string radek;
    //while (getline(cteni, radek)) {
    //    cout << radek << endl;                                //když budu chtít celou větu + cislo vedle toho (cislo bude string)
    //}
    //cteni.close();






    //while (cteni >> slovo) {
    //    pole[i] = slovo;
    //    i++;
    //}
    //cteni.close();

    //for (int a = 0; a < i; a++) {
    //    cout << " " << pole[a] << " ";                                 //pod sebou když budu chtít
    //}





    system("Pause");
    return 0;

}
