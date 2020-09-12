/*

TITLE: program sprawdzający czy liczba jest pierwsza 
DESCRIPTION: ładujemy liczby do tablicy i sprawdzamy ktore z nich sa pierwsze

*/

/*
-------------
BIBLIOTEKI
-------------
*/

//#include <bits/stdc++.h>

#include <iostream>
//#include <algorithm>
#include <cmath>
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


int czyPierwsza(int liczba){
  if(liczba < 2){
    return -1;
  }
  int k = sqrt(liczba);
  for(int i = 2; i <= k; i++){
    if(liczba % i == 0){
      return -1;
    }
  }
  return liczba; 
}



int tab [101];


int main()
{
  //przyspieszenie
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  //input
  fstream data;
  data.open("input.txt", ios::in);
  fstream output;
  output.open("output.txt", ios::out);

  int l;

  for(int i = 0; i < 100; i++){
    data>>tab[i];

    l = czyPierwsza(tab[i]);

    if(l != -1){ 
      output<<czyPierwsza(tab[i])<<"\n";
    }
  } 

	
	









  data.close();
  output.close();
  return 0;
}
