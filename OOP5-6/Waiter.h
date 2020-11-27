#ifndef WAITER_H
#define WAITER_H
#include "Person.h"
#include "JobEvaluation.h"
class Waiter : public Person, public JobEvaluation, protected virtual Date {
public:
	Waiter();
	Waiter(Person& person, JOB_EVALUATION jobEvaluation, std::string StartJobdate);
	Waiter(Waiter& otherWaiter);
	std::string getStartJobDay();
	void setStartJobDay(int day, int month, int year);
	virtual void ShowInfo();
};
#endif
