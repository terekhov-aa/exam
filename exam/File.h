#pragma once
#include <string>
#include <fstream>
#include <streambuf>
#include <sstream>
#include <iostream>
#include <vector>
#include <set>

class FIle
{
public:
	/*
		�������� ������ �� ���������� �����
	*/
	static std::string getFileData(std::string path);
	/*
		������� ���� � ���������� � ���� ������
	*/
	static bool CreateFile(std::string path, std::string data);
};

