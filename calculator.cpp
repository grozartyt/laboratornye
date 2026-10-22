#include <iostream>
#include <iomanip>
#include <windows.h>
#include <cmath>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	double num1, num2;
	char operation;
	double result;


	std::cout << "=== ПРОСТОЙ КАЛЬКУЛЯТОР ===" << std::endl;
	std::cout << std::endl;

	std::cout << "Обозначения операций:" << std::endl;
	std::cout << "+ = Сложение" << std::endl;
	std::cout << "- = Вычитание" << std::endl;
	std::cout << "* = Умножение" << std::endl;
	std::cout << "/ = Деление" << std::endl;
	std::cout << "| = Остаток от деления" << std::endl;
	std::cout << "^ = Возведение числа в степень" << std::endl;
	std::cout << "r = Извлечение квадратных корней двух чисел" << std::endl;
	std::cout << "% = Вычисление процента от числа" << std::endl;

	std::cout << std::endl;
	std::cout << "Введите первое число: ";
	std::cin >> num1;

	std::cout << "Введите операцию (+, -, *, /, |, ^, r, %): ";
	std::cin >> operation;

	std::cout << "Введите второе число: ";
	std::cin >> num2;


	bool valid = true;

	if (operation == '+') {
		result = num1 + num2;
	}
	else if (operation == '-') {
		result = num1 - num2;
	}
	else if (operation == '*') {
		result = num1 * num2;
	}
	else if (operation == '/') {
		if (num2 != 0) {
			result = num1 / num2;
		}
		else {
			std::cout << std::endl;
			std::cout << "Ошибка: деление на ноль!" << std::endl;
			valid = false;
		}
	}
	else if (operation == '|') {
		int int1 = static_cast<int>(num1);
		int int2 = static_cast<int>(num2);
		if (int2 != 0) {
			result = int1 % int2;
		}
		else {
			std::cout << std::endl;
			std::cout << "Ошибка: деление на ноль!" << std::endl;
			valid = false;
		}
	}
	else if (operation == '^') {
			result = pow(num1, num2);
	}
	else if (operation == 'r') {
		if (num1 > 0 && num2 > 0) {
			result = sqrt(num1);
			std::cout << std::endl << "Квадратный корень числа " << num1 << " = " << result << std::endl;
			result = sqrt(num2);
			std::cout << "Квадратный корень числа " << num2 << " = " << result << std::endl;
		}
		else {
			std::cout << std::endl << "Ошибка: корень из отрицательного числа не существует!" << std::endl;
		}
		valid = false;
	}
	else if (operation == '%') {
		result = num1 * num2 / 100.0;
		std::cout << std::endl << num1 << " " << operation << " " << num2
			<< " = " << result << std::endl;
		valid = false;
	}
	else {
		std::cout << std::endl;
		std::cout << "Ошибка: неизвестная операция!" << std::endl;
		valid = false;
	}


	if (valid) {
		std::cout << std::endl;
		std::cout << std::fixed << std::setprecision(2);
		std::cout << num1 << " " << operation << " " << num2
			<< " = " << result << std::endl;
	}


	std::cout << std::endl;
	std::cout << "=== ДЕМОНСТРАЦИЯ ОСОБЕННОСТЕЙ ===" << std::endl;

	// Целочсленное и вещественное деление
	std::cout << std::endl << "Деление 7 / 2:" << std::endl;
	std::cout << " int / int = " << (7 / 2) << std::endl;
	std::cout << " double / int = " << (7.0 / 2) << std::endl;

	// Остаток от деления
	std::cout << std::endl << "Остаток от деления:" << std::endl;
	std::cout << " 10 | 3 = " << (10 % 3) << std::endl;
	std::cout << " 15 | 5 = " << (15 % 5) << std::endl;

	// Инкремент
	int x = 5;
	std::cout << std::endl << "Инкремент (x = 5):" << std::endl;
	std::cout << " ++x = " << (++x) << ", после x = " << x << std::endl;
	x = 5;
	std::cout << " x++ = " << (x++) << ", после x = " << x << std::endl;

	//Приоритет операций
	std::cout << std::endl << " Приоритет операций:" << std::endl;
	std::cout << " 2 + 3 * 4 = " << (2 + 3 * 4) << " (умножение первым)" << std::endl;
	std::cout << " (2 + 3) * 4 = " << ((2 + 3) * 4) << std::endl;

	return 0;
}