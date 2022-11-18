/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file P73231_Max4Numbers.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Nov 4 2022
 * @brief Write a function that returns the maximum of four given integer
 * numbers a, b, c and d.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P73231
 */
#include <algorithm>
#include <iostream>
using namespace std;

int max4(int a, int b, int c, int d);
int main() {
  int numero1{0}, numero2{0}, numero3{0}, numero4{0};
  while (cin >> numero1 >> numero2 >> numero3 >> numero4) {
    cout << "max4(" << numero1 << ", " << numero2 << ", " << numero3<< ", " << numero4<< ") → "
         << max4(numero1, numero2, numero3, numero4) << endl;
  }
  return 0;
}
int max4(int a, int b, int c, int d) { return max(max(a, b), max(c, d)); }