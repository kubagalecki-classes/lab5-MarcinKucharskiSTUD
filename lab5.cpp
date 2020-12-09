#include "Human.hpp"
#include <iostream>
#include <iterator>
#include <list>
#include <vector>
using namespace std;

int main()
{
    int x = 5;
    // int           nel = 10;
    vector< int >          v(10);
    vector< unsigned int > g{10};
    vector< unsigned int > t(10);
    vector< Human >        w;
    Human v1;

    cout << "podaj liczbe: " << endl;
    cin >> v1.name;
    cout << "liczba: " << v[0] << endl;

    
    vector< Human > w1;
    Human           h1{"ula", 23, 1, 1};
    Human           h2{"kiwi", 23, 1, 1};
    Human           h3{"rybbol", 23, 0, 0};
    w1.push_back(h1);
    w1.push_back(h2);
    w1.push_back(h3);
    for (Human e : w1) {
        cout << e.getName() << endl;
    }

    /* for (int i = 0; i < roz; i++) {
         cout << "Element nr." << i << " Wartosc:  " << v[i] << " Adres: " << &v[i] << endl;
     } */
}
