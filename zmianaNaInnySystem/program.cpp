/*

TITLE:
DESCRIPTION:

*/

/*
-------------
BIBLIOTEKI
-------------
*/

//#include <bits/stdc++.h>

#include <iostream>
//#include <algorithm>
//#include <cmath>
//#include <cstdlib>

//#include <string>
//#include <pair>
//#include <bitset>
#include <vector>
//#include <stack>
//#include <queue>

#include <fstream>


//DEFINE

#define ll long long
#define pub push_back
#define	pob pop_back
using namespace std;



int input[101];
vector <int> zmienione[102];


int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    //wprowadzenie danych
    fstream dane, output;
    dane.open("/Users/patrykknapek/Desktop/algorytmyMaturalneCpp/input.txt", ios::in);
    output.open("output.txt", ios::out);
    int sys, obecna, modulo, licznik;
    cin>>sys;
    for(int i = 0; i < 100; i++){
        dane>>input[i];
    }
    
    for(int i = 0; i < 100; i++){
        //przygotowanie napisu, obecnej liczby oraz licznika cyfr
        obecna = input[i];
        output<<"liczba "<<obecna<<" przekształcona na system o podstawie "<<sys<<": ";
        licznik = 0;
        //wpisywanie poszczegolnych cyfr w nowym systemie do wektora
        while(obecna > 0){
            zmienione[i].pub( obecna % sys );
            obecna/=sys;
            licznik++;
        }
        //wypisywanie sprawdzając dla systemow powyzej 10 litery
        for(int j = licznik-1; j >= 0; j--){
            if(zmienione[i][j] < 10){
                output << zmienione[i][j];
            } else {
                output<<char('A'-10+zmienione[i][j]);
            }
        }
        output<<'\n';
    }








  dane.close();
  output.close(); 
  return 0;
}
