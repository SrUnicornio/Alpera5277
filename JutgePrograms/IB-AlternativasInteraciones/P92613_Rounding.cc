/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file Rounding.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Nov 2 2022
 * @brief Write a program that reads a real number x≥0 and prints ⌊ x ⌋ (the floor of x), ⌈ x ⌉ (the ceiling of x), and the rounding of x.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P9613
 */
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  double numero;
  int redondeobajo, redondeoalto, redondeo;
  cin >> numero;
  redondeoalto = ceil(numero);
  redondeobajo = floor(numero);
  redondeo = round(numero);

  cout << redondeobajo << " " << redondeoalto << " " << redondeo << endl;
}