#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
#include <windows.h>
using namespace std;
 
int main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(0));
    int dias;
    cout << "Diz me quantos dias: ";
    cin >> dias;
    cout << "Isso em anos é: " << dias / 365 << " anos\n";
    cout << "Isso em meses é: " << dias / 30 << " meses\n";
    cout << "Isso em semanas é: " << dias / 7 << " semanas\n";
    cout << "Isso em horas é: " << dias * 24 << " horas\n";
    cout << "Isso em minutos é: " << dias * 24 * 60 << " minutos";
}