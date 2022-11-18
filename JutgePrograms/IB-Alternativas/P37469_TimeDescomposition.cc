/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file TimeDecomposition_.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Oct 22 2022
 * @brief Write a program that, given a number of seconds n, prints the number
of hours, minutes and seconds represented by n. Print three natural numbers h,
m, s such that 3600h+60m+s=n, with m<60 and s<60.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P37469
 */
#include <iostream>
using namespace std;
int main() {
  int Second=0, Minutos=0, Hora=0;
  cin >> Second;
  if (Second >=60) {
    Minutos = Second / 60;
    Second = Second % 60;
  }
  if (Minutos >=60) {
    Hora = Minutos / 60;
    Minutos = Minutos % 60;
  }
  
  cout << Hora << " " << Minutos << " " << Second << endl;
  return 0;
}
