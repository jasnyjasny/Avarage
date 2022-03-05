#include <iostream>
using namespace std;
float tab[100];
int ilosc;
float suma = 0;
float srednia;

void Podawanie_ilosci()
{
    cout << "How many " << endl;
    cin >> ilosc;
}

void Wpisywanie_liczb()
{

    for (int i; ilosc > i; i++)
    {
        cout<<i+1<<") ";
        cin >> tab[i];
    }
}

void obliczanie()
{
    for (int i=0; ilosc > i; i++)
    {
        suma += tab[i];
    }
    srednia=suma/ilosc;
    cout<<"avrage :"<<srednia;
}

int main()
{
    Podawanie_ilosci();
    Wpisywanie_liczb();
    obliczanie();
}