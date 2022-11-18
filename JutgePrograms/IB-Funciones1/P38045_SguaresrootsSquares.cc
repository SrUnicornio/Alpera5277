/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file SguaresrootsAndSquares.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Oct 28 2022
 * @brief Write a program that reads a sequence of natural numbers, and prints
 *the square and the square root of each one. For every given number, print in a
 *line its square, and its square root with six digits after the decimal point.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P38045
 */
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  unsigned int numero{0};
  int cuadrado{0};
  int i{0};
  double raizcuadrada{0};
  while (cin >> numero) {
    cuadrado = pow(numero, 2);
    raizcuadrada = sqrt(numero);
      cout << cuadrado << " " << fixed << setprecision(6) << raizcuadrada
           << endl;
    }
  return 0;
}