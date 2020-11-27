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

void TypeOfDish::PrintTypeOfDish() {
	std::cout << " ��� �����: ";
	switch (typeOfDish) {
	case FIRST:
		std::cout << " ������";
		break;
	case SECOND:
		std::cout << " ������";
		break;
	case DESSERT:
		std::cout << " �������";
		break;
	}
	std::cout << std::endl;
}
