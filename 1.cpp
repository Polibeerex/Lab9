#include <iostream>
#include <time.h>

using namespace std;

void view(const int*, int); //���������� �������
void createVect(int*&, int); //���������� �������

//������� ��� ����������� �������� ������
void view(const int* X, int size) {
	cout << "����� " << endl;
	for (int i = 0; i < size; i++) {
		cout << X[i] << '\t';
	}
	cout << endl << endl;
}

//�������, �� �������� ����� ����������� ����������
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
		cout << "������� " << elem << "-� �������: ";
		cin >> X[i];
		cout << endl;
		elem++;
	}
}


int main() {
	setlocale(LC_CTYPE, "ukr");

	int n;
	int* pA, * pB;
	cout << "������� �i���i��� �������i� -> ";
	cin >> n;
	pA = new int[n]; //�������� �����
	createVect(pA, n); //������ ������� ��������� ������ ������� �������� n
	view(pA, n); // ������ ������� ��������� �������� ������ �� �����
	//pA �������� �� �����, n ������� ��������
	//��������� ������ ������
	cout << "������� �i���i��� �������i� -> ";
	cin >> n;
	pB = new int[n];
	arr(pB, n);
	view(pB, n);
	delete[]pA; //������� �����
	delete[]pB;
	//system("pause");
	return 0;
}