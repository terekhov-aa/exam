#pragma once
#include "Model.h"
class Counter: public Model
{
public:
	Counter(std::string path) : Model(path) {};
	/*
		Получить сумму всех элементов вектора
	*/
	int getAnswer();
private:
	static  const int CORTEGE_LENGTH = 5, // Длина кортежа
		ARRAY_DIMENSION = 2, //Количество картежей для одного элемена
		ARRAY_SIZE = 20; //Размер элементов массива
};

