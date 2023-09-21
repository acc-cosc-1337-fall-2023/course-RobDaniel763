//write include statements
#include"hwexpressions.h"
#include<iostream>


//write namespace using statement for cout

int main()
{
	double get_sales_tax_amount = .0675;
	double get_tip_amount = .15;
	double meal_amount = 0;
	double tip_rate = 0;
	double tip_amount = 0;
	double tax_amount = 0;
	double total = 0;

	std::cout << "Enter the meal amount: ";
    std::cin >> meal_amount;
    std::cout << "The meal amount is: $" << meal_amount << std::endl;

	double tax_amount = get_sales_tax_amount(meal_amount);
    std::cout << "The sales tax amount is: $" << tax_amount << std::endl;

	std::cout << "Enter the meal amount: ";
    std::cin >> meal_amount;

    std::cout << "Enter the tip rate: ";
    std::cin >> tip_rate;

    tax_amount = get_sales_tax_amount(meal_amount);
    tip_amount = get_tip_amount(meal_amount, tip_rate);
    total = meal_amount + tax_amount + tip_amount;

    std::cout << "Meal amount: $" << meal_amount << std::endl;
    std::cout << "Sales tax amount: $" << tax_amount << std::endl;
    std::cout << "Tip amount: $" << tip_amount << std::endl;
    std::cout << "Total cost: $" << total << std::endl;


	return 0;
}
