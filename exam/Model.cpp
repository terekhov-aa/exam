#include "pch.h"
#include "Model.h"

Model::Model()
{
	std::cout << "¬ведите путь до файла";
	std::string path;
	std::cin >> path;
	std::string fileData = FIle::getFileData(path);
	this->data = fileData;
}

Model::Model(std::string path)
{
	std::string fileData = FIle::getFileData(path);
	this->data = fileData;
}

std::string Model::getAnswer(std::string question)
{
	return "42";
}

std::vector<std::string> Model::explodeVector(const char& c)
{
	std::string buff{ "" };
	std::vector<std::string> v;

	for (auto n : this->data)
	{
		if (n != c) buff += n; else
			if (n == c && buff != "") { v.push_back(buff); buff = ""; }
	}
	if (buff != "") v.push_back(buff);

	return v;
}

int ** Model::explodeArray(const char & c)
{
	int** arr = new int * [20];
	arr[0] = new int[20];
	std::string buff{ "" };
	int i = 0, j = 0;
	for (auto n : this->data)
	{
		if (n != c && n != '\n')
		{
			buff += n;
		}
		else if (n == c && buff != "")
		{
			arr[i][j] = (int)std::stoi(buff);
			buff = "";
			j++;
		}
		else if(n == '\n')
		{
			arr[i][j] = (int)std::stoi(buff);
			buff = "";
			i++;
			j = 0;
			arr[i] = new int[20];
		}
	}
	if (buff != "") arr[i][j] = (int)std::stoi(buff);

	for (i = 0; i < 20; i++)
	{
		for (j = 0; j < 20; j++)
		{
			std::cout << arr[i][j];
			std::cout << " ";
		}
		std::cout << "\n";
	}

	return arr;
}


