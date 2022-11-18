/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file CorrectDates.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Oct 25 2022
 * @brief Write a program that reads several descriptions of rectangles and
circles, and for each one prints its corresponding area.

For each description, print its area with 6 digits after the decimal point.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P29448
 */

#include <iostream>
using namespace std;

bool Bisiesto(const int &year) {
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    return true;
  }
  return false;
}

bool Fecha(const int &dia, const int &mes, const int &anio) {
  if (dia < 1 || mes < 1 || anio < 1800 || anio > 9999 || mes > 12 ||
      dia > 31) {
    return false;
  }
  if (!Bisiesto(anio) && mes == 2 && dia > 28) {
    return false;
  }
    if (mes == 2 && dia > 29) {
        return false;}
  if ((mes > 7 && mes % 2 != 0 && dia > 30) ||
      (mes <= 7 && mes % 2 == 0 && dia > 30)) {
    return false;
  }
  return true;
}
int main() {
  int dia{0}, mes{0}, anio{0};
  while (cin >> dia >> mes >> anio) {
    if (!Fecha(dia, mes, anio)) {
      cout << "Incorrect Date" << endl;
      continue;
    }
    cout << "Correct Date" << endl;
  }
  return 0;
}