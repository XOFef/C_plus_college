﻿#include <iostream>
#include <cstdlib>

// Задание 12
void win() {
	std::cout << "Ответ верный!\n\n";
}
void loose() {
	std::cout << "Ответ не верный!\n\n";
}
void GameOverLoose() {
	std::cout << "\n\nИгра закончена! Вы проиграли!";
}
void GameOverWin() {
	std::cout << "\n\nИгра закончена! Вы Выйграли!";
}

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

    /*
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
	*/



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

	/*int choose;
	std::cout << "[ + ] Программа - “Геометрические фигуры”\n\n";
	std::cout << "[ 1 ] Линия\n[ 2 ] Квадрат\n[ 3 ] Прямоугольник\n[ 4 ] Треугольник\n[ 5 ] Решетка\n[ 6 ] Крестик\n[ 7 ] Плюс\n[ 8 ] Ромб\n\n[ + ] Выберите фигуру: ";
	std::cin >> choose;

	
	if (choose == 1) {

		std::cout << "\n[ + ] Фигура: “Линия”\n\n[ 1 ] Горизонтальная\n[ 2 ] Вертикальная \n\nВыберите тип : ";
		int position, length, i = 0;
		char texture;
		std::cin >> position;
		if (position < 0 or position > 2) {
			std::cout << "Ошибка ввода!";
			exit;
		}
		std::cout << "[ + ] Длина линии: ";
		std::cin >> length;
		std::cout << "[ + ] Текстура линии: ";
		std::cin >> texture;
		std::cout << "\n";
		if (position == 1) {
			while (i < length)
			{
				std::cout << texture;
				i++;
			}
		}
		else if (position == 2) {
			while (i < length) {
				std::cout << "\t" << texture << std::endl;
				i++;
			}
		}
	}




	else std::cout << "Ошибка ввода!";*/



	// Задание 12

	char quiz;
	std::string name = "user";
	int numQuestion = 8;
	std::cout << "Приветсвуем!\n";
	while (true) {
		std::cout << "\n[ 1 ] Начать игру\n[ 2 ] Настройки\n[ 3 ] Правила\n[ 4 ] Выйти\n";
		int choose;
		std::cin >> choose;

		if (choose == 1) {
			int life = 3, glasses = 0;
			// 1
			std::cout << "\n\n[ + ] Игрок: " << name << " |  жизни: " << life << " | очки: " << glasses;
			std::cout << "\n[ 1 ] Вопрос: Системный язык программирования?\n";
			std::cout << "[ A ] Python\t[ B ] С#\n[ C ] Ruby\t[ D ] C++\n";
			std::cout << "[ + ] Выбрать ответ: ";
			std::cin >> quiz;
			if (quiz == 'd' or quiz == 'D') {
				win();
				glasses++;
			}
			else {
				loose();
				life--;
			}

			// 2
			std::cout << "\n\n[ + ] Игрок: " << name << " |  жизни: " << life << " | очки: " << glasses;
			std::cout << "\n[ 2 ] Вопрос: Какой язык программирования является наиболее популярным в мире?\n";
			std::cout << "[ A ] Python\t[ B ] Java\n[ C ] C++\t[ D ] Ruby\n";
			std::cout << "[ + ] Выбрать ответ: ";
			std::cin >> quiz;
			if (quiz == 'a' or quiz == 'A') {
				win();
				glasses++;
			}
			else {
				loose();
				life--;
			}

			// 3
			std::cout << "\n\n[ + ] Игрок: " << name << " |  жизни: " << life << " | очки: " << glasses;
			std::cout << "\n[ 3 ] Вопрос: Что такое HTML?\n";
			std::cout << "[ A ] Основной язык разметки веб-страниц\t[ B ] Язык программирования для создания приложений\n[ C ] Протокол передачи данных в сети   \t[ D ] Графический редактор\n";
			std::cout << "[ + ] Выбрать ответ: ";
			std::cin >> quiz;
			if (quiz == 'a' or quiz == 'A') {
				win();
				glasses++;
			}
			else {
				loose();
				life--;
			}
			if (life == 0) {
				GameOverLoose();
				break;
			}

			// 4
			std::cout << "\n\n[ + ] Игрок: " << name << " |  жизни: " << life << " | очки: " << glasses;
			std::cout << "\n[ 4 ] Вопрос: Что такое SQL?\n";
			std::cout << "[ A ] Язык программирования для создания веб-приложений\t[ B ] Язык запросов к базам данных\n[ C ] Фреймворк для разработки мобильных приложений\t[ D ] Система управления контентом\n";
			std::cout << "[ + ] Выбрать ответ: ";
			std::cin >> quiz;
			if (quiz == 'b' or quiz == 'B') {
				win();
				glasses++;
			}

			else {
				loose();
				life--;
			}


			if (life == 0) {
				GameOverLoose();
				break;
			}


			// 5
			std::cout << "\n\n[ + ] Игрок: " << name << " |  жизни: " << life << " | очки: " << glasses;
			std::cout << "\n[ 5 ] Вопрос: Что такое алгоритм?\n";
			std::cout << "[ A ] Программа для защиты от вирусов\t[ B ] Последовательность шагов для решения задачи\n[ C ] Тип базы данных             \t[ D ] Вид компьютерной аппаратуры\n";
			std::cout << "[ + ] Выбрать ответ: ";
			std::cin >> quiz;
			if (quiz == 'b' or quiz == 'B') {
				win();
				glasses++;
			}

			else {
				loose();
				life--;
			}


			if (life == 0) {
				GameOverLoose();
				break;
			}
			

			// 6
			std::cout << "\n\n[ + ] Игрок: " << name << " |  жизни: " << life << " | очки: " << glasses;
			std::cout << "\n[ 6 ] Вопрос: Что такое API?\n";
			std::cout << "[ A ] Аппаратное программное обеспечение\t                        [ B ] Программа для создания графики\n[ C ] Интерфейс приложения для взаимодействия с другими программами\t[ D ] Специальный вид компьютерных игр\n";
			std::cout << "[ + ] Выбрать ответ: ";
			std::cin >> quiz;
			if (quiz == 'c' or quiz == 'C') {
				win();
				glasses++;
			}

			else {
				loose();
				life--;
			}


			if (life == 0) {
				GameOverLoose();
				break;
			}


			// 7
			std::cout << "\n\n[ + ] Игрок: " << name << " |  жизни: " << life << " | очки: " << glasses;
			std::cout << "\n[ 7 ] Вопрос: Что такое Git?\n";
			std::cout << "[ A ] Система управления базами данных\t  [ B ] Язык программирования\n[ C ] Система контроля версий\t          [ D ] Облачное хранилище файлов\n";
			std::cout << "[ + ] Выбрать ответ: ";
			std::cin >> quiz;
			if (quiz == 'c' or quiz == 'C') {
				win();
				glasses++;
			}

			else {
				loose();
				life--;
			}


			if (life == 0) {
				GameOverLoose();
				break;
			}


			// 8
			std::cout << "\n\n[ + ] Игрок: " << name << " |  жизни: " << life << " | очки: " << glasses;
			std::cout << "\n[ 8 ] Вопрос: Что такое SSL?\n";
			std::cout << "[ A ] Протокол безопасной передачи данных по сети\t[ B ] Вид языка программирования\n[ C ] Аппаратное устройство хранения данных\t        [ D ] Специализированное программное обеспечение\n";
			std::cout << "[ + ] Выбрать ответ: ";
			std::cin >> quiz;
			if (quiz == 'a' or quiz == 'A') {
				win();
				glasses++;
			}

			else {
				loose();
				life--;
			}


			if (life == 0) {
				GameOverLoose();
				break;
			}

			if (numQuestion == 8) {
				GameOverWin();
				break;
			}


			// 9
			std::cout << "\n\n[ + ] Игрок: " << name << " |  жизни: " << life << " | очки: " << glasses;
			std::cout << "\n[ 9 ] Вопрос: Что такое Docker?\n";
			std::cout << "[ A ] Виртуальная машина\t[ B ] Контейнеризация приложений\n[ C ] Облачное хранилище данных\t[ D ] Язык программирования\n";
			std::cout << "[ + ] Выбрать ответ: ";
			std::cin >> quiz;
			if (quiz == 'd' or quiz == 'D') {
				win();
				glasses++;
			}

			else {
				loose();
				life--;
			}


			if (life == 0) {
				GameOverLoose();
				break;
			}


			// 10
			std::cout << "\n\n[ + ] Игрок: " << name << " |  жизни: " << life << " | очки: " << glasses;
			std::cout << "\n[ 10 ] Вопрос: Какая из следующих структур данных является неизменяемой в языке программирования Python?\n";
			std::cout << "[ A ] Список\t[ B ] Кортеж\n[ C ] Множество\t[ D ] Словарь\n";
			std::cout << "[ + ] Выбрать ответ: ";
			std::cin >> quiz;
			if (quiz == 'b' or quiz == 'B') {
				win();
				glasses++;
			}

			else {
				loose();
				life--;
			}


			if (life == 0) {
				GameOverLoose();
				break;
			}


			if (numQuestion == 10) {
				GameOverWin();
				break;
			}


			// 11
			std::cout << "\n\n[ + ] Игрок: " << name << " |  жизни: " << life << " | очки: " << glasses;
			std::cout << "\n[ 11 ] Вопрос: Какая из перечисленных операций относится к унарным операциям в программировании?\n";
			std::cout << "[ A ] Сложение \t[ B ] Умножение\n[ C ] Инкремент\t[ D ] Деление\n";
			std::cout << "[ + ] Выбрать ответ: ";
			std::cin >> quiz;
			if (quiz == 'c' or quiz == 'C') {
				win();
				glasses++;
			}

			else {
				loose();
				life--;
			}


			if (life == 0) {
				GameOverLoose();
				break;
			}

			// 12
			std::cout << "\n\n[ + ] Игрок: " << name << " |  жизни: " << life << " | очки: " << glasses;
			std::cout << "\n[ 12 ] Вопрос: Какая функция управляет выполнением программы в операционной системе?\n";
			std::cout << "[ A ] Ядро    \t[ B ] Драйвер\n[ C ] Оболочка\t[ D ] Процессор\n";
			std::cout << "[ + ] Выбрать ответ: ";
			std::cin >> quiz;
			if (quiz == 'a' or quiz == 'A') {
				win();
				glasses++;
			}

			else {
				loose();
				life--;
			}


			if (life == 0) {
				GameOverLoose();
				break;
			}

			GameOverWin();
			break;
		}

		else if (choose == 2) {
			while (true)
			{
				std::cout << "\n[ 1 ] Редактирование имя игрока;\n[ 2 ] Редактирование вопросов в игре;\n[ 3 ] Редактирование цвет интерфейса;\n[ 4 ] Вернуться в меню;\n";
				int chooseTools;
				std::cin >> chooseTools;
				if (chooseTools == 1) {
					std::cout << "\nВведите имя: ";
					std::cin >> name;
				}

				else if (chooseTools == 2) {
					std::cout << "\nВведите количество вопросов:\n[ 1 ] 8;\n[ 2 ] 10;\n[ 3 ] 12;\n";
					int chooseQuestion;
					std::cin >> chooseQuestion;
					switch (chooseQuestion)
					{
					case 1:
						numQuestion = 8;
						break;
					case 2:
						numQuestion = 10;
						break;
					case 3:
						numQuestion = 12;
						break;
					default:
						std::cout << "Ошибка ввода!\n\n";
						break;
					}
				}

				else if (chooseTools == 3) {
					std::cout << "\nВведите цвет:\n[ 1 ] Голубой;\n[ 2 ] Синий;\n[ 3 ] Зеленый;\n[ 4 ] Красный;\n[ 5 ] Белый;\n";
					int chooseColor;
					std::cin >> chooseColor;
					switch (chooseColor)
					{
					case 1:
						system("color 3");
						break;
					case 2:
						system("color 1");
						break;
					case 3:
						system("color 2");
						break;
					case 4:
						system("color 4");
						break;
					case 5:
						system("color 7");
						break;
					default:
						std::cout << "Ошибка ввода!\n\n";
						break;
					}
				}

				else if (chooseTools == 4) {
					break;
				}

				else std::cout << "Ошибка ввода!\n\n";
			}
		}

		else if (choose == 3) {
			std::cout << "- Игрок получает очки за правильный ответ на вопрос;\n- Игрок проходит дальше за правильный ответ;\n- Игрок теряет жизнь при неправильном ответе.\n\n";
		}

		else if (choose == 4) {
			break;
		}

		else std::cout << "Ошибка ввода!\n\n";
	}

	

	system("pause>nul");
	return 0;
}

