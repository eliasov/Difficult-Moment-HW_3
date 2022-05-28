#include <iostream>
#include "Task_1.h"
#include "Task_2.cpp"
#include "Task_3.cpp"


//Home Work 3
//Author: Ovysannikov Ilya

int main()
{

	//Task_1
	//---------------------------------------------------------------------------------------
	std::cout << std::endl << "  -------------- Task_1 -------------- " << std::endl << std::endl;
	list<double> list_value{33.86, 46.58, 34.66, 29.82, 83.20};

	list_print(list_value); //ф-ция копирования и вывода на экран
	showList(&list_value); //Фу-ция вычисления и добавления средне арифметическое значение
	list_print(list_value); //ф-ция копирования и вывода на экран
	//----------------------------------------------------------------------------------------




	//Task_2
	//-----------------------------------------------------------------------------------------
	{
		std::cout << std::endl << "  -------------- Task_2 -------------- " << std::endl << std::endl;

		int size;
		cout << "Enter is number matrix(2x2, 3x3, 4x4, 5x5): " << endl;
		cin >> size;
		
		Matrix matrix(size);
		matrix.print();
	}
	//------------------------------------------------------------------------------------------


	//Task_3
	//-----------------------------------------------------------------------------------------
	std::cout << std::endl << "  -------------- Task_3 -------------- " << std::endl << std::endl;
	
	Array<int> arr(3);
	arr[0] = 100;
	arr[1] = 444;
	arr[2] = 999;

	for (auto itr : arr)
	{
		std::cout << itr << " ";
	}
	std::cout << std::endl << std::endl;
	return 0;
}






