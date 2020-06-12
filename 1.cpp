#include <iostream>
#include <time.h>

using namespace std;

void view(const int*, int); //оголошення функції
void createVect(int*&, int); //оголошення функції

//функція для відображення елементів масиву
void view(const int* X, int size) {
	cout << "Масив " << endl;
	for (int i = 0; i < size; i++) {
		cout << X[i] << '\t';
	}
	cout << endl << endl;
}

//функція, що заповнює масив випадковими значеннями
void createVect(int*& X, int size) {
	srand((time(NULL)));
	for (int i = 0; i < size; i++)
		X[i] = rand() % 20 - 10;
}


void arr(int*& X, int size)
{
	int elem = 1;
	for (int i = 0; i < size; i++)
	{
		cout << "Задайте " << elem << "-й елемент: ";
		cin >> X[i];
		cout << endl;
		elem++;
	}
}


int main() {
	setlocale(LC_CTYPE, "ukr");

	int n;
	int* pA, * pB;
	cout << "Задайте кiлькiсть елементiв -> ";
	cin >> n;
	pA = new int[n]; //виділення пам’яті
	createVect(pA, n); //виклик функції створення масиву кількістю елементів n
	view(pA, n); // виклик функції виведення елементів масиву на екран
	//pA вказівник на масив, n кількість елементів
	//Створення іншого масиву
	cout << "Задайте кiлькiсть елементiв -> ";
	cin >> n;
	pB = new int[n];
	arr(pB, n);
	view(pB, n);
	delete[]pA; //очистка пам’яті
	delete[]pB;
	//system("pause");
	return 0;
}