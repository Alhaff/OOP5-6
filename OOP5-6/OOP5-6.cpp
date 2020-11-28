#include <iostream>
#include "Person.h"
#include "Waiter.h"
#include "Dish.h"
#include "Order.h"
using namespace std;

int main() {
	system(" chcp 1251 && cls");
	Person I((string)"Олександр", (string)"Приходченко", (string)"Мужчина", (string)"11.5.2001");
	I.ShowInfo();
	cout << endl;
	Waiter First(I, HEADWAITER, (string)"23.2.2012");
	First.ShowInfo();
	cout << endl;
	Dish F((string)"Борщ", 12.80, FIRST);
	F.PrintDishInfo();
	cout << endl;
	Dish order[3];
	order[0] = F;
	order[2].ChangeDishInfo("Киевский торт", 123.10, DESSERT);
	Order One("12.7.2021", First, order, 3);
	One.ShowInfo();
	return 0; 
}

