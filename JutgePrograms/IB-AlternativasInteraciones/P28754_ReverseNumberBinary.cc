/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file  ReverseNumberBinary.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Oct 23 2022
 * @brief Write a program that reads a number and prints its binary
representation reversed. Print, reversed, the binary representation of the
number, with as many zeros at its left as required.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P28754
 */
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  long long int Num1;
  string binario = "";
  cin >> Num1;
//comprobamso que sea superior a cero, en caso de ser 0 el resultado es 0
  while (Num1 < 0) {
    cin >> Num1;
  }
  if (Num1 == 0) {
    binario = "0";
  }
//calculamos cómo es en sistema binario
  while (Num1 > 0) {
    if (Num1 % 2 == 0) {
      binario = "0" + binario;
    } else {
      binario = "1" + binario;
    }
    Num1 = Num1 / 2;
  }

  reverse(binario.begin(), binario.end());
  cout <<binario<<endl;
}
