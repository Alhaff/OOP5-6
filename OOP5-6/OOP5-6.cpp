#include <iostream>
#include "Person.h"
#include "Waiter.h"
#include "Dish.h"
#include "Order.h"
using namespace std;

int main() {
	system(" chcp 1251 && cls");
	Person person((string)"Олександр", (string)"Приходченко", (string)"Мужчина", (string)"11.5.2001");
	//person.ShowInfo();
	//cout << endl;
	Waiter waiter(person, HEADWAITER, (string)"23.2.2012");
	//waiter.ShowInfo();
	//cout << endl;
	Dish First((string)"Борщ", 12.80, FIRST);
	//First.PrintDishInfo();
	//cout << endl;
	Dish order[3];
	order[0] = First;
	order[2].ChangeDishInfo("Киевский торт", 123.10, DESSERT);
	Order One("12.7.2021", waiter, order, 3);
	//One.ShowInfo();
	//Демонстрація пізнього зв'язування
	Person** List1 = new Person*[3];
	List1[0] = &person;
	List1[1] = &waiter;
	List1[2] = &One;
	List1[0]->ShowInfo();
	cout << endl;
	List1[1]->ShowInfo();
	cout << endl;
	List1[2]->ShowInfo();
	cout << endl;
	cout << endl;
	//Демонстрація ранього зв'язування
	TypeOfDish Type1(SECOND);
	TypeOfDish** List2 = new TypeOfDish*[2];
	List2[0] = &Type1;
	List2[1] = &First;
	List2[0]->ShowInfo();
	cout << endl;
	List2[1]->ShowInfo();
	cout << endl;


	return 0;
}

