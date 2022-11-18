/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file  ReverseNumberHexdecimal.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Oct 24 2022
 * @brief Write a program that reads a number and prints its hexadecimal
representation reversed. Follow the convention to use the letters from ‘A’ to
‘F’ to represent the values from 10 to 15. Print, reversed, the hexadecimal
representation of the number, with as many zeros at its left as required.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P60816
 */
#include <iostream>
#include<string>
#include <algorithm>

using namespace std;

int main() {
  unsigned long long int NumDec{0};

  cin >> NumDec;
  char hex[100];
    
sprintf(hex, "%llX" , NumDec); /*uso de %llx permite combertir a hexadecimal sin tener que usar calculos complejos, y el ll sirve para que n existan errores con numeros execivamente grandes.*/
  
  string NumHexaDec(hex);
reverse(NumHexaDec.begin(),NumHexaDec.end());

  cout<< NumHexaDec<< endl;
  return 0;
}