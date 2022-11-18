/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file P57852_Greatest_common_divisor_of_four.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Nov 7 2022
 * @brief Write an iterative function that computes the greatest common divisor
 * of two natural numbers a and b using the fast version of the Euclidean
 * algorithm.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P88790
 */
#include <iostream>
using namespace std;
int gcd(int a, int b) {
  if (a < b)
    return gcd(b, a);
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
int gcd4(int a, int b, int c, int d) { return gcd(a, gcd(b, (gcd(c, d)))); }

int main() {
  long int numero1, numero2, numero3, numero4;
  while (cin >> numero1 >> numero2 >> numero3 >> numero4) {
    cout << "gcd(" << numero1 << ", " << numero2 << ") → "
         << gcd4(numero1, numero2, numero3, numero4) << endl;
  }
  return 0;
}