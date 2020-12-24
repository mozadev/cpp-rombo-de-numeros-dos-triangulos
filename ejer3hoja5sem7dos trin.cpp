#include <iostream>
#include <conio.h>
using namespace std;

int ingresen()
{
	int n;
	cout << "ingrese n"; cin >> n;
	while (n <= 0 || n >= 10)
	{
		cout << "ingrese n:"; cin >> n;
	}
	return n;
}

void grafica(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int e = 23; e >= 1; e--)
			cout << " ";
		for (int j = 1; j <= i; j++)
			if (j == 1 || i == n || i == j)
				cout << "*";
			else cout << " ";

			for (int e = 23 - i; e >= 1; e--)
				cout << " ";
			for (int j = 1; j <= i; j++)
				if (j == 1 || i == n || i == j)
					cout << "*";
				else cout << " ";

				for (int e = 23 - i; e >= 1; e--)
					cout << " ";
				for (int j = 1; j <= i; j++)
					if (j == 1 || i == n || i == j)
						cout << "*";
					else cout << " ";
				
					cout << endl;

	}
}
int main()
{
	int n = ingresen();
	grafica(n);
	_getch();
}
