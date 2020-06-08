#pragma once

class function   //Створюємо базовий клас
{
public:
	double x;
	virtual void getResult() = 0;   //Суто віртуальна функція
	void setX();   //Сетер
};

//Унаслідуємо похідні класи і перевизначаємо функцію getResult

class arcSin : public function
{
public:
	void getResult();
};

class arcCos : public function
{
public:
	void getResult();
};

class arcSinDer : public function
{
public:
	void getResult();
};

class arcCosDer : public function
{
public:
	void getResult();
};
