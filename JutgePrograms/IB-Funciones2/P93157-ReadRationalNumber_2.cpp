/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file P93157-ReadRationalNumber_2.cc
 * @author Alvaro Perez Ramos alu0101574042@ull.edu.es
 * @date Nov 17 2022
 * @brief Write a procedure
     bool read_rational(int& num, int& den);
 *that tries to read a rational number given in the form
 “numerator”/“denominator”, and stores these two values in num and den,
 respectively. Additionally, you must remove all common factors from num and
 den. Furthermore, if the input had a rational number, you must return true;
 otherwise you must returna false.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P93157
 */
#include <algorithm>
#include <iostream>
using namespace std;

bool read_rational(int &num, int &den) {
  char c;
  if (cin >> num >> c >> den) {
    int x = __gcd(num, den);
    num = num / x;
    den = den / x;
    return true;
  }
  return false;
}

int main() {
  int numerador{0}, denominador{0};
  while (cin >> numerador >> denominador) {
    while (read_rational(numerador, denominador)) {
      cout << numerador <<" "<< denominador << endl;
    }
  }
}