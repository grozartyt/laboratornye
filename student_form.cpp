#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	std::string firstName; //Имя
	std::string lastName; //Фамилия
	int age; //Возраст
	double height; //Рост в метрах
	double weight; //Вес в килограммах
	int course; // Курс обучения


	std::cout << "=== АНКЕТА СТУДЕНТА ===" << std::endl;
	std::cout << std::endl;

	std::cout << "Введите имя: ";
	std::cin >> firstName;

	std::cout << "Введите фамилию: ";
	std::cin >> lastName;

	std::cout << "Введите возраст: ";
	std::cin >> age;

	std::cout << "Введите рост (в метрах, например 1.75): ";
	std::cin >> height;

	std::cout << "Введите вес (в кг): ";
	std::cin >> weight;

	std::cout << "Введите курс обучения (1-4): ";
	std::cin >> course;


	double bmi = weight / (height * height);
	std::string bmiCategory;
	if (bmi < 18.5) {
		bmiCategory = "Недостаточный вес";
	}
	else if (bmi >= 18.5 && bmi < 25.0) {
		bmiCategory = "Норма";
	}
	else if (bmi >= 25.0 && bmi < 30.0) {
		bmiCategory = "Избыточный вес";
	}
	else {
		bmiCategory = "Ожирение";
	}


	std::cout << std::endl;
	std::cout << std::setfill('=') << std::setw(40) << "" << std::endl;
	std::cout << "           КАРТОЧКА СТУДЕНТА" << std::endl;
	std::cout << std::setfill('=') << std::setw(40) << "" << std::endl;

	std::cout << std::setfill(' ');

	std::cout << std::left << std::setw(15) << "Фамилия:"
		<< std::right << std::setw(25) << lastName << std::endl;

	std::cout << std::left << std::setw(15) << "Имя:"
		<< std::right << std::setw(25) << firstName << std::endl;

	std::cout << std::left << std::setw(15) << "Возраст:"
		<< std::right << std::setw(21) << age << " лет" << std::endl;

	std::cout << std::left << std::setw(15) << "Курс:"
		<< std::right << std::setw(25) << course << std::endl;

	std::cout << std::left << std::setw(15) << "Рост:"
		<< std::right << std::setw(23)
		<< std::fixed << std::setprecision(2) << height << " м" << std::endl;

	std::cout << std::left << std::setw(15) << "Вес:"
		<< std::right << std::setw(22)
		<< std::fixed << std::setprecision(1) << weight << " кг" << std::endl;

	std::cout << std::left << std::setw(15) << "ИМТ:"
		<< std::right << std::setw(25)
		<< std::fixed << std::setprecision(1) << bmi << std::endl;

	std::cout << std::left << std::setw(15) << "Категория ИМТ:"
		<< std::right << std::setw(25) << bmiCategory << std::endl;

	std::cout << std::setfill('-') << std::setw(40) << "" << std::endl;

	return 0;
}