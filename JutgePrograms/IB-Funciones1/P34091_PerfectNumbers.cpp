/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file P34091_PerfectNumbers.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Nov 7 2022
 * @brief Write a function that tells if a natural n is perfect.
 * @bug There are no known bugs
 * @see https://kfactorialutge.org/problems/P34091
 */
#include <iostream>
using namespace std;

bool is_perfect(int n) {
  int divisor{1};
  for (int i{2}; i * i <= n; ++i) {
    if (n % i == 0)
      divisor += i + n / i;
  }
  if (divisor == n && n!=0 && n!=1) {
    return true;
  }
  return false;
}

int main() {
  int numero;
  while (cin >> numero) {
    cout << "is_perfect(" << numero << ") → ";
    if (is_perfect(numero) == 1) {
      cout << "true" << endl;
    } else {
      cout << "false" << endl;
    }
  }
}