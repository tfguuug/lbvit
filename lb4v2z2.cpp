#include <iostream>
#include <bitset>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int x;
	cout << "Введите целое число: ";
	cin >> x;
	cout << "Число: " << bitset<16>(x) << '\n';
	for (unsigned short i = 0; i < 16; i ++) {//создание маски для каждого бита
		if ((x & (3 << i)) == (1 << (i+1)))//Проверка с помощью маски
			x = (x | (3 << i));
	}
	cout << "Новое число: " << bitset<16>(x) << '\n';
	return 0;
}