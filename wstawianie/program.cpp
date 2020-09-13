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
//#include <vector>
//#include <stack>
//#include <queue>

#include <fstream>


//DEFINE

#define ll long long
#define pub push_back
#define	pob pop_back
using namespace std;



int tab[102];

void wstawianie(int tablica[], int dl){
    int bufor,j;
    for(int i = 1; i < dl; i++){ 
        bufor = tablica[i];
        j = i-1;
        while(j>=0 && tablica[j]>bufor) 
            {
                tablica[j+1] = tablica[j]; 
                --j;
            }
        tab[j+1] = bufor;
    }
}

int main()
{
  ios_base::sync_with_stdio(0);
    cin.tie(0);

    fstream dane, output;
    dane.open("/Users/patrykknapek/Desktop/algorytmy/input.txt", ios::in);
    output.open("output.txt", ios::out);
    for(int i = 0; i < 100; i++){
        dane>>tab[i];
    }
   wstawianie(tab,100);
   for(int i = 0; i < 100; i++){
       output<<tab[i]<<"\n";
   } 








    dane.close();
    output.close(); 
    return 0;
}

