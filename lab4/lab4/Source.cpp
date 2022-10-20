#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int i, n;
	cout << " введите число элементов массива";
	cin >> n;
	int* a = new int[n];
	cout << "массив A: ";
	for (i = 0; i < n; i++) {
		a[i] = rand() % 100;
		cout << a[i] << " ";
	}
	int x;
	cout << "Номер удаляемого элемента: ";
	cin >> x;
	for (int i = x - 1; i < n - 1; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
	int g, j;
	i = 0;
	while (i < n) {
		g = a[i - 1] + 2;
		if (a[i] % 2 == 0) {
			for (j = n; j > i; j--)
				a[j] = a[j - 1];
			n = n + 1;
			a[i + 1] = g;
			i++;
		}
		else i++;
	}
	cout << "массив без элемента с заданным номером и следущим элементом после первого четного равным M: ";
	for (i = 0; i < n; i++)
		cout << a[i] << " ";
	return(0);
}