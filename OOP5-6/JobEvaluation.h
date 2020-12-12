#ifndef JOB_EVALUTION_H
#define JOB_EVALUTION_H
#include <iostream>
enum JOB_EVALUATION {
	JUNIOR_WAITER,
	WAITER,
	SENIOR_WAITER,
	HEADWAITER
};
class JobEvaluation {
protected:
	JOB_EVALUATION jobEvalution;
public:
	JobEvaluation();
	JobEvaluation(JOB_EVALUATION jobEvaluation);
	JOB_EVALUATION getJobEvaluation();
	void setJobEvaluation(JOB_EVALUATION jobEvaluation);
	virtual void ShowInfo();
};
#endif

