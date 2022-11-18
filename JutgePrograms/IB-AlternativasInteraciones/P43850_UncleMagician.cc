/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file P43850_UncleMagician.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Nov 4 2022
 * @brief Emulate Uncle Ernie and write a magical program that guesses the number that the computer thinks
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P43850
 */
#include <iostream>
using namespace std;

int main() {
    unsigned int num{0}, result{0};
    while(cin >> num) {
        result = (((((num/5)-9)/4)-6)/5);
        cout << result << endl;
    }
    return 0;
}