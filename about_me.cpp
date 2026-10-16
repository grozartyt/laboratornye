#include <iostream>

/*
Программа: О себе
Автор: Новиков Владислав Борисович
Дата: 16.10.2026
Группа: ИСПкр-252
*/

int main() {
	system("chcp 65001 > nul");

	//Заголовок
	std::cout << "================================" << std::endl;
	std::cout << "     Информация о студенте" << std::endl;
	std::cout << "================================" << std::endl;

	//Личные данные
	std::cout << std::endl;
	std::cout << "Имя: Новиков Владислав Борисович" << std::endl;
	std::cout << "Группа: ИСПкр-252" << std::endl;
	std::cout << "Возраст: 17" << std::endl;

	//Увлечения
	std::cout << std::endl;
	std::cout << "Мои увлечения:" << std::endl;
	std::cout << " 1. Игра в шахматы" << std::endl;
	std::cout << " 2. Игра в шашки" << std::endl;
	std::cout << " 3. Маппинг в Minecraft" << std::endl;

	//Мотивация
	std::cout << std::endl;
	std::cout << "Почему я изучаю программирование:" << std::endl;
	std::cout << "Для создания собственного приложения" << std::endl;

	std::cout << std::endl;
	std::cout << "================================" << std::endl;

	return 0;
}