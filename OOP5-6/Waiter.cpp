#include "Waiter.h"

Waiter::Waiter() : Person(), JobEvaluation(), Date() { }

Waiter::Waiter(Person& person, JOB_EVALUATION jobEvaluation, std::string date) : Person(person), JobEvaluation(jobEvaluation), Date(date) {
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
	std::cout << " ���: " << name << std::endl;
	std::cout << " �������: " << surname << std::endl;
	std::cout << " ���: " << gender << std::endl;
	PrintJobEvaluation();
	std::cout << " ���� �������� �� ������: " << getStartJobDay() << std::endl;

}