#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <string>
#include <fstream>
#include <filesystem>
#include <ctime>
#include <string.h>
#include <chrono>
#include <iomanip>
#include <vector>
//// Задание 12
//void win() {
//	std::cout << "Ответ верный!\n\n";
//}
//void loose() {
//	std::cout << "Ответ не верный!\n\n";
//}
//void GameOverLoose() {
//	std::cout << "\n\nИгра закончена! Вы проиграли!";
//}
//void GameOverWin() {
//	std::cout << "\n\nИгра закончена! Вы Выйграли!";
//}






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

    
	/*std::cout << "[ - ] Программа \"Времена годa\" \n\n";
	std::cout << "[1] Лето\n[2] Осень\n[3] Зима\n[4] Весна\n\n";
	std::cout << "[ - ] Введите значение: ";
	int choose;
	std::cin >> choose;

	if (choose == 1) std::cout << "[ - ] Сейчас лето, следует одеться легко и взять с собой крем от солнца.";
	else if (choose == 2) std::cout << "[ - ] Сейчас осень, следует одеться тепло и взять с собой зонт.";
	else if (choose == 3) std::cout << "[ - ] Сейчас зима, следует одеться очень тепло и взять с собой перчатки.";
	else if (choose == 4) std::cout << "[ - ] Сейчас весна, следует одеться полегче и взять с собой солнцезащитные очки.";
	else std::cout << "Вы некорректно ввели значение!";*/
	



    // Задание 3

	/*
	std::cout << "[ + ] Введите число: ";
	int choose;
	std::cin >> choose;
	if (choose >= 0 and choose <= 10) std::cout << "[ + ] Цифра в диапазоне: 0-10";
	else if (choose >= 11 and choose <= 20) std::cout << "[ + ] Цифра в диапазоне: 11-20";
	else if (choose >= 21 and choose <= 30) std::cout << "[ + ] Цифра в диапазоне: 21-30";
	else if (choose >= 31 and choose <= 40) std::cout << "[ + ] Цифра в диапазоне: 31-40";
	else if (choose >= 41 and choose <= 50) std::cout << "[ + ] Цифра в диапазоне: 41-50";
	else if (choose >= 51 and choose <= 60) std::cout << "[ + ] Цифра в диапазоне: 51-60";
	else if (choose >= 61 and choose <= 70) std::cout << "[ + ] Цифра в диапазоне: 61-70";
	else if (choose >= 71 and choose <= 80) std::cout << "[ + ] Цифра в диапазоне: 71-80";
	else if (choose >= 81 and choose <= 90) std::cout << "[ + ] Цифра в диапазоне: 81-90";
	else if (choose >= 91 and choose <= 100) std::cout << "[ + ] Цифра в диапазоне: 91-100";
	else if (choose < 0) std::cout << "[ + ] Ошибка! Число меньше 0.";
	else if (choose > 100) std::cout << "[ + ] Ошибка! Число больше 100.";
	*/



	// Задание 4

	/*int num, answer;
	std::cout << "[ + ] Введите число: ";
	std::cin >> num;
	for (int i = 1; i < 10; i++)
	{
		std::cout << "[ + ] Решите пример: " << num << " x " << i << "\n[ + ] Ответ: ";
		std::cin >> answer;
		if (answer == num * i) std::cout << "[ + ] Пример решен правильно!\n\n";
		else
		{
			std::cout << "[ - ] Ошибка, пример решен неверно!";
			break;
		}
		if (i == 9) std::cout << "[ + ] Примеры решены, поздравляем! ";
	}*/



	// Задание 5

	/*std::cout << "Выберете операцию: \n";
	std::cout << "[1] складывать \n[2] вычитать \n[3] умножать \n[4] делить \n[5] деление от остатка \n";
	int choose, num1, num2;
	std::cin >> choose;
	std::cout << "Введите первое число: ";
	std::cin >> num1;
	std::cout << "Введите второе число: ";
	std::cin >> num2;

	if (choose == 1) std::cout << "[ + ] Результат: " << num1 << " + " << num2 << " = " << num1 + num2;
	else if (choose == 2) std::cout << "[ + ] Результат: " << num1 << " - " << num2 << " = " << num1 - num2;
	else if (choose == 3) std::cout << "[ + ] Результат: " << num1 << " x " << num2 << " = " << num1 * num2;
	else if (choose == 4) std::cout << "[ + ] Результат: " << num1 << " / " << num2 << " = " << num1 / num2;
	else if (choose == 5) std::cout << "[ + ] Результат: " << num1 << " % " << num2 << " = " << num1 % num2;
	else std::cout << "Ошибка ввода!";*/



	// Задание 6

	/*int month;
	std::cout << "[ + ] Месяца года\n\n[ 1 ] Январь\n[ 2 ] Февраль\n[ 3 ] Март\n[ 4 ] Апрель\n[ 5 ] Май\n[ 6 ] Июнь\n[ 7 ] Июль\n[ 8 ] Август\n[ 9 ] Сентябрь\n[ 10 ] Октябрь\n[ 11 ] Ноябрь\n[ 12 ] Декабрь\n\n[ + ] Выберите месяц: ";
	std::cin >> month;

	switch (month)
	{
	case 1:
		std::cout << "[ + ] Выбран месяц “Январь”";
		break;
	case 2:
		std::cout << "[ + ] Выбран месяц “Февраль”";
		break;
	case 3:
		std::cout << "[ + ] Выбран месяц “Март”";
		break;
	case 4:
		std::cout << "[ + ] Выбран месяц “Апрель”";
		break;
	case 5:
		std::cout << "[ + ] Выбран месяц “Май”";
		break;
	case 6:
		std::cout << "[ + ] Выбран месяц “Июнь”";
		break;
	case 7:
		std::cout << "[ + ] Выбран месяц “Июль”";
		break;
	case 8:
		std::cout << "[ + ] Выбран месяц “Август”";
		break;
	case 9:
		std::cout << "[ + ] Выбран месяц “Сентябрь”";
		break;
	case 10:
		std::cout << "[ + ] Выбран месяц “Октябрь”";
		break;
	case 11:
		std::cout << "[ + ] Выбран месяц “Ноябрь”";
		break;
	case 12:
		std::cout << "[ + ] Выбран месяц “Декабрь”";
		break;
	default:
		std::cout << "[ + ] Не правильно введен номер месяца!";
		break;
	}*/



	// Задание 7

	/*int month, day;
	std::cout << "[ + ] Календарь\n\n[ 1 ] Январь\n[ 2 ] Февраль\n[ 3 ] Март\n[ 4 ] Апрель\n[ 5 ] Май\n[ 6 ] Июнь\n[ 7 ] Июль\n[ 8 ] Август\n[ 9 ] Сентябрь\n[ 10 ] Октябрь\n[ 11 ] Ноябрь\n[ 12 ] Декабрь\n\n[ + ] Выберите месяц: ";
	std::cin >> month;

	switch (month)
	{
	case 1:
		std::cout << "[ + ] Выбран месяц “Январь”\n\n";
		std::cout << "[ + ] Выберите день месяца: ";
		std::cin >> day;
		std::cout << "[ + ] Календарь: " << day << " Января.";
		break;
	case 2:
		std::cout << "[ + ] Выбран месяц “Февраль”\n\n";
		std::cout << "[ + ] Выберите день месяца: ";
		std::cin >> day;
		std::cout << "[ + ] Календарь: " << day << " Февраля.";
		break;
	case 3:
		std::cout << "[ + ] Выбран месяц “Март”\n\n";
		std::cout << "[ + ] Выберите день месяца: ";
		std::cin >> day;
		std::cout << "[ + ] Календарь: " << day << " Марта.";
		break;
	case 4:
		std::cout << "[ + ] Выбран месяц “Апрель”\n\n";
		std::cout << "[ + ] Выберите день месяца: ";
		std::cin >> day;
		std::cout << "[ + ] Календарь: " << day << " Апреля.";
		break;
	case 5:
		std::cout << "[ + ] Выбран месяц “Май”\n\n";
		std::cout << "[ + ] Выберите день месяца: ";
		std::cin >> day;
		std::cout << "[ + ] Календарь: " << day << " Мая.";
		break;
	case 6:
		std::cout << "[ + ] Выбран месяц “Июнь”\n\n";
		std::cout << "[ + ] Выберите день месяца: ";
		std::cin >> day;
		std::cout << "[ + ] Календарь: " << day << " Июня.";
		break;
	case 7:
		std::cout << "[ + ] Выбран месяц “Июль”\n\n";
		std::cout << "[ + ] Выберите день месяца: ";
		std::cin >> day;
		std::cout << "[ + ] Календарь: " << day << " Июля.";
		break;
	case 8:
		std::cout << "[ + ] Выбран месяц “Август”\n\n";
		std::cout << "[ + ] Выберите день месяца: ";
		std::cin >> day;
		std::cout << "[ + ] Календарь: " << day << " Августа.";
		break;
	case 9:
		std::cout << "[ + ] Выбран месяц “Сентябрь”\n\n";
		std::cout << "[ + ] Выберите день месяца: ";
		std::cin >> day;
		std::cout << "[ + ] Календарь: " << day << " Сентября.";
		break;
	case 10:
		std::cout << "[ + ] Выбран месяц “Октябрь”\n\n";
		std::cout << "[ + ] Выберите день месяца: ";
		std::cin >> day;
		std::cout << "[ + ] Календарь: " << day << " Октября.";
		break;
	case 11:
		std::cout << "[ + ] Выбран месяц “Ноябрь”\n\n";
		std::cout << "[ + ] Выберите день месяца: ";
		std::cin >> day;
		std::cout << "[ + ] Календарь: " << day << " Ноября.";
		break;
	case 12:
		std::cout << "[ + ] Выбран месяц “Декабрь”\n\n";
		std::cout << "[ + ] Выберите день месяца: ";
		std::cin >> day;
		std::cout << "[ + ] Календарь: " << day << " Декабря.";
		break;
	default:
		std::cout << "[ + ] Не правильно введен номер месяца!";
		break;
	}*/



	// Задание 9

	/*int num;
	std::cout << "[ + ] Цикл \"WHILE\"\n[+] Введите число : ";
	std::cin >> num;
	while (true)
	{
		int i = 1;
		if (num == 0) break;
		else if (num >= 1 and num <= 15)
			while (i <= num)
			{
				std::cout << "[ + ] Цикл отработал. Круг: " << i << std::endl;
				i++;
			}
		else std::cout << "Ошибка ввода!\n";
		std::cout << "[+] Введите число : ";
		std::cin >> num;
	}*/


	// Задание 10

	/*srand(time(0));
	std::cout << "[1] Начать игру.\n[2] Выйти.\n";
	int choose, trying = 10, attempt = 0, number;
	std::cin >> choose;
	if (choose == 1)
	{
		while (true)
		{
			int num = rand() % 11;
			std::cout << "\n[ + ] Угаданных цифр: [ " << attempt << " / 3 ] \n[ + ] Попыток: [" << trying << "]\n\n";
			std::cout << "[ > ] Угадать цифру: ";
			std::cin >> number;
			if (number == num) {
				std::cout << "[ + ] Вы угадали цифру!\n";
				attempt++;
				trying--;
			}
			else if (attempt == 3) std::cout << "Вы выйграли!";
			else if (trying == 0) {
				std::cout << "Вы проиграли!";
				break;
			}
			else if (number < 0 or number > 10) {
				std::cout << "Ошибка ввода!\n";
				continue;
			}
			else if (number != num) {
				std::cout << "[ - ] Вы не угадали число!\n";
				trying--;
			}
		}

	}
	else if (choose == 2) std::cout << "Выход!";
	else std::cout << "Ошибка ввода!";*/



	// Задание 11, 13-19

	//int choose, length;
	//char texture, i = ' ';;
	//std::cout << "[ + ] Программа - “Геометрические фигуры”\n\n";
	//std::cout << "[ 1 ] Линия\n[ 2 ] Квадрат\n[ 3 ] Прямоугольник\n[ 4 ] Треугольник\n[ 5 ] Решетка\n[ 6 ] Крестик\n[ 7 ] Плюс\n[ 8 ] Ромб\n\n[ + ] Выберите фигуру: ";
	//std::cin >> choose;

	//// Line
	//if (choose == 1) {

	//	std::cout << "\n[ + ] Фигура: “Линия”\n\n[ 1 ] Горизонтальная\n[ 2 ] Вертикальная \n\nВыберите тип : ";
	//	int position, i = 0;
	//	std::cin >> position;
	//	if (position < 0 or position > 2) {
	//		std::cout << "Ошибка ввода!";
	//		exit;
	//	}
	//	std::cout << "[ + ] Длина линии: ";
	//	std::cin >> length;
	//	std::cout << "[ + ] Текстура линии: ";
	//	std::cin >> texture;
	//	std::cout << "\n";
	//	if (position == 1) {
	//		while (i < length)
	//		{
	//			std::cout << texture;
	//			i++;
	//		}
	//	}
	//	else if (position == 2) {
	//		while (i < length) {
	//			std::cout << "\t" << texture << std::endl;
	//			i++;
	//		}
	//	}
	//}


	//// Square
	//else if (choose == 2) {
	//	std::cout << "\n[ + ] Фигура: “Квадрат”\n\n[ 1 ] Заполненный\n[ 2 ] Пустой \n\nВыберите тип : ";
	//	int type, length;
	//	std::cin >> type;
	//	if (type < 0 or type > 2) {
	//		std::cout << "Ошибка ввода!";
	//		exit;
	//	}
	//	std::cout << "[ + ] Размер:  ";
	//	std::cin >> length;
	//	std::cout << "[ + ] Текстура: ";
	//	std::cin >> texture;
	//	std::cout << "\n";
	//	if (type == 1) {
	//		for (int i = 0; i < length; i++) {
	//			for (int j = 0; j < length; j++)
	//			{
	//				std::cout << texture << ' ';
	//			}
	//			std::cout << "\n";
	//		}
	//	}
	//	else if (type == 2) {
	//		std::string nul(length + (length - 3), i);
	//		for (int i = 0; i < 1; i++) {
	//			for (int j = 0; j < length; j++)
	//			{
	//				std::cout << texture << ' ';
	//			}
	//			std::cout << "\n";
	//		}
	//		for (int i = 0; i < length - 2; i++)
	//		{
	//			std::cout << texture << nul << texture << std::endl;
	//		}
	//		for (int i = 0; i < 1; i++) {
	//			for (int j = 0; j < length; j++)
	//			{
	//				std::cout << texture << ' ';
	//			}
	//			std::cout << "\n";
	//		}
	//	}
	//}


	//// Rectangle
	//else if (choose == 3) {
	//		std::cout << "\n[ + ] Фигура: “Прямоугольник”\n\n[ 1 ] Заполненный\n[ 2 ] Пустой \n\nВыберите тип : ";
	//		int type, Width, Height;
	//		std::cin >> type;
	//		if (type < 0 or type > 2) {
	//			std::cout << "Ошибка ввода!";
	//			exit;
	//		}
	//		std::cout << "[ + ] Ширина:  ";
	//		std::cin >> Width;
	//		std::cout << "[ + ] Высота:  ";
	//		std::cin >> Height;
	//		std::cout << "[ + ] Текстура: ";
	//		std::cin >> texture;
	//		std::cout << "\n";
	//		if (type == 1) {
	//			for (int i = 0; i < Height; i++) {
	//				for (int j = 0; j < Width; j++)
	//				{
	//					std::cout << texture << ' ';
	//				}
	//				std::cout << "\n";
	//			}
	//		}
	//		else if (type == 2) {
	//			std::string nul(Width + (Width - 3), i);
	//			for (int i = 0; i < 1; i++) {
	//				for (int j = 0; j < Width; j++)
	//				{
	//					std::cout << texture << ' ';
	//				}
	//				std::cout << "\n";
	//			}
	//			for (int i = 0; i < Height - 2; i++)
	//			{
	//				std::cout << texture << nul << texture << std::endl;
	//			}
	//			for (int i = 0; i < 1; i++) {
	//				for (int j = 0; j < Width; j++)
	//				{
	//					std::cout << texture << ' ';
	//				}
	//				std::cout << "\n";
	//			}
	//		}
	//}


	//// Triangle
	//else if (choose == 4) {
	//	std::cout << "\n[ + ] Фигура: “Треугольник”\n\n[ 1 ] Заполненный\n[ 2 ] Пустой \n\nВыберите тип : ";
	//	int type, Height;
	//	std::cin >> type;
	//	if (type < 0 or type > 2) {
	//		std::cout << "Ошибка ввода!";
	//		exit;
	//	}
	//	std::cout << "[ + ] Высота:  ";
	//	std::cin >> Height;
	//	std::cout << "[ + ] Текстура: ";
	//	std::cin >> texture;
	//	std::cout << "\n";
	//	if (type == 1) {
	//		for (int i = 1; i <= Height; i++) {
	//			for (int j = 1; j <= Height - i; j++) {
	//				std::cout << " ";
	//			}
	//			for (int k = 1; k <= 2 * i - 1; k++) {
	//				std::cout << texture;
	//			}
	//			std::cout << std::endl;
	//		}
	//	}
	//	else if (type == 2) {
	//		for (int i = 1; i <= Height; i++) {
	//			for (int j = 1; j <= Height - i; j++) {
	//				std::cout << " ";
	//			}
	//			if (i == 1 || i == Height) {
	//				for (int k = 1; k <= 2 * i - 1; k++) {
	//					std::cout << texture;
	//				}
	//			}
	//			else {
	//				std::cout << texture;
	//				for (int k = 1; k <= 2 * i - 3; k++) {
	//					std::cout << " ";
	//				}
	//				std::cout << texture;
	//			}
	//			std::cout << std::endl;
	//		}
	//	}
	//}


	//// Grid
	//else if (choose == 5) {
	//	std::cout << "\n[ + ] Фигура: “Решетка”\n\n";
	//	int Size;
	//	std::cout << "[ + ] Размер:  ";
	//	std::cin >> Size;
	//	std::cout << "[ + ] Текстура: ";
	//	std::cin >> texture;
	//	std::cout << "\n";
	//	for (int i = 0; i < Size; i++) {
	//		for (int j = 0; j < Size; j++) {
	//			if (j % 2 == 0 and i % 2 == 0) {
	//				std::cout << "  ";
	//				continue;
	//			}
	//			std::cout << texture << " ";

	//		}
	//		std::cout << std::endl;
	//	}
	//}


	//// Cross
	//else if (choose == 6) {
	//	std::cout << "\n[ + ] Фигура: “Крестик”\n\n";
	//	int Size;
	//	std::cout << "[ + ] Размер:  ";
	//	std::cin >> Size;
	//	std::cout << "[ + ] Текстура: ";
	//	std::cin >> texture;
	//	std::cout << "\n";
	//	for (int i = 0; i < Size; i++) {
	//		for (int j = 0; j < Size; j++) {
	//			if (i == j || i + j == Size - 1) {
	//				std::cout << texture << "     ";
	//			}
	//			else {
	//				std::cout << "      ";
	//			}
	//		}
	//		std::cout << std::endl;
	//	}
	//}


	//// Plus
	//else if (choose == 7) {
	//	std::cout << "\n[ + ] Фигура: “Плюс”\n\n";
	//	int Size;
	//	std::cout << "[ + ] Размер:  ";
	//	std::cin >> Size;
	//	std::cout << "[ + ] Текстура: ";
	//	std::cin >> texture;
	//	std::cout << "\n";
	//	std::string Plus(Size, texture);
	//	std::string nul(Size / 2, i);
	//	for (int i = 0; i < Size; i++) {
	//		if (Size / 2 == i) {
	//			std::cout << Plus << std::endl;
	//			continue;
	//		}
	//		for (int j = 0; j < Size; j++) {
	//			if (Size / 2 == j+1) {
	//				std::cout << nul << texture;
	//				continue;
	//			}	
	//		}
	//		std::cout << std::endl;
	//	}
	//}


	//// Rhomb
	//else if (choose == 8) {
	//	std::cout << "\n[ + ] Фигура: “Ромб”\n\n";
	//	int Size;
	//	std::cout << "[ + ] Размер:  ";
	//	std::cin >> Size;
	//	std::cout << "[ + ] Текстура: ";
	//	std::cin >> texture;
	//	std::cout << "\n";
	//	for (int i = 0; i < Size; i++) {
	//		for (int j = 0; j < Size - i - 1; j++) {
	//			std::cout << " ";
	//		}
	//		for (int j = 0; j < 2 * i + 1; j++) {
	//			if (j == 0 || j == 2 * i || i == Size - 1) {
	//				std::cout << texture;
	//			}
	//			else {
	//				std::cout << " ";
	//			}
	//		}
	//		std::cout << std::endl;
	//	}

	//	for (int i = Size - 2; i >= 0; i--) {
	//		for (int j = 0; j < Size - i - 1; j++) {
	//			std::cout << " ";
	//		}
	//		for (int j = 0; j < 2 * i + 1; j++) {
	//			if (j == 0 || j == 2 * i || i == Size - 1) {
	//				std::cout << texture;
	//			}
	//			else {
	//				std::cout << " ";
	//			}
	//		}
	//		std::cout << std::endl;
	//	}
	//}


	//else std::cout << "Ошибка ввода!";



	// Задание 12

	//char quiz;
	//std::string name = "user";
	//int numQuestion = 8;
	//std::cout << "Приветсвуем!\n";
	//while (true) {
	//	std::cout << "\n[ 1 ] Начать игру\n[ 2 ] Настройки\n[ 3 ] Правила\n[ 4 ] Выйти\n";
	//	int choose;
	//	std::cin >> choose;

	//	if (choose == 1) {
	//		int life = 3, glasses = 0;
	//		// 1
	//		std::cout << "\n\n[ + ] Игрок: " << name << " |  жизни: " << life << " | очки: " << glasses;
	//		std::cout << "\n[ 1 ] Вопрос: Системный язык программирования?\n";
	//		std::cout << "[ A ] Python\t[ B ] С#\n[ C ] Ruby\t[ D ] C++\n";
	//		std::cout << "[ + ] Выбрать ответ: ";
	//		std::cin >> quiz;
	//		if (quiz == 'd' or quiz == 'D') {
	//			win();
	//			glasses++;
	//		}
	//		else {
	//			loose();
	//			life--;
	//		}

	//		// 2
	//		std::cout << "\n\n[ + ] Игрок: " << name << " |  жизни: " << life << " | очки: " << glasses;
	//		std::cout << "\n[ 2 ] Вопрос: Какой язык программирования является наиболее популярным в мире?\n";
	//		std::cout << "[ A ] Python\t[ B ] Java\n[ C ] C++\t[ D ] Ruby\n";
	//		std::cout << "[ + ] Выбрать ответ: ";
	//		std::cin >> quiz;
	//		if (quiz == 'a' or quiz == 'A') {
	//			win();
	//			glasses++;
	//		}
	//		else {
	//			loose();
	//			life--;
	//		}

	//		// 3
	//		std::cout << "\n\n[ + ] Игрок: " << name << " |  жизни: " << life << " | очки: " << glasses;
	//		std::cout << "\n[ 3 ] Вопрос: Что такое HTML?\n";
	//		std::cout << "[ A ] Основной язык разметки веб-страниц\t[ B ] Язык программирования для создания приложений\n[ C ] Протокол передачи данных в сети   \t[ D ] Графический редактор\n";
	//		std::cout << "[ + ] Выбрать ответ: ";
	//		std::cin >> quiz;
	//		if (quiz == 'a' or quiz == 'A') {
	//			win();
	//			glasses++;
	//		}
	//		else {
	//			loose();
	//			life--;
	//		}
	//		if (life == 0) {
	//			GameOverLoose();
	//			break;
	//		}

	//		// 4
	//		std::cout << "\n\n[ + ] Игрок: " << name << " |  жизни: " << life << " | очки: " << glasses;
	//		std::cout << "\n[ 4 ] Вопрос: Что такое SQL?\n";
	//		std::cout << "[ A ] Язык программирования для создания веб-приложений\t[ B ] Язык запросов к базам данных\n[ C ] Фреймворк для разработки мобильных приложений\t[ D ] Система управления контентом\n";
	//		std::cout << "[ + ] Выбрать ответ: ";
	//		std::cin >> quiz;
	//		if (quiz == 'b' or quiz == 'B') {
	//			win();
	//			glasses++;
	//		}

	//		else {
	//			loose();
	//			life--;
	//		}


	//		if (life == 0) {
	//			GameOverLoose();
	//			break;
	//		}


	//		// 5
	//		std::cout << "\n\n[ + ] Игрок: " << name << " |  жизни: " << life << " | очки: " << glasses;
	//		std::cout << "\n[ 5 ] Вопрос: Что такое алгоритм?\n";
	//		std::cout << "[ A ] Программа для защиты от вирусов\t[ B ] Последовательность шагов для решения задачи\n[ C ] Тип базы данных             \t[ D ] Вид компьютерной аппаратуры\n";
	//		std::cout << "[ + ] Выбрать ответ: ";
	//		std::cin >> quiz;
	//		if (quiz == 'b' or quiz == 'B') {
	//			win();
	//			glasses++;
	//		}

	//		else {
	//			loose();
	//			life--;
	//		}


	//		if (life == 0) {
	//			GameOverLoose();
	//			break;
	//		}
	//		

	//		// 6
	//		std::cout << "\n\n[ + ] Игрок: " << name << " |  жизни: " << life << " | очки: " << glasses;
	//		std::cout << "\n[ 6 ] Вопрос: Что такое API?\n";
	//		std::cout << "[ A ] Аппаратное программное обеспечение\t                        [ B ] Программа для создания графики\n[ C ] Интерфейс приложения для взаимодействия с другими программами\t[ D ] Специальный вид компьютерных игр\n";
	//		std::cout << "[ + ] Выбрать ответ: ";
	//		std::cin >> quiz;
	//		if (quiz == 'c' or quiz == 'C') {
	//			win();
	//			glasses++;
	//		}

	//		else {
	//			loose();
	//			life--;
	//		}


	//		if (life == 0) {
	//			GameOverLoose();
	//			break;
	//		}


	//		// 7
	//		std::cout << "\n\n[ + ] Игрок: " << name << " |  жизни: " << life << " | очки: " << glasses;
	//		std::cout << "\n[ 7 ] Вопрос: Что такое Git?\n";
	//		std::cout << "[ A ] Система управления базами данных\t  [ B ] Язык программирования\n[ C ] Система контроля версий\t          [ D ] Облачное хранилище файлов\n";
	//		std::cout << "[ + ] Выбрать ответ: ";
	//		std::cin >> quiz;
	//		if (quiz == 'c' or quiz == 'C') {
	//			win();
	//			glasses++;
	//		}

	//		else {
	//			loose();
	//			life--;
	//		}


	//		if (life == 0) {
	//			GameOverLoose();
	//			break;
	//		}


	//		// 8
	//		std::cout << "\n\n[ + ] Игрок: " << name << " |  жизни: " << life << " | очки: " << glasses;
	//		std::cout << "\n[ 8 ] Вопрос: Что такое SSL?\n";
	//		std::cout << "[ A ] Протокол безопасной передачи данных по сети\t[ B ] Вид языка программирования\n[ C ] Аппаратное устройство хранения данных\t        [ D ] Специализированное программное обеспечение\n";
	//		std::cout << "[ + ] Выбрать ответ: ";
	//		std::cin >> quiz;
	//		if (quiz == 'a' or quiz == 'A') {
	//			win();
	//			glasses++;
	//		}

	//		else {
	//			loose();
	//			life--;
	//		}


	//		if (life == 0) {
	//			GameOverLoose();
	//			break;
	//		}

	//		if (numQuestion == 8) {
	//			GameOverWin();
	//			break;
	//		}


	//		// 9
	//		std::cout << "\n\n[ + ] Игрок: " << name << " |  жизни: " << life << " | очки: " << glasses;
	//		std::cout << "\n[ 9 ] Вопрос: Что такое Docker?\n";
	//		std::cout << "[ A ] Виртуальная машина\t[ B ] Контейнеризация приложений\n[ C ] Облачное хранилище данных\t[ D ] Язык программирования\n";
	//		std::cout << "[ + ] Выбрать ответ: ";
	//		std::cin >> quiz;
	//		if (quiz == 'd' or quiz == 'D') {
	//			win();
	//			glasses++;
	//		}

	//		else {
	//			loose();
	//			life--;
	//		}


	//		if (life == 0) {
	//			GameOverLoose();
	//			break;
	//		}


	//		// 10
	//		std::cout << "\n\n[ + ] Игрок: " << name << " |  жизни: " << life << " | очки: " << glasses;
	//		std::cout << "\n[ 10 ] Вопрос: Какая из следующих структур данных является неизменяемой в языке программирования Python?\n";
	//		std::cout << "[ A ] Список\t[ B ] Кортеж\n[ C ] Множество\t[ D ] Словарь\n";
	//		std::cout << "[ + ] Выбрать ответ: ";
	//		std::cin >> quiz;
	//		if (quiz == 'b' or quiz == 'B') {
	//			win();
	//			glasses++;
	//		}

	//		else {
	//			loose();
	//			life--;
	//		}


	//		if (life == 0) {
	//			GameOverLoose();
	//			break;
	//		}


	//		if (numQuestion == 10) {
	//			GameOverWin();
	//			break;
	//		}


	//		// 11
	//		std::cout << "\n\n[ + ] Игрок: " << name << " |  жизни: " << life << " | очки: " << glasses;
	//		std::cout << "\n[ 11 ] Вопрос: Какая из перечисленных операций относится к унарным операциям в программировании?\n";
	//		std::cout << "[ A ] Сложение \t[ B ] Умножение\n[ C ] Инкремент\t[ D ] Деление\n";
	//		std::cout << "[ + ] Выбрать ответ: ";
	//		std::cin >> quiz;
	//		if (quiz == 'c' or quiz == 'C') {
	//			win();
	//			glasses++;
	//		}

	//		else {
	//			loose();
	//			life--;
	//		}


	//		if (life == 0) {
	//			GameOverLoose();
	//			break;
	//		}

	//		// 12
	//		std::cout << "\n\n[ + ] Игрок: " << name << " |  жизни: " << life << " | очки: " << glasses;
	//		std::cout << "\n[ 12 ] Вопрос: Какая функция управляет выполнением программы в операционной системе?\n";
	//		std::cout << "[ A ] Ядро    \t[ B ] Драйвер\n[ C ] Оболочка\t[ D ] Процессор\n";
	//		std::cout << "[ + ] Выбрать ответ: ";
	//		std::cin >> quiz;
	//		if (quiz == 'a' or quiz == 'A') {
	//			win();
	//			glasses++;
	//		}

	//		else {
	//			loose();
	//			life--;
	//		}


	//		if (life == 0) {
	//			GameOverLoose();
	//			break;
	//		}

	//		GameOverWin();
	//		break;
	//	}

	//	else if (choose == 2) {
	//		while (true)
	//		{
	//			std::cout << "\n[ 1 ] Редактирование имя игрока;\n[ 2 ] Редактирование вопросов в игре;\n[ 3 ] Редактирование цвет интерфейса;\n[ 4 ] Вернуться в меню;\n";
	//			int chooseTools;
	//			std::cin >> chooseTools;
	//			if (chooseTools == 1) {
	//				std::cout << "\nВведите имя: ";
	//				std::cin >> name;
	//			}

	//			else if (chooseTools == 2) {
	//				std::cout << "\nВведите количество вопросов:\n[ 1 ] 8;\n[ 2 ] 10;\n[ 3 ] 12;\n";
	//				int chooseQuestion;
	//				std::cin >> chooseQuestion;
	//				switch (chooseQuestion)
	//				{
	//				case 1:
	//					numQuestion = 8;
	//					break;
	//				case 2:
	//					numQuestion = 10;
	//					break;
	//				case 3:
	//					numQuestion = 12;
	//					break;
	//				default:
	//					std::cout << "Ошибка ввода!\n\n";
	//					break;
	//				}
	//			}

	//			else if (chooseTools == 3) {
	//				std::cout << "\nВведите цвет:\n[ 1 ] Голубой;\n[ 2 ] Синий;\n[ 3 ] Зеленый;\n[ 4 ] Красный;\n[ 5 ] Белый;\n";
	//				int chooseColor;
	//				std::cin >> chooseColor;
	//				switch (chooseColor)
	//				{
	//				case 1:
	//					system("color 3");
	//					break;
	//				case 2:
	//					system("color 1");
	//					break;
	//				case 3:
	//					system("color 2");
	//					break;
	//				case 4:
	//					system("color 4");
	//					break;
	//				case 5:
	//					system("color 7");
	//					break;
	//				default:
	//					std::cout << "Ошибка ввода!\n\n";
	//					break;
	//				}
	//			}

	//			else if (chooseTools == 4) {
	//				break;
	//			}

	//			else std::cout << "Ошибка ввода!\n\n";
	//		}
	//	}

	//	else if (choose == 3) {
	//		std::cout << "- Игрок получает очки за правильный ответ на вопрос;\n- Игрок проходит дальше за правильный ответ;\n- Игрок теряет жизнь при неправильном ответе.\n\n";
	//	}

	//	else if (choose == 4) {
	//		break;
	//	}

	//	else std::cout << "Ошибка ввода!\n\n";
	//}



	// Задание 20
	
	/*short arrShort[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arrInt[10] = { 1, 20, 32, 4, 1, 2, 2, 54, 23, 0 };
	long arrLong[10] = { 10,20,30,40,50,60,70,80,90,100 };
	float arrFloat[10] = { 1.1,1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9,1.11 };
	double arrDouble[10] = { 1.11,1.12,1.13,1.14,1.15,1.16,1.17,1.18,1.19,1.21 };
	char arrChar[10] = { 'a','b','c','d','f','g','e','i','s','z' };
	bool arrBool[10] = { 0,1,0,1,0,1,0,0,1,0 };
	std::string arrString[10] = { "he","ll","o ","wo","rl","d ","ks","54","isp","11-37" };
	
	std::cout << "[ + ] Массив SHORT:\n";
	for (int i = 0; i < 10; i++)
	{
		std::cout << "[ + ] arrShort [ " << i << " ]	| значение: " << arrShort[i] << std::endl;
	}
	std::cout << "\n[ + ] Массив INT:\n";
	for (int i = 0; i < 10; i++)
	{
		std::cout << "[ + ] arrInt [ " << i << " ]	| значение: " << arrInt[i] << std::endl;
	}
	std::cout << "\n[ + ] Массив LONG:\n";
	for (int i = 0; i < 10; i++)
	{
		std::cout << "[ + ] arrLong [ " << i << " ]	| значение: " << arrLong[i] << std::endl;
	}
	std::cout << "\n[ + ] Массив FLOAT:\n";
	for (int i = 0; i < 10; i++)
	{
		std::cout << "[ + ] arrFloat [ " << i << " ]	| значение: " << arrFloat[i] << std::endl;
	}
	std::cout << "\n[ + ] Массив DOUBLE:\n";
	for (int i = 0; i < 10; i++)
	{
		std::cout << "[ + ] arrDouble [ " << i << " ]	| значение: " << arrDouble[i] << std::endl;
	}
	std::cout << "\n[ + ] Массив CHAR:\n";
	for (int i = 0; i < 10; i++)
	{
		std::cout << "[ + ] arrChar [ " << i << " ]	| значение: " << arrChar[i] << std::endl;
	}
	std::cout << "\n[ + ] Массив BOOL:\n";
	for (int i = 0; i < 10; i++)
	{
		std::cout << "[ + ] arrBool [ " << i << " ]	| значение: " << arrBool[i] << std::endl;
	}
	std::cout << "\n[ + ] Массив STRING:\n";
	for (int i = 0; i < 10; i++)
	{
		std::cout << "[ + ] arrString [ " << i << " ]	| значение: " << arrString[i] << std::endl;
	}*/



	// Задание 21

	/*int arrOne[5];
	int table = 1;
	std::string lineShort = "-------------------------------------------------------------";
	std::string lineLong = "-----------------------------------------------------------------";
	std::string nameShort = "|   Число   |           Пример         |    Результат       |";
	std::string nameLong = "|   Число    |           Пример           |      Результат      |";
	for (int i = 0; i < 5; i++)
	{
		std::cin >> arrOne[i];
	}
	for (int i = 0; i < 1; i++)
	{
		std::cout << "\n| Таблица: " << table << std::endl;
		if (arrOne[i] < 10) {
			std::cout << lineShort << std::endl << nameShort << std::endl;
			std::cout << lineShort << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " + " << arrOne[i] << "          |        " << arrOne[i] + arrOne[i] << "           |\n";
			std::cout << lineShort << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " - " << arrOne[i] << "          |        " << arrOne[i] - arrOne[i] << "           |\n";
			std::cout << lineShort << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " / " << arrOne[i] << "          |        " << arrOne[i] / arrOne[i] << "           |\n";
			std::cout << lineShort << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " * " << arrOne[i] << "          |        " << arrOne[i] * arrOne[i] << "           |\n" << lineShort << "\n\n";
		}
		else {
			std::cout << lineLong << std::endl << nameLong << std::endl;
			std::cout << lineLong << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " + " << arrOne[i] << "          |        " << arrOne[i] + arrOne[i] << "           |\n";
			std::cout << lineLong << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " - " << arrOne[i] << "          |        " << arrOne[i] - arrOne[i] << "            |\n";
			std::cout << lineLong << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " / " << arrOne[i] << "          |        " << arrOne[i] / arrOne[i] << "            |\n";
			std::cout << lineLong << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " * " << arrOne[i] << "          |        " << arrOne[i] * arrOne[i] << "          |\n" << lineLong << "\n\n";
		}
		table++;
	}
	for (int i = 1; i < 2; i++)
	{
		std::cout << "\n| Таблица: " << table << std::endl;
		if (arrOne[i] < 10) {
			std::cout << lineShort << std::endl << nameShort << std::endl;
			std::cout << lineShort << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " + " << arrOne[i] << "          |        " << arrOne[i] + arrOne[i] << "           |\n";
			std::cout << lineShort << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " - " << arrOne[i] << "          |        " << arrOne[i] - arrOne[i] << "           |\n";
			std::cout << lineShort << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " / " << arrOne[i] << "          |        " << arrOne[i] / arrOne[i] << "           |\n";
			std::cout << lineShort << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " * " << arrOne[i] << "          |        " << arrOne[i] * arrOne[i] << "          |\n" << lineShort << "\n\n";
		}
		else {
			std::cout << lineLong << std::endl << nameLong << std::endl;
			std::cout << lineLong << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " + " << arrOne[i] << "          |        " << arrOne[i] + arrOne[i] << "           |\n";
			std::cout << lineLong << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " - " << arrOne[i] << "          |        " << arrOne[i] - arrOne[i] << "            |\n";
			std::cout << lineLong << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " / " << arrOne[i] << "          |        " << arrOne[i] / arrOne[i] << "            |\n";
			std::cout << lineLong << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " * " << arrOne[i] << "          |        " << arrOne[i] * arrOne[i] << "          |\n" << lineLong << "\n\n";
		}
		table++;
	}
	for (int i = 2; i < 3; i++)
	{
		std::cout << "\n| Таблица: " << table << std::endl;
		if (arrOne[i] < 10) {
			std::cout << lineShort << std::endl << nameShort << std::endl;
			std::cout << lineShort << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " + " << arrOne[i] << "          |        " << arrOne[i] + arrOne[i] << "           |\n";
			std::cout << lineShort << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " - " << arrOne[i] << "          |        " << arrOne[i] - arrOne[i] << "          |\n";
			std::cout << lineShort << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " / " << arrOne[i] << "          |        " << arrOne[i] / arrOne[i] << "          |\n";
			std::cout << lineShort << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " * " << arrOne[i] << "          |        " << arrOne[i] * arrOne[i] << "           |\n" << lineShort << "\n\n";
		}
		else {
			std::cout << lineLong << std::endl << nameLong << std::endl;
			std::cout << lineLong << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " + " << arrOne[i] << "          |        " << arrOne[i] + arrOne[i] << "           |\n";
			std::cout << lineLong << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " - " << arrOne[i] << "          |        " << arrOne[i] - arrOne[i] << "            |\n";
			std::cout << lineLong << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " / " << arrOne[i] << "          |        " << arrOne[i] / arrOne[i] << "            |\n";
			std::cout << lineLong << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " * " << arrOne[i] << "          |        " << arrOne[i] * arrOne[i] << "          |\n" << lineLong << "\n\n";
		}
		table++;
	}
	for (int i = 3; i < 4; i++)
	{
		std::cout << "\n| Таблица: " << table << std::endl;
		if (arrOne[i] < 10) {
			std::cout << lineShort << std::endl << nameShort << std::endl;
			std::cout << lineShort << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " + " << arrOne[i] << "          |        " << arrOne[i] + arrOne[i] << "          |\n";
			std::cout << lineShort << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " - " << arrOne[i] << "          |        " << arrOne[i] - arrOne[i] << "           |\n";
			std::cout << lineShort << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " / " << arrOne[i] << "          |        " << arrOne[i] / arrOne[i] << "           |\n";
			std::cout << lineShort << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " * " << arrOne[i] << "          |        " << arrOne[i] * arrOne[i] << "          |\n" << lineShort << "\n\n";
		}
		else {
			std::cout << lineLong << std::endl << nameLong << std::endl;
			std::cout << lineLong << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " + " << arrOne[i] << "          |        " << arrOne[i] + arrOne[i] << "           |\n";
			std::cout << lineLong << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " - " << arrOne[i] << "          |        " << arrOne[i] - arrOne[i] << "            |\n";
			std::cout << lineLong << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " / " << arrOne[i] << "          |        " << arrOne[i] / arrOne[i] << "            |\n";
			std::cout << lineLong << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " * " << arrOne[i] << "          |        " << arrOne[i] * arrOne[i] << "          |\n" << lineLong << "\n\n";
		}
		table++;
	}
	for (int i = 4; i < 5; i++)
	{
		std::cout << "\n| Таблица: " << table << std::endl;
		if (arrOne[i] < 10) {
			std::cout << lineShort << std::endl << nameShort << std::endl;
			std::cout << lineShort << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " + " << arrOne[i] << "          |        " << arrOne[i] + arrOne[i] << "          |\n";
			std::cout << lineShort << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " - " << arrOne[i] << "          |        " << arrOne[i] - arrOne[i] << "           |\n";
			std::cout << lineShort << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " / " << arrOne[i] << "          |        " << arrOne[i] / arrOne[i] << "           |\n";
			std::cout << lineShort << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " * " << arrOne[i] << "          |        " << arrOne[i] * arrOne[i] << "          |\n" << lineShort << "\n\n";
		}
		else {
			std::cout << lineLong << std::endl << nameLong << std::endl;
			std::cout << lineLong << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " + " << arrOne[i] << "          |        " << arrOne[i] + arrOne[i] << "           |\n";
			std::cout << lineLong << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " - " << arrOne[i] << "          |        " << arrOne[i] - arrOne[i] << "            |\n";
			std::cout << lineLong << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " / " << arrOne[i] << "          |        " << arrOne[i] / arrOne[i] << "            |\n";
			std::cout << lineLong << "\n|     " << arrOne[i] << "     |           " << arrOne[i] << " * " << arrOne[i] << "          |        " << arrOne[i] * arrOne[i] << "          |\n" << lineLong << "\n\n";
		}
		table++;
	}*/



	// Задание 22
	/*int arr[7];
	int choose, index;
	for (int i = 0; i < 7; i++)
	{
		std::cout << "[ + ] Инициализация | ячейка " << i << ": ";
		std::cin >> arr[i];
	}
	for (;;)
	{
		std::cout << "\n\n[ + ] Настройки массива: \n\n[ 1 ] Сортировка по возрастанию\n[ 2 ] Сортировка по убыванию\n[ 3 ] Перемножить массив\n[ 4 ] Сложить массив\n[ 5 ] Разделить массив\n[ 6 ] Обнулить массив\n[ 7 ] Задать новые значения массиву\n\n[ + ] Ввод:";
		std::cin >> choose;
		if (choose < 0 or choose >= 8) std::cout << "\x1b[41mОшибка ввода!\x1b[0m";
		else if (choose == 1) {
			for (int i = 0; i < 7; i++)
			{
				for (int j = 0; j < 7; j++) {
					if (arr[i] < arr[j]) {
						index = arr[i];
						arr[i] = arr[j];
						arr[j] = index;
					}
				}
			}
		}
		else if (choose == 2) {
			for (int i = 0; i < 7; i++)
			{
				for (int j = 0; j < 7; j++) {
					if (arr[i] > arr[j]) {
						index = arr[i];
						arr[i] = arr[j];
						arr[j] = index;
					}
				}
			}
		}
		else if (choose == 3) {
			int number;
			std::cout << "\nВвеедите значение: ";
			std::cin >> number;
			for (int i = 0; i < 7; i++)
			{
				arr[i] = arr[i] * number;
			}
		}
		else if (choose == 4) {
			int number;
			std::cout << "\nВвеедите значение: ";
			std::cin >> number;
			for (int i = 0; i < 7; i++)
			{
				arr[i] = arr[i] + number;
			}
		}
		else if (choose == 5) {
			int number;
			std::cout << "\nВвеедите значение: ";
			std::cin >> number;
			for (int i = 0; i < 7; i++)
			{
				arr[i] = arr[i] / number;
			}
		}
		else if (choose == 6) {
			for (int i = 0; i < 7; i++)
			{
				arr[i] = 0;
			}
		}
		else if (choose == 7) {
			std::cout << "\n";
			for (int i = 0; i < 7; i++)
			{
				std::cout << "[ + ] Инициализация | ячейка " << i << ": ";
				std::cin >> arr[i];
			}
		}

		std::cout << "\n";
		for (int i = 0; i < 7; i++)
		{
			std::cout << arr[i] << std::endl;
		}
	}*/



	// Задание 24
	
	//int choose, winOne = 0, winTwo = 0, winPC = 0, looseOne = 0, looseTwo = 0, loosePC = 0, drawOne = 0, drawTwo = 0, drawPC = 0, move;
	//std::string playerOne = "Игрок 1", playerTwo = "Игрок 2", colorOne = "\x1b[34m", colorTwo = "\x1b[31m", colorEnd = "\x1b[0m", figureOne = "X", figureTwo = "O", figureFinalOne = "\x1b[34mX\x1b[0m", figureFinalTwo = "\x1b[31mO\x1b[0m", PC = "Компьютер";
	//char i = ' ';
	//double   glassesOne = 0, glassesTwo = 0, glassesPC = 0;
	//std::cout <<"“Крестики нолики”";
	//while (true)
	//{
	//	std::cout << "\n\n[ 1 ] Начать игру;\n[ 2 ] Статистика;\n[ 3 ] Настройки;\n[ 4 ] Выйти.\n";
	//	std::cin >> choose;
	//	if (choose == 1) {
	//		std::cout << "\nВыберете режим:\n\n[ 1 ] Против другого игрока\n[ 2 ] Против компьютера\n";
	//		std::cin >> choose;
	//		if (choose == 1) {
	//			std::string arrOne[3] = { "1","2","3" }, arrTwo[3] = { "4","5","6" }, arrTree[3] = { "7","8","9" };
	//			for (int i = 0; i < 9; i++)
	//			{
	//				std::cout << "\n\n+ |  \033[4mКрестики нолики\033[24m\n\n";
	//				std::cout << "\t" << arrOne[0] << " | " << arrOne[1] << " | " << arrOne[2] << std::endl;
	//				std::cout << "\t- - - - -\n";
	//				std::cout << "\t" << arrTwo[0] << " | " << arrTwo[1] << " | " << arrTwo[2] << std::endl;
	//				std::cout << "\t- - - - -\n";
	//				std::cout << "\t" << arrTree[0] << " | " << arrTree[1] << " | " << arrTree[2] << std::endl;

	//				// 1plaeer
	//				if (arrOne[0] == figureFinalOne and arrTwo[0] == figureFinalOne and arrTree[0] == figureFinalOne) {
	//					std::cout << "\n\n\x1b[32mПобедил:\x1b[0m " << colorOne << playerOne << colorEnd;
	//					glassesOne += 5;
	//					glassesTwo -= 6;
	//					winOne += 1;
	//					looseTwo += 1;
	//					Sleep(10000);
	//					system("cls");
	//					break;
	//				}
	//				else if (arrOne[1] == figureFinalOne and arrTwo[1] == figureFinalOne and arrTree[1] == figureFinalOne) {
	//					std::cout << "\n\n\x1b[32mПобедил:\x1b[0m " << colorOne << playerOne << colorEnd;
	//					glassesOne += 5;
	//					glassesTwo -= 6;
	//					winOne += 1;
	//					looseTwo += 1;
	//					Sleep(10000);
	//					system("cls");
	//					break;
	//				}
	//				else if (arrOne[2] == figureFinalOne and arrTwo[2] == figureFinalOne and arrTree[2] == figureFinalOne) {
	//					std::cout << "\n\n\x1b[32mПобедил:\x1b[0m " << colorOne << playerOne << colorEnd;
	//					glassesOne += 5;
	//					glassesTwo -= 6;
	//					winOne += 1;
	//					looseTwo += 1;
	//					Sleep(10000);
	//					system("cls");
	//					break;
	//				}
	//				else if (arrOne[0] == figureFinalOne and arrOne[1] == figureFinalOne and arrOne[2] == figureFinalOne) {
	//					std::cout << "\n\n\x1b[32mПобедил:\x1b[0m " << colorOne << playerOne << colorEnd;
	//					glassesOne += 5;
	//					glassesTwo -= 6;
	//					winOne += 1;
	//					looseTwo += 1;
	//					Sleep(10000);
	//					system("cls");
	//					break;
	//				}
	//				else if (arrTwo[0] == figureFinalOne and arrTwo[1] == figureFinalOne and arrTwo[2] == figureFinalOne) {
	//					std::cout << "\n\n\x1b[32mПобедил:\x1b[0m " << colorOne << playerOne << colorEnd;
	//					glassesOne += 5;
	//					glassesTwo -= 6;
	//					winOne += 1;
	//					looseTwo += 1;
	//					Sleep(10000);
	//					system("cls");
	//					break;
	//				}
	//				else if (arrTree[0] == figureFinalOne and arrTree[1] == figureFinalOne and arrTree[2] == figureFinalOne) {
	//					std::cout << "\n\n\x1b[32mПобедил:\x1b[0m " << colorOne << playerOne << colorEnd;
	//					glassesOne += 5;
	//					glassesTwo -= 6;
	//					winOne += 1;
	//					looseTwo += 1;
	//					Sleep(10000);
	//					system("cls");
	//					break;
	//				}
	//				else if (arrOne[0] == figureFinalOne and arrTwo[1] == figureFinalOne and arrTree[2] == figureFinalOne) {
	//					std::cout << "\n\n\x1b[32mПобедил:\x1b[0m " << colorOne << playerOne << colorEnd;
	//					glassesOne += 5;
	//					glassesTwo -= 6;
	//					winOne += 1;
	//					looseTwo += 1;
	//					Sleep(10000);
	//					system("cls");
	//					break;
	//				}
	//				else if (arrOne[2] == figureFinalOne and arrTwo[1] == figureFinalOne and arrTree[0] == figureFinalOne) {
	//					std::cout << "\n\n\x1b[32mПобедил:\x1b[0m " << colorOne << playerOne << colorEnd;
	//					glassesOne += 5;
	//					glassesTwo -= 6;
	//					winOne += 1;
	//					looseTwo += 1;
	//					Sleep(10000);
	//					system("cls");
	//					break;
	//				}

	//				// 2plaeer
	//				if (arrOne[0] == figureFinalTwo and arrTwo[0] == figureFinalTwo and arrTree[0] == figureFinalTwo) {
	//					std::cout << "\n\n\x1b[32mПобедил:\x1b[0m " << colorTwo << playerTwo << colorEnd;
	//					glassesTwo += 5;
	//					glassesOne -= 6;
	//					winTwo += 1;
	//					looseTwo += 1;
	//					Sleep(10000);
	//					system("cls");
	//					break;
	//				}
	//				else if (arrOne[1] == figureFinalTwo and arrTwo[1] == figureFinalTwo and arrTree[1] == figureFinalTwo) {
	//					std::cout << "\n\n\x1b[32mПобедил:\x1b[0m " << colorTwo << playerTwo << colorEnd;
	//					glassesTwo += 5;
	//					glassesOne -= 6;
	//					winTwo += 1;
	//					looseTwo += 1;
	//					Sleep(10000);
	//					system("cls");
	//					break;
	//				}
	//				else if (arrOne[2] == figureFinalTwo and arrTwo[2] == figureFinalTwo and arrTree[2] == figureFinalTwo) {
	//					std::cout << "\n\n\x1b[32mПобедил:\x1b[0m " << colorTwo << playerTwo << colorEnd;
	//					glassesTwo += 5;
	//					glassesOne -= 6;
	//					winTwo += 1;
	//					looseTwo += 1;
	//					Sleep(10000);
	//					system("cls");
	//					break;
	//				}
	//				else if (arrOne[0] == figureFinalTwo and arrOne[1] == figureFinalTwo and arrOne[2] == figureFinalTwo) {
	//					std::cout << "\n\n\x1b[32mПобедил:\x1b[0m " << colorTwo << playerTwo << colorEnd;
	//					glassesTwo += 5;
	//					glassesOne -= 6;
	//					winTwo += 1;
	//					looseTwo += 1;
	//					Sleep(10000);
	//					system("cls");
	//					break;
	//				}
	//				else if (arrTwo[0] == figureFinalTwo and arrTwo[1] == figureFinalTwo and arrTwo[2] == figureFinalTwo) {
	//					std::cout << "\n\n\x1b[32mПобедил:\x1b[0m " << colorTwo << playerTwo << colorEnd;
	//					glassesTwo += 5;
	//					glassesOne -= 6;
	//					winTwo += 1;
	//					looseTwo += 1;
	//					Sleep(10000);
	//					system("cls");
	//					break;
	//				}
	//				else if (arrTree[0] == figureFinalTwo and arrTree[1] == figureFinalTwo and arrTree[2] == figureFinalTwo) {
	//					std::cout << "\n\n\x1b[32mПобедил:\x1b[0m " << colorTwo << playerTwo << colorEnd;
	//					glassesTwo += 5;
	//					glassesOne -= 6;
	//					winTwo += 1;
	//					looseTwo += 1;
	//					Sleep(10000);
	//					system("cls");
	//					break;
	//				}
	//				else if (arrOne[0] == figureFinalTwo and arrTwo[1] == figureFinalTwo and arrTree[2] == figureFinalTwo) {
	//					std::cout << "\n\n\x1b[32mПобедил:\x1b[0m " << colorTwo << playerTwo << colorEnd;
	//					glassesTwo += 5;
	//					glassesOne -= 6;
	//					winTwo += 1;
	//					looseTwo += 1;
	//					Sleep(10000);
	//					system("cls");
	//					break;
	//				}
	//				else if (arrOne[2] == figureFinalTwo and arrTwo[1] == figureFinalTwo and arrTree[0] == figureFinalTwo) {
	//					std::cout << "\n\n\x1b[32mПобедил:\x1b[0m " << colorTwo << playerTwo << colorEnd;
	//					glassesTwo += 5;
	//					glassesOne -= 6;
	//					winTwo += 1;
	//					looseTwo += 1;
	//					Sleep(10000);
	//					system("cls");
	//					break;
	//				}


	//				std::cout << "\n+ | Информация\n";
	//				if (i % 2 != 0 and i != 0) std::cout << "+ | " << colorOne << playerOne << colorEnd << " ход на клетку: " << move << std::endl;
	//				if (i % 2 == 0 and i != 0) std::cout << "+ | " << colorTwo << playerTwo << colorEnd << " ход на клетку: " << move << std::endl;

	//				if (i % 2 == 0) std::cout << "\n> | Ходит " << colorOne << playerOne << colorEnd << ": ";
	//				if (i % 2 != 0) std::cout << "\n> | Ходит " << colorTwo << playerTwo << colorEnd << ": ";

	//				while (true)
	//				{
	//					std::cin >> move;

	//					if (move == 1) {
	//						if (arrOne[0] == figureFinalOne or arrOne[0] == figureFinalTwo) {
	//							std::cout << "\x1b[41mПоле занято!\x1b[0m\n\n";
	//							continue;
	//						}
	//						else break;
	//					}

	//					else if (move == 2) {
	//						if (arrOne[1] == figureFinalOne or arrOne[1] == figureFinalTwo) {
	//							std::cout << "\x1b[41mПоле занято!\x1b[0m\n\n";
	//							continue;
	//						}
	//						else break;
	//					}

	//					else if (move == 3) {
	//						if (arrOne[2] == figureFinalOne or arrOne[2] == figureFinalTwo) {
	//							std::cout << "\x1b[41mПоле занято!\x1b[0m\n\n";
	//							continue;
	//						}
	//						else break;
	//					}

	//					else if (move == 4) {
	//						if (arrTwo[0] == figureFinalOne or arrTwo[0] == figureFinalTwo) {
	//							std::cout << "\x1b[41mПоле занято!\x1b[0m\n\n";
	//							continue;
	//						}
	//						else break;
	//					}

	//					else if (move == 5) {
	//						if (arrTwo[1] == figureFinalOne or arrTwo[1] == figureFinalTwo) {
	//							std::cout << "\x1b[41mПоле занято!\x1b[0m\n\n";
	//							continue;
	//						}
	//						else break;
	//					}

	//					else if (move == 6) {
	//						if (arrTwo[2] == figureFinalOne or arrTwo[2] == figureFinalTwo) {
	//							std::cout << "\x1b[41mПоле занято!\x1b[0m\n\n";
	//							continue;
	//						}
	//						else break;
	//					}

	//					else if (move == 7) {
	//						if (arrTree[0] == figureFinalOne or arrTree[0] == figureFinalTwo) {
	//							std::cout << "\x1b[41mПоле занято!\x1b[0m\n\n";
	//							continue;
	//						}
	//						else break;
	//					}

	//					else if (move == 8) {
	//						if (arrTree[1] == figureFinalOne or arrTree[1] == figureFinalTwo) {
	//							std::cout << "\x1b[41mПоле занято!\x1b[0m\n\n";
	//							continue;
	//						}
	//						else break;
	//					}

	//					else if (move == 9) {
	//						if (arrTree[2] == figureFinalOne or arrTree[2] == figureFinalTwo) {
	//							std::cout << "\x1b[41mПоле занято!\x1b[0m\n\n";
	//							continue;
	//						}
	//						else break;
	//					}

	//					else {
	//						while (true)
	//						{
	//							std::cout << "\x1b[41mОшибка ввода!\x1b[0m\n\n";
	//							std::cin >> move;
	//							if (move < 9) break;
	//						}
	//					}
	//				}

	//				if (i % 2 == 0)
	//				{
	//					switch (move)
	//					{
	//					case 1:
	//						arrOne[0] = figureFinalOne;
	//						break;
	//					case 2:
	//						arrOne[1] = figureFinalOne;
	//						break;
	//					case 3:
	//						arrOne[2] = figureFinalOne;
	//						break;
	//					case 4:
	//						arrTwo[0] = figureFinalOne;
	//						break;
	//					case 5:
	//						arrTwo[1] = figureFinalOne;
	//						break;
	//					case 6:
	//						arrTwo[2] = figureFinalOne;
	//						break;
	//					case 7:
	//						arrTree[0] = figureFinalOne;
	//						break;
	//					case 8:
	//						arrTree[1] = figureFinalOne;
	//						break;
	//					case 9:
	//						arrTree[2] = figureFinalOne;
	//						break;
	//					default:
	//						std::cout << "\x1b[41mОшибка ввода!\x1b[0m\n\n";
	//						break;
	//					}
	//				}

	//				if (i % 2 != 0)
	//				{
	//					switch (move)
	//					{
	//					case 1:
	//						arrOne[0] = figureFinalTwo;
	//						break;
	//					case 2:
	//						arrOne[1] = figureFinalTwo;
	//						break;
	//					case 3:
	//						arrOne[2] = figureFinalTwo;
	//						break;
	//					case 4:
	//						arrTwo[0] = figureFinalTwo;
	//						break;
	//					case 5:
	//						arrTwo[1] = figureFinalTwo;
	//						break;
	//					case 6:
	//						arrTwo[2] = figureFinalTwo;
	//						break;
	//					case 7:
	//						arrTree[0] = figureFinalTwo;
	//						break;
	//					case 8:
	//						arrTree[1] = figureFinalTwo;
	//						break;
	//					case 9:
	//						arrTree[2] = figureFinalTwo;
	//						break;
	//					default:
	//						std::cout << "\x1b[41mОшибка ввода!\x1b[0m\n\n";
	//						break;
	//					}
	//				}

	//				if (i == 8) {
	//					std::cout << "\n\n\x1b[31mНичья!\x1b[0m";
	//					drawOne += 1;
	//					drawPC += 1;
	//					glassesOne -= 1.2;
	//					glassesPC -= 1.2;
	//					Sleep(10000);
	//				}

	//				Sleep(500);
	//				system("cls");
	//			}

	//		}
	//		//pc
	//		else if (choose == 2) {
	//			std::string arrOne[3] = { "1","2","3" }, arrTwo[3] = { "4","5","6" }, arrTree[3] = { "7","8","9" };
	//			for (int i = 0; i < 9; i++)
	//			{
	//				std::cout << "\n\n+ |  \033[4mКрестики нолики\033[24m\n\n";
	//				std::cout << "\t" << arrOne[0] << " | " << arrOne[1] << " | " << arrOne[2] << std::endl;
	//				std::cout << "\t- - - - -\n";
	//				std::cout << "\t" << arrTwo[0] << " | " << arrTwo[1] << " | " << arrTwo[2] << std::endl;
	//				std::cout << "\t- - - - -\n";
	//				std::cout << "\t" << arrTree[0] << " | " << arrTree[1] << " | " << arrTree[2] << std::endl;

	//				// 1plaeer
	//				if (arrOne[0] == figureFinalOne and arrTwo[0] == figureFinalOne and arrTree[0] == figureFinalOne) {
	//					std::cout << "\n\n\x1b[32mПобедил:\x1b[0m " << colorOne << playerOne << colorEnd;
	//					glassesOne += 5;
	//					glassesPC -= 6;
	//					winOne += 1;
	//					loosePC += 1;
	//					Sleep(10000);
	//					system("cls");
	//					break;
	//				}
	//				else if (arrOne[1] == figureFinalOne and arrTwo[1] == figureFinalOne and arrTree[1] == figureFinalOne) {
	//					std::cout << "\n\n\x1b[32mПобедил:\x1b[0m " << colorOne << playerOne << colorEnd;
	//					glassesOne += 5;
	//					glassesPC -= 6;
	//					winOne += 1;
	//					loosePC += 1;
	//					Sleep(10000);
	//					system("cls");
	//					break;
	//				}
	//				else if (arrOne[2] == figureFinalOne and arrTwo[2] == figureFinalOne and arrTree[2] == figureFinalOne) {
	//					std::cout << "\n\n\x1b[32mПобедил:\x1b[0m " << colorOne << playerOne << colorEnd;
	//					glassesOne += 5;
	//					glassesPC -= 6;
	//					winOne += 1;
	//					loosePC += 1;
	//					Sleep(10000);
	//					system("cls");
	//					break;
	//				}
	//				else if (arrOne[0] == figureFinalOne and arrOne[1] == figureFinalOne and arrOne[2] == figureFinalOne) {
	//					std::cout << "\n\n\x1b[32mПобедил:\x1b[0m " << colorOne << playerOne << colorEnd;
	//					glassesOne += 5;
	//					glassesPC -= 6;
	//					winOne += 1;
	//					loosePC += 1;
	//					Sleep(10000);
	//					system("cls");
	//					break;
	//				}
	//				else if (arrTwo[0] == figureFinalOne and arrTwo[1] == figureFinalOne and arrTwo[2] == figureFinalOne) {
	//					std::cout << "\n\n\x1b[32mПобедил:\x1b[0m " << colorOne << playerOne << colorEnd;
	//					glassesOne += 5;
	//					glassesPC -= 6;
	//					winOne += 1;
	//					loosePC += 1;
	//					Sleep(10000);
	//					system("cls");
	//					break;
	//				}
	//				else if (arrTree[0] == figureFinalOne and arrTree[1] == figureFinalOne and arrTree[2] == figureFinalOne) {
	//					std::cout << "\n\n\x1b[32mПобедил:\x1b[0m " << colorOne << playerOne << colorEnd;
	//					glassesOne += 5;
	//					glassesPC -= 6;
	//					winOne += 1;
	//					loosePC += 1;
	//					Sleep(10000);
	//					system("cls");
	//					break;
	//				}
	//				else if (arrOne[0] == figureFinalOne and arrTwo[1] == figureFinalOne and arrTree[2] == figureFinalOne) {
	//					std::cout << "\n\n\x1b[32mПобедил:\x1b[0m " << colorOne << playerOne << colorEnd;
	//					glassesOne += 5;
	//					glassesPC -= 6;
	//					winOne += 1;
	//					loosePC += 1;
	//					Sleep(10000);
	//					system("cls");
	//					break;
	//				}
	//				else if (arrOne[2] == figureFinalOne and arrTwo[1] == figureFinalOne and arrTree[0] == figureFinalOne) {
	//					std::cout << "\n\n\x1b[32mПобедил:\x1b[0m " << colorOne << playerOne << colorEnd;
	//					glassesOne += 5;
	//					glassesPC -= 6;
	//					winOne += 1;
	//					loosePC += 1;
	//					Sleep(10000);
	//					system("cls");
	//					break;
	//				}

	//				// pc
	//				if (arrOne[0] == figureFinalTwo and arrTwo[0] == figureFinalTwo and arrTree[0] == figureFinalTwo) {
	//					std::cout << "\n\n\x1b[32mПобедил:\x1b[0m " << colorTwo << PC << colorEnd;
	//					glassesPC += 5;
	//					glassesOne -= 6;
	//					winPC += 1;
	//					looseOne += 1;
	//					Sleep(10000);
	//					system("cls");
	//					break;
	//				}
	//				else if (arrOne[1] == figureFinalTwo and arrTwo[1] == figureFinalTwo and arrTree[1] == figureFinalTwo) {
	//					std::cout << "\n\n\x1b[32mПобедил:\x1b[0m " << colorTwo << PC << colorEnd;
	//					glassesPC += 5;
	//					glassesOne -= 6;
	//					winPC += 1;
	//					looseOne += 1;
	//					Sleep(10000);
	//					system("cls");
	//					break;
	//				}
	//				else if (arrOne[2] == figureFinalTwo and arrTwo[2] == figureFinalTwo and arrTree[2] == figureFinalTwo) {
	//					std::cout << "\n\n\x1b[32mПобедил:\x1b[0m " << colorTwo << PC << colorEnd;
	//					glassesPC += 5;
	//					glassesOne -= 6;
	//					winPC += 1;
	//					looseOne += 1;
	//					Sleep(10000);
	//					system("cls");
	//					break;
	//				}
	//				else if (arrOne[0] == figureFinalTwo and arrOne[1] == figureFinalTwo and arrOne[2] == figureFinalTwo) {
	//					std::cout << "\n\n\x1b[32mПобедил:\x1b[0m " << colorTwo << PC << colorEnd;
	//					glassesPC += 5;
	//					glassesOne -= 6;
	//					winPC += 1;
	//					looseOne += 1;
	//					Sleep(10000);
	//					system("cls");
	//					break;
	//				}
	//				else if (arrTwo[0] == figureFinalTwo and arrTwo[1] == figureFinalTwo and arrTwo[2] == figureFinalTwo) {
	//					std::cout << "\n\n\x1b[32mПобедил:\x1b[0m " << colorTwo << PC << colorEnd;
	//					glassesPC += 5;
	//					glassesOne -= 6;
	//					winPC += 1;
	//					looseOne += 1;
	//					Sleep(10000);
	//					system("cls");
	//					break;
	//				}
	//				else if (arrTree[0] == figureFinalTwo and arrTree[1] == figureFinalTwo and arrTree[2] == figureFinalTwo) {
	//					std::cout << "\n\n\x1b[32mПобедил:\x1b[0m " << colorTwo << PC << colorEnd;
	//					glassesPC += 5;
	//					glassesOne -= 6;
	//					winPC += 1;
	//					looseOne += 1;
	//					Sleep(10000);
	//					system("cls");
	//					break;
	//				}
	//				else if (arrOne[0] == figureFinalTwo and arrTwo[1] == figureFinalTwo and arrTree[2] == figureFinalTwo) {
	//					std::cout << "\n\n\x1b[32mПобедил:\x1b[0m " << colorTwo << PC << colorEnd;
	//					glassesPC += 5;
	//					glassesOne -= 6;
	//					winPC += 1;
	//					looseOne += 1;
	//					Sleep(10000);
	//					system("cls");
	//					break;
	//				}
	//				else if (arrOne[2] == figureFinalTwo and arrTwo[1] == figureFinalTwo and arrTree[0] == figureFinalTwo) {
	//					std::cout << "\n\n\x1b[32mПобедил:\x1b[0m " << colorTwo << PC << colorEnd;
	//					glassesPC += 5;
	//					glassesOne -= 6;
	//					winPC += 1;
	//					looseOne += 1;
	//					Sleep(10000);
	//					system("cls");
	//					break;
	//				}

	//				std::cout << "\n+ | Информация\n";
	//				if (i % 2 != 0 and i != 0) std::cout << "+ | " << colorOne << playerOne << colorEnd << " ход на клетку: " << move << std::endl;
	//				if (i % 2 == 0 and i != 0) std::cout << "+ | " << colorTwo << PC << colorEnd << " ход на клетку: " << move << std::endl;

	//				if (i % 2 == 0) {
	//					std::cout << "\n> | Ходит " << colorOne << playerOne << colorEnd << ": ";
	//					while (true)
	//					{
	//						std::cin >> move;

	//						if (move == 1) {
	//							if (arrOne[0] == figureFinalOne or arrOne[0] == figureFinalTwo) {
	//								std::cout << "\x1b[41mПоле занято!\x1b[0m\n\n";
	//								continue;
	//							}
	//							else break;
	//						}

	//						else if (move == 2) {
	//							if (arrOne[1] == figureFinalOne or arrOne[1] == figureFinalTwo) {
	//								std::cout << "\x1b[41mПоле занято!\x1b[0m\n\n";
	//								continue;
	//							}
	//							else break;
	//						}

	//						else if (move == 3) {
	//							if (arrOne[2] == figureFinalOne or arrOne[2] == figureFinalTwo) {
	//								std::cout << "\x1b[41mПоле занято!\x1b[0m\n\n";
	//								continue;
	//							}
	//							else break;
	//						}

	//						else if (move == 4) {
	//							if (arrTwo[0] == figureFinalOne or arrTwo[0] == figureFinalTwo) {
	//								std::cout << "\x1b[41mПоле занято!\x1b[0m\n\n";
	//								continue;
	//							}
	//							else break;
	//						}

	//						else if (move == 5) {
	//							if (arrTwo[1] == figureFinalOne or arrTwo[1] == figureFinalTwo) {
	//								std::cout << "\x1b[41mПоле занято!\x1b[0m\n\n";
	//								continue;
	//							}
	//							else break;
	//						}

	//						else if (move == 6) {
	//							if (arrTwo[2] == figureFinalOne or arrTwo[2] == figureFinalTwo) {
	//								std::cout << "\x1b[41mПоле занято!\x1b[0m\n\n";
	//								continue;
	//							}
	//							else break;
	//						}

	//						else if (move == 7) {
	//							if (arrTree[0] == figureFinalOne or arrTree[0] == figureFinalTwo) {
	//								std::cout << "\x1b[41mПоле занято!\x1b[0m\n\n";
	//								continue;
	//							}
	//							else break;
	//						}

	//						else if (move == 8) {
	//							if (arrTree[1] == figureFinalOne or arrTree[1] == figureFinalTwo) {
	//								std::cout << "\x1b[41mПоле занято!\x1b[0m\n\n";
	//								continue;
	//							}
	//							else break;
	//						}

	//						else if (move == 9) {
	//							if (arrTree[2] == figureFinalOne or arrTree[2] == figureFinalTwo) {
	//								std::cout << "\x1b[41mПоле занято!\x1b[0m\n\n";
	//								continue;
	//							}
	//							else break;
	//						}

	//						else {
	//							while (true)
	//							{
	//								std::cout << "\x1b[41mОшибка ввода!\x1b[0m\n\n";
	//								std::cin >> move;
	//								if (move < 9) break;
	//							}
	//						}
	//					}
	//				}
	//				if (i % 2 != 0) {
	//					std::cout << "\n> | Ходит " << colorTwo << PC << colorEnd << ": ";
	//					while (true)
	//					{
	//						move = rand() % 9;

	//						if (move == 1) {
	//							if (arrOne[0] == figureFinalOne or arrOne[0] == figureFinalTwo) {

	//								continue;
	//							}
	//							else break;
	//						}

	//						else if (move == 2) {
	//							if (arrOne[1] == figureFinalOne or arrOne[1] == figureFinalTwo) {

	//								continue;
	//							}
	//							else break;
	//						}

	//						else if (move == 3) {
	//							if (arrOne[2] == figureFinalOne or arrOne[2] == figureFinalTwo) {

	//								continue;
	//							}
	//							else break;
	//						}

	//						else if (move == 4) {
	//							if (arrTwo[0] == figureFinalOne or arrTwo[0] == figureFinalTwo) {

	//								continue;
	//							}
	//							else break;
	//						}

	//						else if (move == 5) {
	//							if (arrTwo[1] == figureFinalOne or arrTwo[1] == figureFinalTwo) {

	//								continue;
	//							}
	//							else break;
	//						}

	//						else if (move == 6) {
	//							if (arrTwo[2] == figureFinalOne or arrTwo[2] == figureFinalTwo) {

	//								continue;
	//							}
	//							else break;
	//						}

	//						else if (move == 7) {
	//							if (arrTree[0] == figureFinalOne or arrTree[0] == figureFinalTwo) {

	//								continue;
	//							}
	//							else break;
	//						}

	//						else if (move == 8) {
	//							if (arrTree[1] == figureFinalOne or arrTree[1] == figureFinalTwo) {

	//								continue;
	//							}
	//							else break;
	//						}

	//						else if (move == 9) {
	//							if (arrTree[2] == figureFinalOne or arrTree[2] == figureFinalTwo) {

	//								continue;
	//							}
	//							else break;
	//						}

	//						else {
	//							while (true)
	//							{

	//								move = rand() % 9;
	//								if (move < 9) break;
	//							}
	//						}
	//					}
	//				}


	//				if (i % 2 == 0)
	//				{
	//					switch (move)
	//					{
	//					case 1:
	//						arrOne[0] = figureFinalOne;
	//						break;
	//					case 2:
	//						arrOne[1] = figureFinalOne;
	//						break;
	//					case 3:
	//						arrOne[2] = figureFinalOne;
	//						break;
	//					case 4:
	//						arrTwo[0] = figureFinalOne;
	//						break;
	//					case 5:
	//						arrTwo[1] = figureFinalOne;
	//						break;
	//					case 6:
	//						arrTwo[2] = figureFinalOne;
	//						break;
	//					case 7:
	//						arrTree[0] = figureFinalOne;
	//						break;
	//					case 8:
	//						arrTree[1] = figureFinalOne;
	//						break;
	//					case 9:
	//						arrTree[2] = figureFinalOne;
	//						break;
	//					default:
	//						std::cout << "\x1b[41mОшибка ввода!\x1b[0m\n\n";
	//						break;
	//					}
	//				}

	//				if (i % 2 != 0)
	//				{
	//					switch (move)
	//					{
	//					case 1:
	//						arrOne[0] = figureFinalTwo;
	//						break;
	//					case 2:
	//						arrOne[1] = figureFinalTwo;
	//						break;
	//					case 3:
	//						arrOne[2] = figureFinalTwo;
	//						break;
	//					case 4:
	//						arrTwo[0] = figureFinalTwo;
	//						break;
	//					case 5:
	//						arrTwo[1] = figureFinalTwo;
	//						break;
	//					case 6:
	//						arrTwo[2] = figureFinalTwo;
	//						break;
	//					case 7:
	//						arrTree[0] = figureFinalTwo;
	//						break;
	//					case 8:
	//						arrTree[1] = figureFinalTwo;
	//						break;
	//					case 9:
	//						arrTree[2] = figureFinalTwo;
	//						break;
	//					default:
	//						std::cout << "\x1b[41mОшибка ввода!\x1b[0m\n\n";
	//						break;
	//					}
	//				}
	//				if (i == 8) {
	//					std::cout << "\n\n\x1b[31mНичья!\x1b[0m";
	//					drawOne += 1;
	//					drawPC += 1;
	//					glassesOne -= 1.2;
	//					glassesPC -= 1.2;
	//					Sleep(10000);
	//				}
	//				Sleep(500);
	//				system("cls");
	//			}

	//		}

	//	}


	//		else if (choose == 2) {
	//			std::cout << "\n+ | Статистика\n\n";
	//			std::cout << "                  \033[4m\x1b[32mW\x1b[0m\033[24m     \033[4m\x1b[31mL\x1b[0m\033[24m       \033[4m\x1b[33mD\x1b[0m\033[24m           \033[4mОчки\033[24m\n";
	//			std::cout << "1 | " << playerOne << "\t  " << winOne << " \t" << looseOne << " \t" << drawOne << " \t|   " << glassesOne << std::endl;
	//			std::cout << "2 | " << playerTwo << "\t  " << winTwo << " \t" << looseTwo << " \t" << drawTwo << " \t|   " << glassesTwo << std::endl;
	//			std::cout << "3 | " << "Компьютер" << "\t  " << winPC << " \t" << loosePC << " \t" << drawPC << " \t|   " << glassesPC << std::endl;
	//		}


	//		else if (choose == 3) {
	//			std::cout << "\n+ | \033[4mНастройки игрока\033[24m\n\n1 | Игрок 1\n2 | Игрок 2\n\n> | Ввод: ";
	//			std::cin >> choose;


	//			if (choose == 1) {
	//				std::cout << "\n+ | \033[4mНастройки игрока\033[24m [1]\n\n";
	//				std::cout << "1 | Ник      :  " << playerOne << std::endl;
	//				std::cout << "2 | Фигура   :  " << figureOne << std::endl;
	//				std::cout << "3 | Цвет     :  " << colorOne << "Цвет\x1b[0m\n";
	//				std::cout << "4 | Назад\n";
	//				std::cin >> choose;
	//				if (choose == 4) continue;
	//				else if (choose == 1) {
	//					std::cout << "Введите новый ник: ";
	//					std::cin >> playerOne;
	//				}
	//				else if (choose == 2) {
	//					figureFinalOne = "";
	//					std::cout << "Введите новую фигуру: ";
	//					std::cin >> figureOne;
	//					while (true)
	//					{
	//						if (figureOne.length() > 1)
	//						{
	//							std::cout << "\x1b[41mОшибка ввода!\x1b[0m\n\n";
	//							std::cin >> figureOne;
	//						}
	//						else break;
	//					}
	//					figureFinalOne = colorOne + figureOne + colorEnd;
	//				}
	//				else if (choose == 3) {
	//					std::cout << "Выберете цвет:\n1 Синий\n2 Красный\n3 Голубой\n4 Зеленый\n5 Желтый\n";
	//					int chooseColor;
	//					std::cin >> chooseColor;
	//					switch (chooseColor)
	//					{
	//					case 1:
	//						colorOne = "\x1b[34m";
	//						figureFinalOne = colorOne + figureOne + colorEnd;
	//						break;
	//					case 2:
	//						colorOne = "\x1b[31m";
	//						figureFinalOne = colorOne + figureOne + colorEnd;
	//						break;
	//					case 3:
	//						colorOne = "\x1b[36m";
	//						figureFinalOne = colorOne + figureOne + colorEnd;
	//						break;
	//					case 4:
	//						colorOne = "\x1b[32m";
	//						figureFinalOne = colorOne + figureOne + colorEnd;
	//						break;
	//					case 5:
	//						colorOne = "\x1b[33m";
	//						figureFinalOne = colorOne + figureOne + colorEnd;
	//						break;
	//					default:
	//						std::cout << "\x1b[41mОшибка ввода!\x1b[0m\n\n";
	//						break;
	//					}
	//					figureFinalOne = colorOne + figureOne + colorEnd;
	//				}
	//				else std::cout << "\x1b[41mОшибка ввода!\x1b[0m\n\n";
	//			}


	//			else if (choose == 2) {
	//				std::cout << "\n+ | \033[4mНастройки игрока\033[24m [2]\n\n";
	//				std::cout << "1 | Ник      :  " << playerTwo << std::endl;
	//				std::cout << "2 | Фигура   :  " << figureTwo << std::endl;
	//				std::cout << "3 | Цвет     :  " << colorTwo << "Цвет\x1b[0m\n";
	//				std::cout << "4 | Назад\n";
	//				std::cin >> choose;
	//				if (choose == 4) continue;
	//				else if (choose == 1) {
	//					std::cout << "Введите новый ник: ";
	//					std::cin >> playerTwo;
	//				}
	//				else if (choose == 2) {
	//					std::cout << "Введите новую фигуру: ";
	//					std::cin >> figureTwo;
	//					while (true)
	//					{
	//						if (figureTwo.length() > 1)
	//						{
	//							std::cout << "\x1b[41mОшибка ввода!\x1b[0m\n\n";
	//							std::cin >> figureTwo;
	//						}
	//						else break;
	//					}
	//					figureFinalTwo = colorTwo + figureTwo + colorEnd;
	//				}
	//				else if (choose == 3) {
	//					std::cout << "Выберете цвет:\n1 Синий\n2 Красный\n3 Голубой\n4 Зеленый\n5 Желтый\n";
	//					int chooseColor;
	//					std::cin >> chooseColor;
	//					switch (chooseColor)
	//					{
	//					case 1:
	//						colorTwo = "\x1b[34m";
	//						break;
	//					case 2:
	//						colorTwo = "\x1b[31m";
	//						break;
	//					case 3:
	//						colorTwo = "\x1b[36m";
	//						break;
	//					case 4:
	//						colorTwo = "\x1b[32m";
	//						break;
	//					case 5:
	//						colorTwo = "\x1b[33m";
	//						break;
	//					default:
	//						std::cout << "\x1b[41mОшибка ввода!\x1b[0m\n\n";
	//						break;
	//					}
	//					figureFinalTwo = colorTwo + figureTwo + colorEnd;
	//				}
	//				else std::cout << "\x1b[41mОшибка ввода!\x1b[0m\n\n";
	//			}
	//			else std::cout << "\x1b[41mОшибка ввода!\x1b[0m\n\n";



	//		}
	//		else if (choose == 4) {
	//			break;
	//		}
	//		else std::cout << "\x1b[41mОшибка ввода!\x1b[0m\n\n";
	//	}
	
	

	// Задание 25

	/*int arr[5][5];
	int choose;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++) {
			arr[i][j] = rand() % 49;
		}
	}

	std::cout << "[ + ] Сортировка:\n\n";
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++) {
			if (arr[i][j] <= 9) {
				std::cout << " " << arr[i][j] << " ";
			}
			else if (arr[i][j] > 9 and arr[i][j] <= 19) {
				std::cout << "\x1b[32m" << arr[i][j] << " \x1b[0m";
			}
			else if (arr[i][j] > 19 and arr[i][j] <= 29) {
				std::cout << "\x1b[34m" << arr[i][j] << " \x1b[0m";
			}
			else if (arr[i][j] > 29 and arr[i][j] <= 39) {
				std::cout << "\x1b[31m" << arr[i][j] << " \x1b[0m";
			}
			else if (arr[i][j] > 39 and arr[i][j] <= 49) {
				std::cout << "\x1b[33m" << arr[i][j] << " \x1b[0m";
			}
		}
		std::cout << "\n";
	}

	while (true)
	{
		std::cout << "\n[ 1 ] По убыванию\n[ 2 ] По возрастанию\n[ + ] Ввод: ";
		std::cin >> choose;

		if (choose == 1) {
			int index;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++) {
					for (int a = 0; a < 5; a++)
					{
						for (int b = 0; b < 5; b++) {
							if (arr[i][j] > arr[a][b]) {
								index = arr[i][j];
								arr[i][j] = arr[a][b];
								arr[a][b] = index;
							}
						}
					}
				}
			}

			std::cout << "\n[ + ] Результат:\n";
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++) {
					if (arr[i][j] <= 9) {
						std::cout << " " << arr[i][j] << " ";
					}
					else if (arr[i][j] > 9 and arr[i][j] <= 19) {
						std::cout << "\x1b[32m" << arr[i][j] << " \x1b[0m";
					}
					else if (arr[i][j] > 19 and arr[i][j] <= 29) {
						std::cout << "\x1b[34m" << arr[i][j] << " \x1b[0m";
					}
					else if (arr[i][j] > 29 and arr[i][j] <= 39) {
						std::cout << "\x1b[31m" << arr[i][j] << " \x1b[0m";
					}
					else if (arr[i][j] > 39 and arr[i][j] <= 49) {
						std::cout << "\x1b[33m" << arr[i][j] << " \x1b[0m";
					}
				}
				std::cout << "\n";
			}

		}
		else if (choose == 2) {
			int index;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++) {
					for (int a = 0; a < 5; a++)
					{
						for (int b = 0; b < 5; b++) {
							if (arr[i][j] < arr[a][b]) {
								index = arr[i][j];
								arr[i][j] = arr[a][b];
								arr[a][b] = index;
							}
						}
					}
				}
			}

			std::cout << "\n[ + ] Результат:\n";
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++) {
					if (arr[i][j] <= 9) {
						std::cout << " " << arr[i][j] << " ";
					}
					else if (arr[i][j] > 9 and arr[i][j] <= 19) {
						std::cout << "\x1b[32m" << arr[i][j] << " \x1b[0m";
					}
					else if (arr[i][j] > 19 and arr[i][j] <= 29) {
						std::cout << "\x1b[34m" << arr[i][j] << " \x1b[0m";
					}
					else if (arr[i][j] > 29 and arr[i][j] <= 39) {
						std::cout << "\x1b[31m" << arr[i][j] << " \x1b[0m";
					}
					else if (arr[i][j] > 39 and arr[i][j] <= 49) {
						std::cout << "\x1b[33m" << arr[i][j] << " \x1b[0m";
					}
				}
				std::cout << "\n";
			}
		}
		else std::cout << "\x1b[41mОшибка ввода!\x1b[0m\n\n";
	}*/




	// Задание 26

	int choose, numberFiles = 0, i = 0, number = 0;
	std::string text, txt = ".txt", correctText, line, filename, filenameCorrect;
	std::string filesNameArr[10];
	std::time_t now = std::time(nullptr);
	std::tm timeArray[10];
	while (true)
	{
		std::cout << "\n“Редактор текста 0.1”\n\n[ 1 ] Создать файл\n[ 2 ] Открыть файл\n[ 3 ] Настройки\n[ 4 ] Выйти\n";
		std::cin >> choose;
		if (choose == 1) {

				std::cout << "\nВведите текст (нажмите 's' для сохранения, 'q' для выхода):\n";
				while (true)
				{	
					getline(std::cin, text);
					if (text == "s") {
						std::cout << "\nВведите имя файла для сохранения: ";
						std::getline(std::cin, filename);
						filenameCorrect = filename + txt;
						filesNameArr[i] += filenameCorrect;
						std::ofstream myfile(filenameCorrect);
						number++;
						if (myfile.is_open()) {
							myfile << correctText;
							myfile.close();
							std::cout << "\x1b[42mФайл сохранен.\x1b[0m\n";
							numberFiles += 1;
							std::time_t now = std::time(nullptr);
							timeArray[i] = *std::localtime(&now);
							i++;
							break;
						}
						else {
							std::cout << "\x1b[41mОшибка при сохранении файла.\x1b[0m\n";
						}
					}
					else if (text == "q") {
						if (text[0] == '\0') {
							break;
						}
						else {
							char choice;
							std::cout << "\nВы не сохранили файл. Вы уверены, что хотите выйти? (y/n): ";
							std::cin >> choice;
							std::cin.ignore();
							if (choice == 'y') {
								break;
							}
							else {
								correctText += text + "\n";
							}
						}
					}
					correctText += text + "\n";
				}
		}

		else if (choose == 2) {
			std::cout << "\n[ + ] Сохраненые файлы:\n\n";
			std::cout << "    Название\t\tДата\t\tВремя\n";
			for (int i = 0; i < number; i++)
			{
				std::cout << "[" << i+1 << "] " << filesNameArr[i] << "\t\t"  << std::put_time(&timeArray[i], "%Y-%m-%d") << "      " << std::put_time(&timeArray[i], "%H:%M:%S") << std::endl;
			}
			std::cout << "\n\n[ + ] Ввод: ";
			std::cin >> choose;
			choose--;
			std::ifstream myfile(filesNameArr[choose]);
			if (!myfile) {
				std::cout << "Ошибка: не удалось открыть файл " << filesNameArr[choose] << std::endl;
			}
			while (std::getline(myfile, line)) {
				std::cout << line << std::endl;
			}
			std::cout << "\n\n";
			myfile.close();
		}
		else if (choose == 3) {

		}
		else if (choose == 4) {
			break;
		}
	}



	





















	system("pause>nul");
	return 0;
}

