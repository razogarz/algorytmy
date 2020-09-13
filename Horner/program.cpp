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

int tab[11];


int horner(int wspol[], int stopien, int x){
    if(stopien == 0){
        return wspol[0];
    }
    return x*horner(wspol, stopien-1, x)+wspol[stopien];
}


int main()
{
  ios_base::sync_with_stdio(0);
    cin.tie(0);

    fstream dane, output;
    dane.open("input.txt", ios::in);
    output.open("output.txt", ios::out);
    int stopien, x;
    dane>>x>>stopien;
    for(int i = 0; i < stopien+1; i++){
        dane>>tab[i];
    }
    output<<horner(tab,stopien,x); 








    dane.close();
    output.close(); 
    return 0;
}
