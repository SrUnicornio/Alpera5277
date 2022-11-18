/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file Maximo of three integer numbers.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Oct 22 2022
 * @brief Write a program that reads three numbers, all different, and prints
 * their maximum. Write a program that reads three numbers, all different, and
 * prints their maximum.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P90615
 */
#include <iostream>
using namespace std;
int main() {
  long long int Num1, Num2, Num3;
  // Pide números por teclado
  cin >> Num1 >> Num2 >> Num3;

  // Averigua el valor máximo de los valores pedidos
  if ((Num1 > Num2) and (Num1 > Num3)) {
    cout << Num1 << endl;
  } else if ((Num2 > Num1) and (Num2 > Num3)) {
    cout << Num2 << endl;
  } else if ((Num3 > Num1) and (Num3 > Num2)) {
    cout << Num3 << endl;
  } else if ((Num1 == Num2) or (Num1 == Num3) or (Num2 == Num3)) {
    if ((Num1 == Num3) or (Num1 == Num2)) {
      cout << Num1 << endl;
    } else if (Num2 == Num3) {
      cout << Num3 << endl;
    }
  }
  return 0;
}