/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file ComputingAreas.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Oct 24 2022
 * @brief Write a program that reads several descriptions of rectangles and
circles, and for each one prints its corresponding area.

For each description, print its area with 6 digits after the decimal point.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P59539
 */
#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    unsigned int numero_de_figuras{0};
    cin >> numero_de_figuras;
    if(numero_de_figuras == 0) {
        return 0;
    }
  
  const double pi = atan(1)*4;
    string figura;
    double altura{0}, base{0}, radio{0};
  
    for (int i = 0; i < numero_de_figuras; i++) {
        cin >> figura;
        if (figura == "rectangle") {
            cin >> altura >> base;
            cout << fixed << setprecision(6)<< altura*base << std::endl;
        }
        else if (figura == "circle") {
            cin >> radio;
            cout << fixed << setprecision(6)<< pi * pow(radio,2) << std::endl;
        }
    }
    return 0;
}