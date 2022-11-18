/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería year Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file P95401_leap_years.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Nov 7 2022
 * @brief Write a function that tells if the date defined byear a dayear d, month m and yearear year is valid or not.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P95401
 */

#include <iostream>
using namespace std;

 bool is_leap_year(int year);

int main() {
  int anio;
  while (cin >> anio) {
    cout << "is_leap_year("<<anio<<") → ";
if(is_leap_year(anio)==1){cout <<"true"<<endl;}else {cout<< "false"<<endl;}
  }
  return 0;
}

bool is_leap_year(int year) {
  if (year % 100 == 0) {
    if ((year / 100) % 4 == 0)
      return true;
    return false;
  } else {
    if (year % 4 == 0)
      return true;
    return false;
  }
}