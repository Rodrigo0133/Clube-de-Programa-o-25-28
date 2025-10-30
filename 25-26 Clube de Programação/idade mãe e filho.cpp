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
    int R, M, Contador = 1;
    cin >> R;
    cin >> M;
    while (M / 2 != R)
    {
        Contador++;
        M++;
        R++;
    }
    cout << Contador;
}