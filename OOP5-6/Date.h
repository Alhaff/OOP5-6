#ifndef DATE_H
#define DATE_H
#define Febrary 2
#define MaxDaysInMonth 31
#define MinDay 1
#define MinMounth 1
#define MaxDaysInFebrary 29
#define MaxMonthInYear 12
#define DefaultYear 2002

#include <iostream>

class Date {
private:
	int Day;
	int Month;
	int Year;
	bool LeapYearCheck(int year) {
		if (year % 4 == 0) {
			return true;
		}
		else {
			return false;
		}
	}
public:
	Date();
	Date(int Day, int Month, int Year);
	Date(std::string date);
	Date(const Date& Other_Date);
	void setDay(int Day);
	int getMonth();
	void setMonth(int Month);
	int getYear();
	void setYear(int Year);
	int getDay();
	void InitDate(std::string date);
	//Перевантежений стандартний ввід та вивід (теж оператори просто були створенні до 4 лабораторної роботи)
	friend std::ostream& operator<< (std::ostream& out, const Date& Date);
	friend std::istream& operator>> (std::istream& in, Date& Date);
	//Перевантажені оператори 
	virtual operator std::string();
	friend bool operator==(const Date& Date1, const Date& Date2);
	virtual std::string operator+(const std::string& str);
	friend std::string operator+(std::string str, Date& Date);
	virtual void ShowInfo();
public:
	~Date();

};
#endif
