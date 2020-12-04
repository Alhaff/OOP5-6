#ifndef ORDER_H
#define ORDER_H
#include "Waiter.h"
#include "Dish.h"
class Order :  public  Waiter, protected virtual Date {
private:
	Dish* DishList;
	int dishListSize;
public:
	Order();
	Order(std::string orderTime, Waiter& waiter, Dish* DishList, int dishListSize);
	std::string getOrderTime();
	void setOrderTime(int day, int month, int year);
	void PrintDishList();
	void ShowInfo();
	Dish& getDishList(int index);
	~Order();

};
#endif
