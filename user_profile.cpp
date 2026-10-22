#include <iostream>
#include <string>

int main() {
	system("chcp 65001 > nul");
	//=== ОБЪЯВЛЕНИЕ ПЕРЕМЕННЫХ ===

	// Личные данные
	std::string firstName = "Владислав";
	std::string lastName = "Новиков";
	int age = 17;
	char gender = 'M';
	double height = 1.78;
	double weight = 83.2;

	//Учебные данные
	std::string group = "ИСПкр-252";
	int course = 2;
	double averageGrade = 5.0;
	bool hasScholarship = true;

	//Контактные данные
	std::string email = "novikowvb@mail.ru";
	std::string phone = "+7 (995) 409 49-48";

	//=== ВЫВОД ИНФОРМАЦИИ ===

	std::cout << "==========================" << std::endl;
	std::cout << "  ПРОФИЛЬ ПОЛЬЗОВАТЕЛЯ  " << std::endl;
	std::cout << "==========================" << std::endl;

	std::cout << std::endl;
	std::cout << "--- Личные данные ---" << std::endl;
	std::cout << "Имя: " << firstName << std::endl;
	std::cout << "Фамилия: " << lastName << std::endl;
	std::cout << "Возраст: " << age << std::endl;
	std::cout << "Пол: " << gender << std::endl;
	std::cout << "Рост: " << height << std::endl;
	std::cout << "Вес: " << weight << std::endl;

	std::cout << std::endl;
	std::cout << "--- Учебные данные ---" << std::endl;
	std::cout << "Группа: " << group << std::endl;
	std::cout << "Курс: " << course << std::endl;
	std::cout << "Средний балл: " << averageGrade << std::endl;
	std::cout << "Стипендия: " << (hasScholarship ? "Есть" : "Нет") << std::endl;

	std::cout << std::endl;
	std::cout << "--- Контактные данные ---" << std::endl;
	std::cout << "Email: " << email << std::endl;
	std::cout << "Телефон: " << phone << std::endl;
	std::cout << std::endl;
	std::cout << "==========================" << std::endl;

	return 0;
}