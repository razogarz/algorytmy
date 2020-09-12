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



int Euklides(int a, int b){
    if(a == b){
        return a;
    } 
    a -= b;
    if(a < b){
        swap(a,b);
    }
    return Euklides(a,b);
}



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    fstream dane, output;
    dane.open("/Users/patrykknapek/Desktop/algorytmyMaturalneCpp/input.txt", ios::in);
    output.open("output.txt", ios::out);

    int a,b;	
    cin>>a>>b;
    if(a < b){
        swap(a,b);
    }
    output<<Euklides(a,b);







    dane.close();
    output.close(); 
    return 0;
}
