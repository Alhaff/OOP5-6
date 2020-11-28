#include "Waiter.h"

Waiter::Waiter() : Person(), JobEvaluation(), Date() { }

Waiter::Waiter(Person& person, JOB_EVALUATION jobEvaluation, std::string date) : Person(person), JobEvaluation(jobEvaluation) {
	InitDate(date);
}

Waiter::Waiter(Waiter& otherWaiter) {
	name = otherWaiter.name;
	surname = otherWaiter.surname;
	gender = otherWaiter.gender;
	jobEvalution = otherWaiter.jobEvalution;
	InitDate(otherWaiter.getStartJobDay());
}

std::string Waiter::getStartJobDay() {
	return Date::operator std::string();
}



void Waiter::setStartJobDay(int day, int month, int year) {
	Date::setDay(day);
	Date::setMonth(month);
	Date::setYear(year);
}

void Waiter::ShowInfo() {
	std::cout << " Имя: " << name << std::endl;
	std::cout << " Фамилия: " << surname << std::endl;
	std::cout << " Пол: " << gender << std::endl;
	PrintJobEvaluation();
	std::cout << " Дата принятия на работу: " << getStartJobDay() << std::endl;
}
