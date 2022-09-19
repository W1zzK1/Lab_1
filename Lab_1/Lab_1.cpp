#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cin >> a >> b; //Ввод двух катетов
	int aa = ((a * a) + (b * b)); //Вычтсление суммы квадратов катетов
	c = sqrt(aa); //Вичисление корня из гипотенузы
	cout << c << " " << "Гипотенуза" << endl;
	int p = a + b + c;
	cout << p << " " << "Периметр";
	return 0;
}