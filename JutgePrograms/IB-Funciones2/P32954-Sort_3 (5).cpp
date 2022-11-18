/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file P32954-Sort_3.cc
 * @author Alvaro Perez Ramos alu0101574042@ull.edu.es
 * @date Nov 17 2022
 * @brief Write a procedure
     void sort3(int& a, int& b, int& c);
to sort a, b and c in nondecreasing order. For instance, if called with a =7, b
= −3 and c = 1, the values after the call must be a =−3, b = 1 and c = 7.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P32954
 */
#include <iostream>
using namespace std;

void sort3(int &a, int &b, int &c) {
  if (a > b) {
    if (b > c) {
      swap(a, c);
    } else {
      if (c < a)
        swap(a, c);
      swap(a, b);
    }
  } else {
    if (b < c)
      ;
    else {
      if (c < a)
        swap(a, c);
      swap(c, b);
    }
  }
}
int main() {
  int x, y, z;
  while (cin >> x >> y >> z) {
    sort3(x, y, z);
    cout << x << ' ' << y << ' ' << z << endl;
  }
}
