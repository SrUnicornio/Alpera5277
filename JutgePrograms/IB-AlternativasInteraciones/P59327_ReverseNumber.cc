/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file  ReberseNumber.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Oct 23 2022
 * @brief Write a program that reads a number and prints it reversed.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P5
 */
#include <iostream>
#include <math.h>
using namespace std;

int main() {
  long long int Num1, NumDigitosinicial, invertido = 0, resto, NumDigitosfinal;
  cin >> Num1;

  while (Num1 < 0) {
    cin >> Num1;
  }

  while (Num1 != 0) {
    resto = Num1 % 2;
    Num1 = Num1 / 2;
    invertido = invertido * 10 + resto;
  }
cout <<invertido<<endl;
  return 0;
  }