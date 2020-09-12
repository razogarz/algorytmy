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



int tab[101];
//bubble sort
void bubbels(){
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            if(tab[j]>tab[j+1]){
                swap(tab[j],tab[j+1]);
            }
        }
    }
    return;
}
int binsearch(int szukana, int pocz, int kon){
    //wyznaczenie środka
    int miejsce = (pocz+kon)/2;
    //sprawdzenie, czy znalezlismy lub szukana nie istnieje
    if(szukana == tab[miejsce]){
        return miejsce;
    } else if(tab[miejsce] != szukana && tab[miejsce-1] < szukana && tab[miejsce+1] > szukana){
        return -1;
    } 
       //rekurencja 
    if(tab[miejsce] > szukana){
        return binsearch(szukana, pocz, miejsce);
    } else {
        return binsearch(szukana, miejsce, kon);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //wprowadzenie danych
    fstream dane, output;
    dane.open("/Users/patrykknapek/Desktop/algorytmyMaturalneCpp/input.txt", ios::in);
    output.open("output.txt", ios::out);
    for(int i = 0; i < 100; i++){
        dane>>tab[i];
    } 
    int szukana;
    cin>>szukana;
    //posortowanie tablicy 
    bubbels();
    for(int i = 0; i < 100; i++){
        output<<tab[i]<<"\n";
    }
    //podanie wyniku
    output<<binsearch(szukana,0,100);





    dane.close();
    output.close(); 
    return 0;
}
