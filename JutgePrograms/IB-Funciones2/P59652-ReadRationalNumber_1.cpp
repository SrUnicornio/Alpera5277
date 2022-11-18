/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file P59652-ReadRationalNumber_1.cc
 * @author Alvaro Perez Ramos alu0101574042@ull.edu.es
 * @date Nov 17 2022
 * @brief Write a procedure
     void read_rational(int& num, int& den);
to read a rational number given in the form “numerator”/“denominator”, and store
these two values in num and den, respectively. Additionally, you must remove all
common factors from num and den.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P59652
 */
#include <algorithm>
#include <iostream>
using namespace std;

void read_rational(int &num, int &den) {
  char c;
  cin >> num >> c >> den;
  int x = __gcd(num, den);
  num = num / x;
  den = den / x;
}

int main() {
  int numerador{0}, denominador{0};
  while (cin >> numerador >> denominador) {
    read_rational(numerador, denominador);
  }
}