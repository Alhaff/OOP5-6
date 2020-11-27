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
	std::cout << " ������: ";
	switch(jobEvalution){
	case JUNIOR_WAITER:
	std::cout << " ������� ��������";
	    break;
	case WAITER:
		std::cout << " ��������";
		break;
	case SENIOR_WAITER:
		std::cout << " ������� ��������";
		break;
	case HEADWAITER:
		std::cout << " ����������";
		break;
	}
	 std::cout<< std::endl;
}
