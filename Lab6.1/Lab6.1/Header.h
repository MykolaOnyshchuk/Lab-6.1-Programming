#pragma once

class function   //��������� ������� ����
{
public:
	double x;
	virtual void getResult() = 0;   //���� ��������� �������
	void setX();   //�����
};

//��������� ������ ����� � ������������� ������� getResult

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
