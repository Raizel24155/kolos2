﻿// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <fstream>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <windows.h>
#include <string>

using namespace std;

fstream plik;

void Jeden();
void Dwa();
void Trzy(string a);
void Cztery(string a);

void Piec();
void Szesc();
void Siedem(string a);
void Osiem();

int main()
{
    string x = "abecadlo z piekla spadlo";
    //Jeden();
    //Dwa();
    //Trzy(x);
    //Cztery(x);

    //Piec();
    //Szesc();
    //Siedem(x);
    Osiem();
}
void Jeden()
{
    plik.open("plik.txt", ios::app);
    string x;
    getline(cin,x);
    plik << " " << x;


    plik.close();

}
void Dwa()
{
    /*
    plik.open("plik.txt", ios::in);
    
    string x;
    int k = 0;
    int licz = 1;
    int naj = 0;
    int slowo = 0;
    while (!plik.eof())
    {
        getline(plik, x);
        cout << x.length() << endl;
        for (int i = 0; i < x.length(); i++)
        {
            if (x[i] != ' ')
            {
                k++;
            }
            else
            {
                cout << "slowo " << licz << " ma " << k << " liter" << endl;
                if (naj < k)
                {
                    slowo = licz;
                }
                k = 0;
                licz++;
            }
        }
        if (k != 0)
        {
            cout << "slowo " << licz << " ma " << k << " liter" << endl;
            if (naj < k)
            {
                slowo = licz;
            }
            k = 0;
            licz++;
        }
    }
    cout << "najwiecej liter ma slowo: " << slowo;

    plik.close(); */

    plik.open("plik.txt", ios::in);

    string x;
    int slowo, ilosc = 0, ktore = 1,najdluzsze = 0;
    while (!plik.eof())
    {
        plik >> x;
        slowo = x.length();
        if (slowo > ilosc)
        {
            ilosc = slowo;
            najdluzsze = ktore;
        }
        ktore++;
    }
    cout << " naj slowo: " << najdluzsze;


    plik.close();

}
void Trzy(string a)
{
    int x = 0;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'y' || a[i] == 'u' || a[i] == 'i' || a[i] == 'o')
        {
            x++;
        }
    }
    cout << x;
}
void Cztery(string a)
{
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == ' ')
        {
            cout << i+1 << endl;
        }
    }
}

void Piec()
{
    plik.open("text.txt", ios::app);

    int x;
    cin >> x;
    plik << x << endl;

    plik.close();
}
void Szesc()
{
    plik.open("text.txt", ios::in);
    int x;
    int y = 0;
    while (!plik.eof())
    {
        

        plik >> x;
        if (x > y)
        {
            y = x;
        }
        
    }

    cout << y;
    plik.close();
}
void Siedem(string a)
{
    int x = 1;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != ' ')
        {
            if (x % 2 == 0)
            {
                cout << a[i] << a[i];
            }
            else
            {
                cout << a[i];
            }
            x++;
        }
        else
        {
            cout << a[i];
        }
    }
}
void Osiem()
{
    string x;
    int ile = 0;
    getline(cin, x);

    for (int i = 0; i < x.length();i++)
    {
        if (x[i] == 'a')
        {
            ile++;
        }
    }
    cout << ile;
}
