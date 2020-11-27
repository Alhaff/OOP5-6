#include "Date.h"
#include "Date.h"
#include <string>

Date::Date() {
	Day = MaxDaysInMonth;
	Month = MinMounth;
	Year = DefaultYear;
}

Date::Date(int Day, int Month, int Year) {
	if (Day >= MinDay && Day <= MaxDaysInMonth) {
		this->Day = Day;

		if (Month >= MinMounth && Month <= MaxMonthInYear) {

			if (Month == Febrary) {

				if (Day < MaxDaysInFebrary) {
					this->Month = Month;
				}
				else if (Day == MaxDaysInFebrary && LeapYearCheck(Year)) {
					this->Month = Month;

				}
				else {
					std::cerr << " Недопустимое значение для месяца" << std::endl;
					std::cerr << " Ошибка в конструкторе Date" << std::endl;
					this->Month = MinMounth;
				}

			}
			else {
				this->Month = Month;
			}
		}
		else {
			std::cerr << " Недопустимое значение для месяца" << std::endl;
			std::cerr << " Ошибка в конструкторе Date" << std::endl;
			this->Month = MinMounth;
		}
	}
	else {
		std::cerr << " Некоретное значение дней в месяце" << std::endl;
		std::cerr << " Ошибка в конструкторе Date" << std::endl;
		this->Day = MaxDaysInMonth;
	}
	if (Year >= 0) {
		this->Year = Year;
	}
	else {
		std::cerr << " Некоретное значение для года" << std::endl;
		std::cerr << " Ошибка в конструкторе Date" << std::endl;
		this->Year = DefaultYear;
	}
}

Date::Date(std::string date) {
	InitDate(date);
}

Date::Date(const Date& Other_Date) {
	this->Day = Other_Date.Day;
	this->Month = Other_Date.Month;
	this->Year = Other_Date.Year;
}

int Date::getDay() { return Day; }

void Date::InitDate(std::string date) {
	try {
		Day = stoi(date.substr(0, date.find_first_of('.')));
		throw Day;
	}
	catch (std::invalid_argument) {
		std::cerr << "  Ошибка преобразования string в char1" << std::endl;
		std::cerr << " Ошибка в конструкторе класса Date с параметром string" << std::endl;
		Day = 31;
	}
	catch (std::out_of_range) {
		std::cerr << "  Ошибка переполнение типа инт" << std::endl;
		std::cerr << " Ошибка в конструкторе класса Date с параметром string" << std::endl;
		Day = 31;
	}
	catch (int) {

	}

	try {
		Month = stoi(date.substr(date.find_first_of('.') + 1, date.find_last_of('.') - date.find_first_of('.') + 1));
		throw Month;
	}
	catch (std::invalid_argument) {
		std::cerr << "  Ошибка преобразования string в char2" << std::endl;
		std::cerr << " Ошибка в конструкторе класса Date с параметром string" << std::endl;
		Month = 1;
	}
	catch (std::out_of_range) {
		std::cerr << "  Ошибка переполнение типа инт" << std::endl;
		std::cerr << " Ошибка в конструкторе класса Date с параметром string" << std::endl;
		Month = 1;
	}
	catch (int) {

	}

	try {
		Year = stoi(date.substr(date.find_last_of('.') + 1));
		throw Year;
	}
	catch (std::invalid_argument) {
		std::cerr << "  Ошибка преобразования string в char3" << std::endl;
		std::cerr << " Ошибка в конструкторе класса Date с параметром string" << std::endl;
		Year = 2002;
	}
	catch (std::out_of_range) {
		std::cerr << "  Ошибка переполнение типа инт" << std::endl;
		std::cerr << " Ошибка в конструкторе класса Date с параметром string" << std::endl;
		Year = 2002;
	}
	catch (int) {

	}


	if (Day < MinDay || Day > MaxDaysInMonth) {
		std::cerr << " Некоретное значение дней в месяце" << std::endl;
		std::cerr << " Ошибка в конструкторе класса Date с параметром string" << std::endl;
		Day = MaxDaysInMonth;
	}

	if (Month < MinMounth || Month > MaxMonthInYear) {
		std::cerr << " Недопустимое значение для месяца" << std::endl;
		std::cerr << " ООшибка в конструкторе класса Date с параметром string" << std::endl;
		Month = MinMounth;
	}
	else if (Month == Febrary) {
		if (Day > MaxDaysInFebrary) {
			std::cerr << " Недопустимое значение для месяца" << std::endl;
			std::cerr << " Ошибка в конструкторе класса Date с параметром string" << std::endl;
			Month = MinMounth;
		}
		else if (Day == MaxDaysInFebrary && !LeapYearCheck(Year)) {
			std::cerr << " Недопустимое значение для месяца" << std::endl;
			std::cerr << "Ошибка в конструкторе класса Date с параметром string" << std::endl;
			Month = MinMounth;
		}
	}

	if (Year < 0) {
		std::cerr << " Некоретное значение для года" << std::endl;
		std::cerr << "Ошибка в конструкторе класса Date с параметром string" << std::endl;
		Year = DefaultYear;
	}
}

