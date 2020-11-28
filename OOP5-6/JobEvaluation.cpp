#include "JobEvaluation.h"

JobEvaluation::JobEvaluation() {
	jobEvalution = WAITER;
}

JobEvaluation::JobEvaluation(JOB_EVALUATION jobEvalution) {
	this->jobEvalution = jobEvalution;
}

JOB_EVALUATION JobEvaluation::getJobEvaluation() {
	return jobEvalution;
}

void JobEvaluation::setJobEvaluation(JOB_EVALUATION jobEvalution) {
	this->jobEvalution = jobEvalution;
}

void JobEvaluation::PrintJobEvaluation() {
	std::cout << " Разряд: ";
	switch(jobEvalution){
	case JUNIOR_WAITER:
	std::cout << " Младший официант";
	    break;
	case WAITER:
		std::cout << " Официант";
		break;
	case SENIOR_WAITER:
		std::cout << " Старший официант";
		break;
	case HEADWAITER:
		std::cout << " Метрдотель";
		break;
	}
	 std::cout<< std::endl;
}
