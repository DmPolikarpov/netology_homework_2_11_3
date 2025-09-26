#include <iostream>
#include <Windows.h>

#include "LeaverLibrary.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	std::string name{};

	std::cout << "Введите имя: ";
	std::cin >> name;

	std::cout << LeaverLibrary::Leaver::leave(name) << std::endl;

	return EXIT_SUCCESS;
}
