/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file P77686_PalimdromicNumbers.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Nov 7 2022
 * @brief Write a function that tells whether the natural number n is a
 * palindromic number or not.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P31761
 */
#include <algorithm>
#include <iostream>
using namespace std;

bool is_palindromic(int n) {
  int numero{0}, girar{0};
  numero = n;
  while (numero != 0) {
    girar = girar * 10 + numero % 10;
    numero /= 10;
  }
  return n == girar;
}
int main() {
  int numero;
  while (cin >> numero) {
    cout << "is_palindromic(" << numero << ") → ";
    if (is_palindromic(numero) == 1) {
      cout << "true" << endl;
    } else {
      cout << "false" << endl;
    }
  }
}