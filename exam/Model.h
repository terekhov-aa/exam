#pragma once
#include <string>
#include <vector>
#include"File.h"

class Model
{
public:
	/*
		������ ������ ���� � ������ �� ���� ��������� � this->data
	*/
	Model();

	/*
		������ ��������� �� ����
	*/
	Model(std::string path);

	/*
		�������� ����� �� ������ �����, ������ � ����� ������
	*/
	virtual std::string getAnswer(std::string question);
protected:

	/*
		��������� �� �����
	*/
	std::string data;

	/*
		��������� ������ �� ������ std::string ���������
	*/
	std::vector<std::string> explodeVector(const char& c);

	/*
		��������� ������ �� ������ int ���������
	*/
	int** explodeArray(const char& c);
};

