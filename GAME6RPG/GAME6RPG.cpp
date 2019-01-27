// GAME6RPG.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <conio.h>
#include <ctype.h>

HANDLE consoleHandle = 0;
bool isGameActive = true;


void Setup() 
{
	srand(time(0));
	consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);

	//hide cursor
	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.dwSize = 1;
	cursorInfo.bVisible = 0;
	SetConsoleCursorInfo(consoleHandle, &cursorInfo);
}

void init() 
{
	
}

void Render() {
	//move console cursor 0 0 
	COORD cursorCoord;
	cursorCoord.X = 0;
	cursorCoord.Y = 0;
	SetConsoleCursorPosition(consoleHandle, cursorCoord);
	//title game

	printf("\n\t PISUN AND ORCS");
}

void Update() {
	unsigned char inputChar = _getch();
	inputChar = tolower(inputChar);
	
	switch (inputChar) {

		//restart level
		case 'r':
			init();
			break;
	}
}

void ShutDown() {
	system("cls");
	printf("\n\tGame ower...");
	_getch();
}

int main()
{
	Setup();
	init();

	do {
		Render();
		Update();
	} while (isGameActive);

	ShutDown();
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
