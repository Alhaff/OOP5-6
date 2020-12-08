#ifndef DISH_H
#define DISH_H
#include "TypeOfDish.h"
class Dish : public TypeOfDish {
private:
	std::string dishName;
	float dishCost;
public:
	Dish();
	Dish(std::string dishName, float dishCost, TYPE_OF_DISH typeOfDish);
	std::string getDishName();
	void setDishName(std::string dishName);
	float getDishCost();
	void setDishCost(float dishCost);
	void ShowInfo();
	void ChangeDishInfo(std::string newDishName, float newDishCost, TYPE_OF_DISH newTypeOfDish);
};
#endif
