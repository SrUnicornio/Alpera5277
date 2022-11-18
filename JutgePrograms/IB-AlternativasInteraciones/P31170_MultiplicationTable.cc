/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file  MultiplicationTable.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Oct 23 2022
 * @brief Write a program that reads a number n and prints the “multiplication
table” of n. Print the “multiplication table” of n.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P31170
 */
#include <iostream>
using namespace std;
int main() {
  int Tabla, i = 1;
  cin >> Tabla;
  while (Tabla < 0) {
    cin >> Tabla;
  }

  do {
   printf("%d%s%d%s%d\n",Tabla, "*",i, " = ", Tabla*i);
    i++;
  } while (i <= 10);
  return 0;
}