#include <iostream>




int main()
{
	system("chcp 1251>nul");
	srand(time(0));

	// Задание 1

	/*
    int a_1 = 10;
	int a_2 = 20;
	int a_3 = 30;
	int a_4 = 40;
	int a_5 = 50;

	std::cout << "a_1 = " << a_1 << " | тип: int, размер: 4 б.\n";
	std::cout << "a_2 = " << a_2 << " | тип: int, размер: 4 б.\n";
	std::cout << "a_3 = " << a_3 << " | тип: int, размер: 4 б.\n";
	std::cout << "a_4 = " << a_4 << " | тип: int, размер: 4 б.\n";
	std::cout << "a_5 = " << a_5 << " | тип: int, размер: 4 б.\n\n";


	short b_1 = 1;
	short b_2 = 2;
	short b_3 = 3;
	short b_4 = 4;
	short b_5 = 5;

	std::cout << "b_1 = " << b_1 << " | тип: short, размер: 2 б.\n";
	std::cout << "b_2 = " << b_2 << " | тип: short, размер: 2 б.\n";
	std::cout << "b_3 = " << b_3 << " | тип: short, размер: 2 б.\n";
	std::cout << "b_4 = " << b_4 << " | тип: short, размер: 2 б.\n";
	std::cout << "b_5 = " << b_5 << " | тип: short, размер: 2 б.\n\n";

	long c_1 = 100;
	long c_2 = 200;
	long c_3 = 300;
	long c_4 = 400;
	long c_5 = 500;

	std::cout << "c_1 = " << c_1 << " | тип: long, размер: 4 б.\n";
	std::cout << "c_2 = " << c_2 << " | тип: long, размер: 4 б.\n";
	std::cout << "c_3 = " << c_3 << " | тип: long, размер: 4 б.\n";
	std::cout << "c_4 = " << c_4 << " | тип: long, размер: 4 б.\n";
	std::cout << "c_5 = " << c_5 << " | тип: long, размер: 4 б.\n\n";

	float d_1 = 1.1;
	float d_2 = 1.2;
	float d_3 = 1.3;
	float d_4 = 1.4;
	float d_5 = 1.5;

	std::cout << "d_1 = " << d_1 << " | тип: float, размер: 4 б.\n";
	std::cout << "d_2 = " << d_2 << " | тип: float, размер: 4 б.\n";
	std::cout << "d_3 = " << d_3 << " | тип: float, размер: 4 б.\n";
	std::cout << "d_4 = " << d_4 << " | тип: float, размер: 4 б.\n";
	std::cout << "d_5 = " << d_5 << " | тип: float, размер: 4 б.\n\n";

	double e_1 = 1.1661;
	double e_2 = 1.1265;
	double e_3 = 1.1377;
	double e_4 = 1.1488;
	double e_5 = 1.1566;

	std::cout << "e_1 = " << e_1 << " | тип: double, размер: 8 б.\n";
	std::cout << "e_2 = " << e_2 << " | тип: double, размер: 8 б.\n";
	std::cout << "e_3 = " << e_3 << " | тип: double, размер: 8 б.\n";
	std::cout << "e_4 = " << e_4 << " | тип: double, размер: 8 б.\n";
	std::cout << "e_5 = " << e_5 << " | тип: double, размер: 8 б.\n\n";

	string f_1 = "he";
	string f_2 = "ll";
	string f_3 = "o w";
	string f_4 = "or";
	string f_5 = "ld";

	std::cout << "f_1 = " << f_1 << " | тип: string, размер: 4 б.\n";
	std::cout << "f_2 = " << f_2 << " | тип: string, размер: 4 б.\n";
	std::cout << "f_3 = " << f_3 << " | тип: string, размер: 4 б.\n";
	std::cout << "f_4 = " << f_4 << " | тип: string, размер: 4 б.\n";
	std::cout << "f_5 = " << f_5 << " | тип: string, размер: 4 б.\n\n";

	char g_1 = 'a';
	char g_2 = 'b';
	char g_3 = 'c';
	char g_4 = 'd';
	char g_5 = 'f';

	std::cout << "g_1 = " << g_1 << " | тип: char, размер: 1 б.\n";
	std::cout << "g_2 = " << g_2 << " | тип: char, размер: 1 б.\n";
	std::cout << "g_3 = " << g_3 << " | тип: char, размер: 1 б.\n";
	std::cout << "g_4 = " << g_4 << " | тип: char, размер: 1 б.\n";
	std::cout << "g_5 = " << g_5 << " | тип: char, размер: 1 б.\n\n";

	bool h_1 = 0;
	bool h_2 = 1;
	bool h_3 = 0;
	bool h_4 = 1;
	bool h_5 = 0;

	std::cout << "h_1 = " << h_1 << " | тип: bool, размер: 1 б.\n";
	std::cout << "h_2 = " << h_2 << " | тип: bool, размер: 1 б.\n";
	std::cout << "h_3 = " << h_3 << " | тип: bool, размер: 1 б.\n";
	std::cout << "h_4 = " << h_4 << " | тип: bool, размер: 1 б.\n";
	std::cout << "h_5 = " << h_5 << " | тип: bool, размер: 1 б.\n";
	*/



	// Задание 2

	std::cout << "[ - ] Программа \"Времена годa\" \n\n";
	std::cout << "[1] Лето\n[2] Осень\n[3] Зима\n[4] Весна\n\n";
	std::cout << "[-] Введите значение: ";
	int choose;
	std::cin >> choose;

	if (choose == 1) std::cout << "[ - ] Сейчас лето, следует одеться легко и взять с собой крем от солнца.";
	else if (choose == 2) std::cout << "[ - ] Сейчас осень, следует одеться тепло и взять с собой зонт.";
	else if (choose == 3) std::cout << "[ - ] Сейчас зима, следует одеться очень тепло и взять с собой перчатки.";
	else if (choose == 4) std::cout << "[ - ] Сейчас весна, следует одеться полегче и взять с собой солнцезащитные очки.";
	else std::cout << "Вы некорректно ввели значение!";

	system("pause>nul");
	return 0;
}

