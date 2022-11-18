/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file PolinomialEvaluation_1.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Nov 2 2022
 * @brief Write a program that, given an amount of euros and cents, computes the
 * minimum number of banknotes and coins needed to get that amount. There are
 * coins of 1, 2, 5, 10, 20 and 50 cents and of 1 and 2 euros, and banknotes of
 * 5, 10, 20, 50, 100, 200 and 500 euros.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P96767
 */
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
 double numero{0}, base{0}, total{0.0};
    int coeficiente{0};
    cin >> base;
    while (cin >> numero) {
        total = (numero * pow(base,coeficiente)) + total;
        coeficiente++;
    }
    cout << fixed << setprecision(4) << total << endl;

    return 0;
}