#include "Dish.h"
#include "windows.h"

Dish::Dish() : TypeOfDish() {
	dishName = "Картошка-пюре";
	dishCost = 23.50;
}

Dish::Dish(std::string dishName, float dishCost, TYPE_OF_DISH typeOfDish) : TypeOfDish(typeOfDish) {
	this->dishName = dishName;
	this->dishCost = dishCost;
}

std::string Dish::getDishName() {
	return dishName;
}

void Dish::setDishName(std::string dishName) {
	this->dishName = dishName;
}

float Dish::getDishCost() {
	return dishCost;
}

void Dish::setDishCost(float dishCost) {
	this->dishCost = dishCost;
}

void Dish::PrintDishInfo() {
	std::cout << " Блюдо: " << dishName << std::endl;
	std::cout << " Стоимость: " << dishCost << " $" << std::endl;
	PrintTypeOfDish();

}

void Dish::ChangeDishInfo(std::string newDishName, float newDishCost, TYPE_OF_DISH newTypeOfDish) {
	this->dishName = newDishName;
	this->dishCost = dishCost;
	this->typeOfDish = newTypeOfDish;
}
