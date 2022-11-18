/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file Intervals_2.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Nov 4 2022
 * @brief Easter Sunday is a mobile holiday corresponding to the first Sunday
after the first full moon of the spring. Write a program to compute the day D
and the month M of the Easter Sunday of every given year Y.

Below, := indicates assignment, div indicates integer division, and mod
indicates the remainder of the integer division. To solve this problem, use the
Gauss method:

Compute
k := Y div 100
x := Y  mod  19
b := Y  mod  4
c := Y  mod  7
q := k div 4
p := (13+8k) div 25
y := (15−p+k−q)  mod  30
z := (19x+y)  mod  30
n := (4+k−q)  mod  7
e := (2b+4c+6z+n)  mod 7
If z+e ≤ 9, then D := 22+z+e and M := 3.
Otherwise, if z=29 and e=6, then D := 19 and M := 4.
Otherwise, if z=28 and e=6 and x>10, then D := 18 and M := 4.
Otherwise, D := z+e−9 and M := 4.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P51126
 */
#include <iostream>
using namespace std;
int main() {
  int anio{0};
  while (cin >> anio) {
    if (anio < 1800 || anio > 9999) {
      cin >> anio;
    }
    int k{0}, x{0}, b{0}, c{0}, q{0}, p{0}, y{0}, z{0}, n{0}, e{0};
    int dia{0}, mes{0};
    k = anio / 100;
    x = anio % 19;
    b = anio % 4;
    c = anio % 7;
    q = k / 4;
    p = (13 + (8 * k)) / 25;
    y = (15 - p + k - q) % 30;
    z = ((19 * x) + y) % 30;
    n = (4 + k - q) % 7;
    e = ((2 * b) + (4 * c) + (6 * z) + n) % 7;
    if (z + e <= 9) {
      dia = 22 + z + e;
      mes = 3;
    } else if (z == 29 && e == 6) {
      dia = 19;
      mes = 4;
    } else if (z == 28 && e == 6 && x > 10) {
      dia = 18;
      mes = 4;
    } else {
      dia = z + e - 9;
      mes = 4;
    }
    cout << dia << "/" << mes << endl;
  }
  return 0;
}