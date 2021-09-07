
#include <iostream>

using namespace std;

string PIN;
int x = 0;
int M = 0;
int W = 0;
int ile_prob;

int main()
{
	cout << "Witamy!\n";
	cout << "Wprowadz poprawny PIN twojej karty: ";
	cin >> PIN;

	while (PIN == "0517")
	{
		if (PIN == "0517")
		{
			cout << "Witamy na twoim koncie bankowym\n";
			cout << "Wplata gotowki[1]\n";
			cout << "Wyplata gotowki[2]\n";
			cout << "Informacje o stanie twojego konta[3]\n";
			cout << "Wybierz opcje:";
			cin >> x;
			x++;
			cout << "Podaj wplacana kwote: "; // Uzytkownik wybral opcje wplata gotowki
			cin >> M; //indeks wplacanej kwoty
			if (M > 0)
			{
				cout << "Wplaciles:" << M << "zl\n";
				cout << "Zaczekaj az bankomat skonczy operacje a nastepnie wyjmij karte." << endl; //Koniec operacji

			}
			else
			{
				cout << "Wplacana kwota powinna byc wieksza od 0.\n";
				cout << "Sprobuj jeszcze raz.";
			}
			x++;
			cout << "Podaj kwote:"; //Uzytkwonik wybral opcje wyplaty gotowki
			cin >> W;
			if (W > 0)
			{
				cout << "Wyplaciles -" << W << "zl" << endl;
			}


		}
        else
		{
			cout << "Podales niepoprawny kod PIN\n";
			cout << "Sprobuj jeszcze raz\n";
		}

	}
}
