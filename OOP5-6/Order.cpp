#include "Order.h"

Order::Order() : Date(), Waiter() {
	DishList = nullptr;
	dishListSize = 0;
}

Order::Order(std::string orderTime, Waiter& waiter, Dish* DishList, int dishListSize) : Waiter(waiter) {
	this->DishList = new Dish[dishListSize];
	this->dishListSize = dishListSize;
	for (int i = 0; i < dishListSize; i++) {
		this->DishList[i] = DishList[i];
	}
	InitDate(orderTime);
}

std::string Order::getOrderTime() {
	return Date::operator std::string();
}

void Order::setOrderTime(int day, int month, int year) {
	Date::setDay(day);
	Date::setMonth(month);
	Date::setYear(year);
}

void Order::PrintDishList() {
	for (int i = 0; i < dishListSize; i++) {
		DishList[i].PrintDishInfo();
	}
}

void Order::ShowInfo() {
	std::cout << " Имя: " << name << std::endl;
	std::cout << " Фамилия: " << surname << std::endl;
	std::cout << " Пол: " << gender << std::endl;
	PrintJobEvaluation();
	PrintDishList();
	std::cout << " Дата заказа: " << getOrderTime();
}

Dish& Order::getDishList(int index) {
	if (index >= 0 && index < dishListSize) {
		return DishList[index];
	}
}

Order::~Order() {
	if (DishList != nullptr) {
		delete[] DishList;
	}
	Date::~Date();
}
