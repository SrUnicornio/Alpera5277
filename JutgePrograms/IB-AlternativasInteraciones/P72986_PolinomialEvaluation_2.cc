/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file PolinomialEvaluation_1.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Nov 2 2022
 * @brief Write a program that reads a number x and a polynomial p(z) = c0 z0 + c1 z1 + ⋯ + cn zn, and computes p(x).

Print p(x) with 4 digits after the decimal point.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P96767
 */
#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    double numero{0}, base{0}, total{0.0};
    int coeficiente{0};
    cin >> base;
    vector<double> numeros;
    while (cin >> numero) {
        numeros.push_back(numero);
        coeficiente++;
    }
    for (int i = 0; i < coeficiente; i++) {
        total += numeros[i] * pow(base, coeficiente - i - 1);
    }
    cout << fixed << setprecision(4) << total << endl;

    return 0;
}