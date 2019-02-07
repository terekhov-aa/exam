#pragma once
#include "Model.h"
class Counter: public Model
{
public:
	Counter(std::string path) : Model(path) {};
	/*
		�������� ����� ���� ��������� �������
	*/
	int getAnswer();
private:
	static  const int CORTEGE_LENGTH = 5, // ����� �������
		ARRAY_DIMENSION = 2, //���������� �������� ��� ������ �������
		ARRAY_SIZE = 20; //������ ��������� �������
};

