

#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");
	int name, ran, g = 2;
	bool is_hol = false;
	std::cout << "В ведите 1 число: ";
	std::cin >> name;
	std::cout << "В ведите 2 число: ";
	std::cin >> ran;
	if (is_hol == !true) g = 10;
	if (name > ran) std::cout << "name" << g;
	else if (name < ran) std::cout << "ran" << g;
	else if (name == ran) std::cout << "0" << g;
	
}

