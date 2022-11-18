/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file SumSquares.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Oct 22 2022
 * @brief Write a program that reads a natural number n, and prints the result
 of the following sum:

    1^2 + 2^2 + … + (n−1)^2 + n^2 .

 * @bug There are no known bugs
 * @see https://jutge.org/problems/P36668
 */
#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int Num1, j = 0, i = 0; // J rasultado, i variable que es potenciada
  cin >> Num1;

  while (Num1 < 0) {
    if (Num1 < 0) {
      cin >> Num1;
    }
  }
  //∑i=1^n i^2.

  do {

    j = pow(i, 2) + j;
    i++;
  } while (i <= Num1);

  cout << j << endl;
  return 0;
}