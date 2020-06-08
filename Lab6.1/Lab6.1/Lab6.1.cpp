#include <iostream>
#include "Header.h"


void function::setX()   //Функція базового класу, що унаслідується
{
	std::cout << "Enter x value:\n";
	std::cin >> x;
}

void arcSin::getResult()
{
	system("cls");
	std::cout << "Arcsinus is equal to " << asin(x) << std::endl;
}

void arcCos::getResult()
{
	system("cls");
	std::cout << "Arccosinus is equal to " << acos(x) << std::endl;
}

void arcSinDer::getResult()
{
	system("cls");
	std::cout << "Derivative of arcsinus is equal to " << 1 / sqrt(1 - pow(x, 2)) << std::endl;
}

void arcCosDer::getResult()
{
	system("cls");
	std::cout << "Derivative of arccosinus is equal to " << (-1) * (1 / sqrt(1 - pow(x, 2))) << std::endl;
}

void mainMenu(); 
void helper();

int main()
{
	mainMenu();   //Викликаємо головне меню
}

void mainMenu()   //Головне меню
{
	int in = 0;
	std::cout << "Onyshchuk Mykola, IP-92, Varient 16, level of complexity: B\n\n";
	std::cout << "If you want to find arcsin(x) press 1\n";
	std::cout << "If you want to find derivative of arcsin(x) press 2\n";
	std::cout << "If you want to find arccos(x) press 3\n";
	std::cout << "If you want to find derivative of arccos(x) press 4\n";
	std::cin >> in;
	if (in == 1)
	{
		arcSin AS;
		AS.setX();
		AS.getResult();
	}
	if (in == 2)
	{
		arcSinDer ASD;
		ASD.setX();
		ASD.getResult();
	}
	if (in == 3)
	{
		arcCos AC;
		AC.setX();
		AC.getResult();
	}
	if (in == 4)
	{
		arcCosDer ACD;
		ACD.setX();
		ACD.getResult();
	}
	helper();
}

void helper()   //Допоміжна функція для головного меню
{
	int in = 0;
	std::cout << "If you want to continue press 1\n";
	std::cout << "If you want to exit press 2\n";
	std::cin >> in;
	if (in == 1)
	{
		system("cls");
		mainMenu();
	}
	if (in == 2)
	{
		system("exit");
	}
}