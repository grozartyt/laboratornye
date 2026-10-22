#include <iostream>

int main() {
	system("chcp 65001 > nul");
	//Константы
	const int CURRENT_YEAR = 2026;
	const int CURRENT_MONTH = 10;
	const int CURRENT_DAY = 18;
	const int RETIREMENT_AGE = 65;
	const int ADULT_AGE = 18;
	const int DRIVING_AGE = 18;

	//Данные пользователя
	int birthYear = 2009;
	int birthMonth = 8;
	int birthDay = 13;

	//Вычисления
	int age = CURRENT_YEAR - birthYear;
	int month = CURRENT_MONTH - birthMonth;
	int day = CURRENT_DAY - birthDay;
	int yearsToRetirement = RETIREMENT_AGE - age;
	if (day < 0) {
		month = month - 1;
		day = day + 30;
	}
	if (month < 0) {
		age = age - 1;
		month = month + 12;
	}
	bool isAdult = (age >= ADULT_AGE);
	bool canDrive = (age >= DRIVING_AGE);

	//Вывод результатов
	std::cout << "=== КАЛЬКУЛЯТОР ВОЗРАСТА ===" << std::endl;
	std::cout << std::endl;

	std::cout << "Дата рождения: " << birthDay << "." << birthMonth << "." << birthYear << std::endl;
	std::cout << "Текущая дата: " << CURRENT_DAY << "." << CURRENT_MONTH << "." << CURRENT_YEAR << std::endl;
	std::cout << "Ваш возраст: " << age << " лет " << month << " месяцев " << day << " дней" << std::endl;
	std::cout << std::endl;

	std::cout << "Совершеннолетний: " << (isAdult ? "Да" : "Нет") << std::endl;
	std::cout << "Может водить: " << (canDrive ? "Да" : "Нет") << std::endl;
	std::cout << "До пенсии: " << yearsToRetirement << " лет" << std::endl;

	//Информация об используемой памяти
	std::cout << std::endl;
	std::cout << "--- Используемая память ---" << std::endl;
	std::cout << "birthYear (int): " << sizeof(birthYear) << " байт" << std::endl;
	std::cout << "age (int): " << sizeof(age) << " байт" << std::endl;
	std::cout << "isAdult (bool): " << sizeof(isAdult) << " байт" << std::endl;

	std::cout << month;
	return 0;
}