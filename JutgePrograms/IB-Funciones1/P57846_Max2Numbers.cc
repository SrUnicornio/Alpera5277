/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file P57846_Max2Numbers.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Nov 4 2022
 * @brief Write a function that returns the maximum of two given integer numbers
 * a and b.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P57846
 */
#include <algorithm>
#include <iostream>
using namespace std;

int max2(int a, int b);
int main() {
  int numero1, numero2;
  while (cin >> numero1 >> numero2) {
    cout << "max2(" << numero1 << ", " << numero2 << ") → "
         << max2(numero1, numero2) << endl;
    }
  return 0;
  }
    int max2(int a, int b) { return max(a, b); }