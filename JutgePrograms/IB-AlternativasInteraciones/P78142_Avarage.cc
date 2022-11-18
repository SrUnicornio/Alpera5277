/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file Avarage.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Oct 24 2022
 * @brief Write a program that reads a sequence of numbers and prints their
average.

Print the average of the numbers with 2 digits after the decimal point.
 * @bug There are no known bugs
 * @see //https:jutge.org/problems/P78142*/
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  double numero{0}, sumatoria{0};
  int i{0};
  while (cin >> numero) {
    sumatoria += numero;
    i++;
  }
  cout << fixed << setprecision(2) << sumatoria / i << endl;
}