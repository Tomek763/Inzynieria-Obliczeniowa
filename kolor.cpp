#include <iostream>

using namespace std;

void zapiszkolor()
{
	//zapisuje kolor w bazie danych
}

void podmienkolor()
{
	//podmienia kolor istniej¹cych pinezek na wybrany
}

void zmienkolor()
{
	char x;
	cout << "Wybierz kolor pinezki:" << endl;
	cout << "1. Czerwony" << endl;
	cout << "2. Zolty" << endl;
	cout << "3. Zielony" << endl;
	cout << "4. Niebieski" << endl;
	cout << "5. Pomaranczowy" << endl;
	cout << "6. Fioletowy" << endl;
	cout << "7. Bialy" << endl;
	cout << "8. Czarny" << endl;
	cout << "9. Szary" << endl;
	x = getchar();
	switch (x)
	{
	case '1':
		system("cls");
		cout << "Zmieniono kolor pinezki na czerwony" << endl;
		zapiszkolor();
		podmienkolor();
		break;
	
	case '2':
		system("cls");
		cout << "Zmieniono kolor pinezki na zolty" << endl;
		zapiszkolor();
		podmienkolor();
		break;
	
	case '3':	
		system("cls");
		cout << "Zmieniono kolor pinezki na zielony" << endl;
		zapiszkolor();
		podmienkolor();
		break;

	case '4':
		system("cls");
		cout << "Zmieniono kolor pinezki na niebieski" << endl;
		zapiszkolor();
		podmienkolor();
		break;

	case '5':
		system("cls");
		cout << "Zmieniono kolor pinezki na pomaranczowy" << endl;
		zapiszkolor();
		podmienkolor();
		break;

	case '6':
		system("cls");
		cout << "Zmieniono kolor pinezki na fioletowy" << endl;
		zapiszkolor();
		podmienkolor();
		break;

	case '7':
		system("cls");
		cout << "Zmieniono kolor pinezki na bialy" << endl;
		zapiszkolor();
		podmienkolor();
		break;

	case '8':
		system("cls");
		cout << "Zmieniono kolor pinezki na czarny" << endl;
		zapiszkolor();
		podmienkolor();
		break;
		
	case '9':
		system("cls");
		cout << "Zmieniono kolor pinezki na szary" << endl;
		zapiszkolor();
		podmienkolor();
		break;

	default:
		system("cls");
		cout << "Nieprawidlowa wartosc" << endl;
	}
}

int main() {

	zmienkolor();

	return 0;
}