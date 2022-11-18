/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file P98458-MinimoMaximo.cc
 * @author Alvaro Perez Ramos alu0101574042@ull.edu.es
 * @date Nov 16 2022
 * @brief Write a procedure

     void min_max(int a, int b, int& mn, int& mx);
to store in mn the minimum of a and b, and store in mx the maximum of a and b.
* For instance, if called with a =7 and b = −3, the values after the call must
be mn =−3 and mx = 7.

 * Observation You only need to submit the required procedure; your main program
will be ignored.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P98458_en
 */
#include <algorithm>
#include <iostream>
using namespace std;

void min_max(int a, int b, int &mn, int &mx) {
  mn = min(a, b);
  mx = max(a, b);
}

int main() {
  int knumero_a{0}, knumero_b{0}, mn{0}, mx{0};
  while (cin >> knumero_a >> knumero_b) {
    min_max(knumero_a, knumero_b, mn, mx);
    cout << "min_max(" << 7 << ", " << -3 << ") → " << mn << ' ' << mx << endl;
  }
}