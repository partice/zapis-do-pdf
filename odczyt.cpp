#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

string imie, nazwisko, miasto;
int kod_pocztowy;

int main()
{

    fstream plik;
    plik.open("dane_statystyczne.pdf", ios::in);

    if(plik.good()==false)
    {
        cout<<"Plik nie istnieje";
        exit (0);
    }

string linia;
int nr_linii=1;

while(getline(plik,linia))
{
    switch(nr_linii)
    {
        case 1: imie = linia; break;
        case 2: nazwisko = linia; break;
        case 3: miasto = linia; break;
        case 4: kod_pocztowy = atoi(linia.c_str()); break;
    }
nr_linii++;
}

plik.close();

cout<<imie<<endl;
cout<<nazwisko<<endl;
cout<<miasto<<endl;
cout<<kod_pocztowy<<endl;

return 0;
}