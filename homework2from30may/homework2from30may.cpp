// homework2from30may.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;

#include <iostream>

int main()
{
	int sell1, sell2, sell3, best,temp;
	float salary1, salary2, salary3;
	cout << "  1 selling ";
	cin >> sell1;
	cout << "  2 selling ";
	cin >> sell2;
	cout << "  3 selling ";
	cin >> sell3;

	if (sell1 < 300) {
		salary1 = 200 + sell1 * 0.05;
	}
	else if ((sell1 >= 300) && (sell1 < 500)) {
		salary1 = 200 + sell1 * 0.08;
	}
	else {
		salary1 = 200 + sell1 * 0.1;
	}
	if (sell2 < 300) {
		salary2 = 200 + sell2 * 0.05;
	}
	else if ((sell2 >= 300) && (sell2 < 500)) {
		salary2 = 200 + sell2 * 0.08;
	}
	else {
		salary2 = 200 + sell2 * 0.1;
	}
	if (sell3 < 300) {
		salary3 = 200 + sell1 * 0.05;
	}
	else if ((sell3 >= 300) && (sell3 < 500)) {
		salary3 = 200 + sell3 * 0.08;
	}
	else {
		salary3 = 200 + sell3 * 0.1;
	}
	cout <<"find best seller\n";

	if (sell1 > sell2) {
		best = 1;
		temp = best;
		
	}
	else if (sell2 > sell1) {
		best = 2;
		temp = best;

	}

	 if ( sell3 > temp) {
		best = 3;
	}

	switch ( best ) {
	case 1:
		salary1 = salary1 + 200;
		break;
	case 2:
		salary2 = salary2 + 200;
		break;
	case 3:
		salary3 = salary3 + 200;
		break;

	}
	cout << "best manager" << best << "\n";
	cout << "1 salary" << salary1 << "\n";
	cout << "2 salary" << salary2 << "\n";
	cout << " 3 salary" << salary3 << "\n";
	return 0;

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
