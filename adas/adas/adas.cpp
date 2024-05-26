#include "stdio.h"
#include <iostream>
#include <time.h>

const int N = 100;

//tablica statyczna 
int calculateSumOfMatrix(int matrix[N]) {
	int suma = 0;
	for (int i = 0; i < N; i++) {
		suma += matrix[i];
	}
	return suma;
}

//tablica statyczna 
int calculateEvenNumberSumOfMatrix(int matrix[N]) {
	int suma = 0;
	for (int i = 0; i < N; i++) {
		if (matrix[i] % 2 == 0) {
			suma += matrix[i];
		}
	}
	return suma;
}

int isPrimeNumber(int chekedNumber) {
	int result = 1;
	int guard = sqrt(chekedNumber);
	for (int i = 2; i <= guard; i++) {
		if (chekedNumber % i == 0) {
			result = 0;
			return result;
		}
	}
	return result;
}

//tablica statyczna 
int calculatePrimeNumberSumOfMatrix(int matrix[N]) {
	int suma = 0;
	for (int i = 0; i < N; i++) {
		if (isPrimeNumber(matrix[i]) == 1) {
			suma += matrix[i];
		}
	}
	return suma;
}





int funkcja(int a, int b) {
	for (int i = 0; i < b; i++) {
		a = a + b;
		//10+20
			//30+20
			//50+20
			//70+20
			//90+20
	}
	return a;
}

int silnia(int liczba) {
	if (liczba == 0) {
		return 1;
	}
	else {
		return liczba * silnia(liczba - 1);
	}
}

int silniaIter(int liczba) {
	int wynik = 1;
	if (liczba == 0) {
		wynik = 1;
	}
	else {
		for (int i = 0; i < liczba; i++) {
			wynik = wynik * (i + 1);
		}
	}
	return wynik;
}

int NWDI(int a, int b)
{
	while (a != b)
		if (a > b)
			a -= b; //lub a = a - b;
		else
			b -= a; //lub b = b-a
	return a; // lub b - obie zmienne przechowują wynik NWD(a,b)
}

int NWDR(int a, int b)
{
	if (a != b)
		return NWDR(a > b ? a - b : a, b > a ? b - a : b);
	return a;
}


int fib(int x) {
	if ((x == 1) || (x == 0)) {
		return(x);
	}
	else {
		return(fib(x - 1) + fib(x - 2));
	}
}

void printMatrixToScreen(int table[N]) {
	for (int i = 0; i < N; i++) {
		std::cout << "matrix[" << i << "]=" << table[i] << std::endl;
	}
}



void main() {

	srand(time(NULL));
	int tablica[N];

	for (int i = 0; i < N; i++) {
		tablica[i] = rand();
	}

	printMatrixToScreen(tablica);
	std::cout << "Suma elementow:" << calculateSumOfMatrix(tablica) << std::endl;
	std::cout << "Suma parzystych elementow:" << calculateEvenNumberSumOfMatrix(tablica) << std::endl;
	std::cout << "Suma pierwszych elementow:" << calculatePrimeNumberSumOfMatrix(tablica) << std::endl;


	/*
	printf("wynik działania:%d\n", funkcja(10,20) );

	int wynik = funkcja (10,20);
	printf("wynik działania:%d\n", wynik);


	printf("Silnia Rekurencyjnie=:%d\n", silnia (8));
	printf("Silnia Iteracyjnie=:%d\n", silniaIter(8));

	printf("NWDR=%d\n", NWDR(20,5));
	printf("NWDI=%d\n", NWDI(20,5));

	printf("FIBB=%d\n", fib(100));
	*/

}