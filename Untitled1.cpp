#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    double jarak;
    int s;
    int v;
    double srad;
    
    cout << "BAIDZAKI XI-10\n";
    cout << "Menghitung jarak Horizontal Burung Beo\n";
    cout << "Masukkan sudut:";
    cin >> s;
    cout << "Masukkan Kecepatan:";
    cin >> v;
    srad = s * (3.14 / 180);
    jarak = v * v * sin(2 * srad) / 10;
    cout << "Jarak Terjauh Yang Bisa Ditempuh Burung Beo Adalah:";
    cout << fixed <<setprecision(1) << jarak << endl ; 
    return 0;
}


