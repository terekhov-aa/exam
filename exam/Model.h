#pragma once
#include <string>
#include <vector>
#include"File.h"

class Model
{
public:
	/*
		Просит задать путь и задает по нему сообщение в this->data
	*/
	Model();

	/*
		Задает сообщение по пути
	*/
	Model(std::string path);

	/*
		Получает ответ на вопрос жизни, смерти и всего такого
	*/
	virtual std::string getAnswer(std::string question);
protected:

	/*
		Сообщение из файла
	*/
	std::string data;

	/*
		Разделяет строку на вектор std::string элементов
	*/
	std::vector<std::string> explodeVector(const char& c);

	/*
		Разделяет строку на массив int элементов
	*/
	int** explodeArray(const char& c);
};

