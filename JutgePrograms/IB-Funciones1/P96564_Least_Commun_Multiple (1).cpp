/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería year Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file P96564_Least_Commun_Multiple.cc
 * @author Alvao Perez Ramos alu0101574042@ull.edu.es
 * @date Nov 7 2022
 * @brief Write a program such that, given n strictly positive natural numbers x1 … xn, prints their least common multiple greater than zero.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P99564
 */

#include<iostream>
using namespace std;
 
long int mcd(long int n1, long int n2) {
    if(n1 < n2) return mcd(n2,n1);
    if(n2 == 0) return n1;
    return mcd(n2, n1 % n2);
}
 
long int mcm(long int n1, long int n2) {
    long int producto = (n1*n2)/mcd(n1,n2);
    return producto;
}

int main() {
    long int numero1;
    long int numero2;
    while (cin >> numero2) {
        long int producto = 1;
        if (numero2 == 0);
        else {
            int i = 0;
            while (i < numero2) {
                cin >> numero1;
                producto = mcm(producto, numero1);
                i++;
            }
            cout << producto << endl;
        }
    }
}