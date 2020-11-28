#ifndef PERSON_H
#define PERSON_H
#include "Date.h"
class Person : protected Date {
protected:
	std::string name;
	std::string surname;
	std::string gender;
public:
	Person();
	Person(std::string name, std::string surname, std::string gender, std::string date);
	Person(Person& OtherPerson);
	std::string getName();
	void setName(std::string name);
	std::string getSurname();
	void setSurname(std::string surname);
	std::string getGender();
	void setGender(std::string gender);
	virtual void ShowInfo();
	std::string getBirthday();
	void SetBirthday(int day, int month, int year);
};
#endif
