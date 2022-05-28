#include <list>
#pragma once


//====================================
// Task_1
//====================================

using namespace std;


// Создаем функцию showList для нахождения срендего значения и добавления его в конец списка.

void showList(list<double>* list_value)
{
	double sum = 0;

	for (auto i : *list_value)
	{
		sum += i;
	}
	(*list_value).push_back(sum / (*list_value).size());


}
void list_print(std::list<double>& list_value)
{
	std::copy(list_value.begin(), list_value.end(), std::ostream_iterator<double>(std::cout, " "));
	std::cout << std::endl;
}
