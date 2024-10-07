#include <iostream>

int main () {

 float prel = 80;
 float mid = 90;
 float pref = 95;
 float fin = 85;
 float ans = 4;

 float sum = prel + mid + pref + fin;
 float quo = sum / ans;

 std::cout << "Prelim: " << prel << " Mid: " << mid << " Pref: " << pref << " Fin: " << fin << " Average: " << quo;
 return 0;
}
