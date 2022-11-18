/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file HowManySec_.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Oct 21 2022
 * @brief Write a program that converts to seconds a given amount of years, days, hours, minutes and seconds. 
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P70955
 */
#include <iostream>
using namespace std;
int main() {
int ayo, dia, hora, minuto,segundo;
  cin >> ayo >>dia>>hora >>minuto >>segundo;
cout <<(ayo*365*24*3600)+(dia*24*3600)+(hora*3600)+(minuto*60)+(segundo) <<endl;
  return 0;
}