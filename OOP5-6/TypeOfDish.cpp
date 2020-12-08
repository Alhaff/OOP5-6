#include "TypeOfDish.h"

TypeOfDish::TypeOfDish() {
	typeOfDish = SECOND;
}

TypeOfDish::TypeOfDish(TYPE_OF_DISH typeOfDish) {
	this->typeOfDish = typeOfDish;
}

TYPE_OF_DISH TypeOfDish::getTypeOfDish() {
	return typeOfDish;
}

void TypeOfDish::setTypeOfDish(TYPE_OF_DISH typeOfDish) {
	this->typeOfDish = typeOfDish;
}

void TypeOfDish::ShowInfo() {
	std::cout << " Тип блюда: ";
	switch (typeOfDish) {
	case FIRST:
		std::cout << " Первое";
		break;
	case SECOND:
		std::cout << " Второе";
		break;
	case DESSERT:
		std::cout << " Дессерт";
		break;
	}
	std::cout << std::endl;
}
