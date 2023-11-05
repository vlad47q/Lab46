// Lab46.cpp
// Скоропад Владислав
// Лабораторна робота № 4.
// Вкладені цикли.
// Варіант 11

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int nStart = 1, lim = 25, kStart = 1;
	double sum, mtp;



	int n = nStart, k = kStart;
	sum = 0;
	while (n <= lim){
		mtp = 1;
		k = kStart;
		while (k <= n) {
			mtp *= sqrt(pow(cos(k + n), 2));
			k++;
		}
		sum += cos(n) + mtp;
		n++;
	}
	cout << sum << endl;



	n = nStart, k = kStart;
	sum = 0;
	do
	{
		mtp = 1;
		k = kStart;
		do
		{
			mtp *= sqrt(pow(cos(k + n), 2));
			k++;
		} while (k <= n);
		sum += cos(n) + mtp;
		n++;
	} while (n <= lim);
	cout << sum << endl;



	sum = 0;
	for (n = nStart; n <= lim; n++) {
		mtp = 1;
		for (k = kStart; k <= n; k++) {
			mtp *= sqrt(pow(cos(k + n), 2));
		}
		sum += cos(n) + mtp;
	}
	cout << sum << endl;



	sum = 0;
	for (n = lim; n >= nStart; n--) {
		mtp = 1;
		for (k = n; k >= kStart; k--) {
			mtp *= sqrt(pow(cos(k + n), 2));
		}
		sum += cos(n) + mtp;
	}
	cout << sum << endl;
	
	return 0;
}