void Date::setDay(int Day) {
	if (Day >= MinDay && Day <= MaxDaysInMonth) {
		if (Month == Febrary) {
			if (Day < MaxDaysInFebrary) {
				this->Day = Day;
			}
			else if (Day == MaxDaysInFebrary && LeapYearCheck(Year)) {
				this->Day = Day;
			}
			else {
				std::cerr << " Некоректный ввод дня" << std::endl;
				std::cerr << " Ошибка в setDay" << std::endl;
			}
		}
		this->Day = Day;
	}
	else {
		std::cerr << " Некоректный ввод дня" << std::endl;
		std::cerr << " Ошибка в setDay" << std::endl;
	}
}

int Date::getMonth() { return Month; }

void Date::setMonth(int Month) {
	if (Month >= MinMounth && Month <= MaxMonthInYear) {
		this->Month = Month;
	}
	else {
		std::cerr << " Некоретное значение дней в месяце" << std::endl;
		std::cerr << " Ошибка в setMonth" << std::endl;
	}
}

int Date::getYear() { return Year; }

void Date::setYear(int Year) {
	if (Year > 0) {
		this->Year = Year;
	}
	else {
		std::cerr << " Некоретное значение для года" << std::endl;
		std::cerr << " Ошибка в setYear" << std::endl;
	}

}

Date::operator std::string() {
	std::string day = std::to_string(Day);
	std::string month = std::to_string(Month);
	std::string year = std::to_string(Year);
	if (day.size() < 2) {
		day = "0" + day;

	}
	day.push_back('.');
	if (month.size() < 2) {
		month = "0" + month;

	}
	month.push_back('.');
	if (year.size() < 4) {
		if (year.size() == 1) {
			year = "000" + year;
		}
		else if (year.size() == 2) {
			year = "00" + year;
		}
		else if (year.size() == 3) {
			year = "0" + year;
		}
	}

	return day + month + year;

}

std::string Date::operator+(const std::string& str) {
	return this->operator std::string() + str;
}

Date::~Date() {

}

std::ostream& operator<< (std::ostream& out, const Date& Date) {
	out.width(2);
	out.fill('0');
	out << Date.Day << ".";
	out.width(2);
	out.fill('0');
	out << Date.Month << ".";
	out.width(4);
	out.fill('0');
	out << Date.Year;
	return out;
}

std::istream& operator>>(std::istream& in, Date& Date) {
	in >> Date.Day;
	in.ignore();
	in >> Date.Month;
	in.ignore();
	in >> Date.Year;
	if (Date.Day < MinDay || Date.Day > MaxDaysInMonth) {
		std::cerr << " Некоретное значение дней в месяце" << std::endl;
		std::cerr << " Ошибка при вводе данных в класс Date" << std::endl;
		Date.Day = MaxDaysInMonth;
	}

	if (Date.Month < MinMounth || Date.Month > MaxMonthInYear) {
		std::cerr << " Недопустимое значение для месяца" << std::endl;
		std::cerr << " Ошибка при вводе данных в класс Date" << std::endl;
		Date.Month = MinMounth;
	}
	else if (Date.Month == Febrary) {
		if (Date.Day > MaxDaysInFebrary) {
			std::cerr << " Недопустимое значение для месяца" << std::endl;
			std::cerr << " Ошибка при вводе данных в класс Date" << std::endl;
			Date.Month = MinMounth;
		}
		else if (Date.Day == MaxDaysInFebrary && !Date.LeapYearCheck(Date.Year)) {
			std::cerr << " Недопустимое значение для месяца" << std::endl;
			std::cerr << " Ошибка при вводе данных в класс Date" << std::endl;
			Date.Month = MinMounth;
		}
	}

	if (Date.Year < 0) {
		std::cerr << " Некоретное значение для года" << std::endl;
		std::cerr << " Ошибка при вводе данных в класс Date" << std::endl;
		Date.Year = DefaultYear;
	}
	return in;
}

bool operator==(const Date& Date1, const Date& Date2) {
	bool temp = false;
	Date1.Day == Date2.Day ? temp = true : temp = false;
	Date1.Month == Date2.Month ? temp = true : temp = false;
	Date1.Year == Date2.Year ? temp = true : temp = false;
	return temp;
}

std::string operator+(std::string str, Date& Date) {
	return str + Date.operator std::string();
}
