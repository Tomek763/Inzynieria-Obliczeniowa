#include <iostream>

using namespace std;

int tab[901];

void fun()
{
	for (int i = 0; i <= 1200; i++)
	{
		if (i >= 300)
		{
			if (i % 100 == 0) cout << " *** ";
			if (i % 400 == 0) cout << endl;
			if (i % 2 != 0)
			{
				cout << i << " ";
			}

		}
	}
}

int main() {

	fun();

	return 0;
}