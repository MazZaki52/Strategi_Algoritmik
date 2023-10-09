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
    double waktu;
    int s;
    int v;
    double srad;
    cout << "BAIDZAKI XI-10\n";
    cout << "Menghitung Waktu\n";
    cout << "Masukkan Sudut : ";
    cin >> s;
    cout << "Masukkan Kecepatan : ";
    cin >> v;
    srad = s * (3.14 / 180);
    waktu = 2 * (v * srad) / 10;
    cout << "Waktu Yang Ditempuh Boro Untuk Mencapai Jarak Terjauh ADALAH : ";
    cout << fixed <<setprecision(1) << waktu << endl ; 
    return 0;
}



