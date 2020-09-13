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

#include <string>
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







int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    fstream dane, output;
    dane.open("/Users/patrykknapek/Desktop/algorytmyMaturalneCpp/input.txt", ios::in);
    output.open("output.txt", ios::out);
    string tekst, wzorzec;
    cin>>tekst>>wzorzec;
    for(int i = 0; i < (tekst.length()-wzorzec.length()); i++){
        if(tekst[i] == wzorzec[0]){
            for(int j = 1; j < wzorzec.length(); j++){
                if(tekst[i+j] != wzorzec[j]){
                    break;
                }
                if(j == wzorzec.length()-1){
                    output<<"Dopasowanie na miejscu: "<<i+1<<"\n";
                    i+=j;
                }
            }
        }
    } 








    dane.close();
    output.close(); 
    return 0;
}
