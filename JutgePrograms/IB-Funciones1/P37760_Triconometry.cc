/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file  Trigonometry.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Nov 4 2022
 * @brief Write a program that reads a sequence of angles in degrees, and prints
 * their sine and their cosine.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P377760 */
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  double angulo;
  double seno;
  double coseno;
  const double pi=atan(1)*4;
  while (cin >> angulo) {
    seno = sin(angulo/180*pi);
    coseno = cos(angulo/180*pi);
    cout << fixed << setprecision(6) << seno << " " << coseno << endl;
  }
  return 0;
}