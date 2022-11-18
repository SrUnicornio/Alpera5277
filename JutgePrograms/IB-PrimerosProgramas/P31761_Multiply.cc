/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file integer_division_and_reminder.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Oct 22 2022
 * @brief Write a program that computes the product of two given natural
 * numbers.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P31761
 */
#include <iostream>
using namespace std;

int main() {
  long long int Num1, Num2, producto;

  cin >> Num1 >> Num2;

  producto = Num1 * Num2;

  if ((producto < 0) and ((Num1 > 0 && Num2 > 0) || (Num1 < 0 && Num2 < 0))) {
    producto = producto * -1;
  } else if ((producto > 0) and
             ((Num1 > 0 && Num2 < 0) || (Num1 > 0 && Num2 < 0))) {
    producto = producto * -1;
  }
  cout << producto << endl;

  return 0;
}
