//Ejercicio 3 de la hoja 5 semana 7
#include <iostream>
#include <conio.h>
using namespace std;
int IngresaN()
{
int N;
cout << "Ingrese numero:"; cin >> N;
while (N <= 0 || N > 10)
{
cout << "Vuelva a ingresar N:"; cin >> N;
}
return N;
}
void Graficar(int N)
{
for (int i = 1; i <= N; i++)
{
for (int k = 1; k <= 40- i*3; k++)
cout << " ";
for (int j = 1; j < i * 2; j++)
cout << " " << j << " ";
cout << endl;
}
for (int i = N-1; i >= 1; i--)
{
for (int k = 1; k <= 40 - i * 3; k++)
cout << " ";
for (int j = 1; j < i * 2; j++)
cout << " " << j << " ";
cout << endl;
}
}
int main()
{
int N;
N = IngresaN();
Graficar(N);
_getch();
}