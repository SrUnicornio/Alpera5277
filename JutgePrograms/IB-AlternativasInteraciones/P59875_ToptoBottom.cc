/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file TomtoButtom.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Oct 22 2022
 * @brief Write a program that reads two numbers x and y, and prints all numbers
 *between x and y (or between y and x), in decreasing order. Print all integer
 *numbers between x and y (or between y and x), in decreasing order.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P59875
 */
#include <iostream>
using namespace std;
int main() {
  int Num1, Num2;

  cin >> Num1 >> Num2;

  if (Num1 == Num2) {
    cout << Num1 << endl;
    return 0;
  }

  if (Num2 > Num1) {
    do {
      cout << Num2 << endl;
      Num2 = Num2 - 1;
    } while (Num2 != Num1);
    cout << Num1 << endl;
  } else {
    do {
      cout << Num1 << endl;
      Num1 = Num1 - 1;
    } while (Num1 != Num2);
    cout << Num2 << endl;
  }

  return 0;
}
