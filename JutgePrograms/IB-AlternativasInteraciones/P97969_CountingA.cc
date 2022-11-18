/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file  CountingA.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Oct 23 2022
 * @brief Write a program that reads a sequence of characters ended with a
period and prints the number of letters ‘a’ in the sequence.

Print the number of times that ‘a’ appears in the sequence.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P97969 */

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int contador(string frase, char letra_a){
 return count(frase.begin(), frase.end(), letra_a);
  }
int main(void){
string input;

  getline(cin, input);

cout << contador(input, 'a') <<endl;

  return 0;
}
