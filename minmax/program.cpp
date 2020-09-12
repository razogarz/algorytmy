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


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    fstream dane, output;
    dane.open("/Users/patrykknapek/Desktop/algorytmyMaturalneCpp/input.txt", ios::in);
    output.open("output.txt", ios::out);
    int maks, mini = 0;
    for(int i = 0; i < 100; i++){
        dane>>tab[i];
    } 
    for(int i = 0; i < 100; i++){
        maks = max(maks, tab[i]);
        mini = min(mini, tab[i]);
    } 
    output<<"Największa liczba: "<<maks<<"\n";
    output<<"Najmniejsza liczba: "<<mini<<"\n";







    dane.close();
    output.close(); 
    return 0;
}
