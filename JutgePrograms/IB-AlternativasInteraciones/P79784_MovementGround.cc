/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file  MovementGround.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Oct 24 2022
 * @brief Write a program that reads a sequence of characters, each one
codifying a movement (‘n’ for north, ‘s’ for south, ‘e’ for east, and ‘w’ for
west), and that computes the final position of an object initially located at
(0, 0). Suppose that the first component corresponds to the east-west direction,
that going est means adding 1 to that component, and that going south means
adding 1 to the second component.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P79784
 */

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int contador(string frase, char letra) {
  return count(frase.begin(), frase.end(), letra);
}
int main(void) {
  string input;

  int n, s, w, e; //‘n’ for north, ‘s’ for south, ‘e’ for east, and ‘w’ for west
  getline(cin, input);

  n = contador(input, 'n');
  s = contador(input, 's');
  w = contador(input, 'w');
  e = contador(input, 'e');

  cout << "(" << e - w << ", " << s - n << ")" << endl;
  return 0;
}