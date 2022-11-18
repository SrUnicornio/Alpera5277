/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file P48107.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Oct 18 2022
 * @brief The program reads two natural numbers a and b, with b > 0, and prints
 *        the integer division d and the remainder r of a divided by b.
 *        By definition, d and r must be the only integer numbers such that
 * 0=<r<b and db+r=a.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P48107
 */
#include <iostream>
using namespace std;
int main() {

  long Num1, Num2;

  cin >> Num1 >> Num2;

  while (Num2 <= 0) {
    cin >> Num2;
  }

  cout << Num1 / Num2 << " " << Num1 % Num2 << endl;
  return 0;
}
