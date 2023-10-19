#include <iostream>

using namespace std;

int AA[10];
int x;

void ujemne(int tab[])
{
	int licznik = 0;
	for (int i = 0; i <= 9; i++)
	{
		if (tab[i] < 0)
		{
			licznik++;
		}
	}
	int* BB = new int[licznik];
	for (int i = 0; i < licznik; i++)
	{
		if (tab[i] < 0)
		{
			BB[i] = tab[i];
			cout << BB[i] << " ";
		}
	}
	
	cout <<endl<< "Liczb ujemnych: " << licznik << endl;
	cout << "Pominieto " << 10 - licznik << " liczb" << endl;

	delete[] BB;
}

int main() {

	cout << "Podaj 10 liczb: " << endl;
	
	for (int i = 0; i < 10; i++)
	{
		cin >> x;
		AA[i] = x;
	}

	ujemne(AA);

	return 0;
}