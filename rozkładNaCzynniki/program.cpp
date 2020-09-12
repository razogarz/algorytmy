/*

TITLE:
DESCRIPTION:


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





int main()
{
    //przyspieszenie
  ios_base::sync_with_stdio(0);
  cin.tie(0);
    //dane
  fstream dane, output;
  dane.open("/Users/patrykknapek/Desktop/algorytmyMaturalneCpp/input.txt", ios::in);
  output.open("output.txt", ios::out);
    //wczytanie danych
  for(int i = 0; i < 100; i++){
      dane >> tab[i];
  }
    //aktualnie rozkładana liczba
  int sprawdzana;
  for(int i = 0; i < 100; i++){
      sprawdzana = tab[i];
      output<<"Czynniki pierwsze liczby "<<sprawdzana<<": ";
      //czy jest jedynką
      if(sprawdzana == 1){
          output<<1<<"\n";
          continue;
      }
      //sprawdzaj czy kolejna liczba dzieli sprawdzaną
      for(int a = 2; a*a <= sprawdzana; a++){
          while(sprawdzana % a == 0){
              output<<a<<" ";
              sprawdzana /= a;
          }
      }
      //jeśli jeden z dzielnikow to wysoka liczba pierwsza
      if(sprawdzana != 1){
          output<<sprawdzana;
      }
      output<<"\n";
  }










  dane.close();
  output.close();  
  return 0;
}
