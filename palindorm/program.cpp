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
    string wyraz;
    cin>>wyraz;
    int i = 0;
    int j = wyraz.length() - 1;
    while(wyraz[i] == wyraz[j] && i < j){
        i++;
        j--;
    }
   if(i >= j){
       output<<"Palindrom!";
   } else {
       output<<"Nie palindrom!";
   }








    dane.close();
    output.close(); 
    return 0;
}
