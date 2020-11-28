#include "Person.h"

Person::Person() : Date() {
	this->name = "����";
	this->surname = "���������";
	this->gender = "�������";
}

Person::Person(std::string name, std::string surname, std::string gender, std::string date) : Date(date) {
	this->name = name;
	this->surname = surname;
	this->gender = gender;

}

Person::Person(Person& OtherPerson) {
	this->name = OtherPerson.name;
	this->surname = OtherPerson.surname;
	this->gender = OtherPerson.gender;
	InitDate(OtherPerson.getBirthday());
}

std::string Person::getName() {
	return name;
}

void Person::setName(std::string name) {
	this->name = name;
}

std::string Person::getSurname() {
	return surname;
}

void Person::setSurname(std::string surname) {
	this->surname = surname;
}

std::string Person::getGender() {
	return gender;
}

void Person::setGender(std::string gender) {
	this->gender = gender;
}



void Person::ShowInfo() {
	std::cout << " ���: " << name << std::endl;
	std::cout << " �������: " << surname << std::endl;
	std::cout << " ���: " << gender << std::endl;
	std::cout << " ���� ��������:" << getBirthday() << std::endl;
}

std::string Person::getBirthday() {
	return Date::operator std::string();
}

void Person::SetBirthday(int day, int month, int year) {
	setDay(day);
	setMonth(month);
	setYear(year);
}

