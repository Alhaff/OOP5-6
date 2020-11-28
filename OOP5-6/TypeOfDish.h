#ifndef TYPE_OF_DISH_H
#define TYPE_OF_DISH_H
#include <iostream>
enum TYPE_OF_DISH {
	FIRST,
	SECOND,
	DESSERT
};
class TypeOfDish {
protected:
	TYPE_OF_DISH typeOfDish;
public:
	TypeOfDish();
	TypeOfDish(TYPE_OF_DISH typeOfDish);
	TYPE_OF_DISH getTypeOfDish();
	void setTypeOfDish(TYPE_OF_DISH typeOfDish);
	void PrintTypeOfDish();
};
#endif
