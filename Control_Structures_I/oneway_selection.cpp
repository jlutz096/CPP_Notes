/**
 * @file oneway_selection.cpp
 * @brief Example of one-way selection. 
 * @version 0.1
 * @date 2023-08-12
 * 
 * @copyright Copyright (c) 2023
 * 
 * @note In C++, one-way selection is incorporated using the if statement. General syntax is:
 * if (expression)
 *     statement
 * 
 * The expression is usually a logical expression. If the value is true, the statement executes, if false no execution.
 * 
 */



#include <iostream>
#include <iomanip>

// global var
const double INTEREST_RATE = 0.015;

int main()
{
    // variable dec
    double creditCardBalance, payment, balance, penalty = 0.0;

    std::cout << "Enter credit card balance: ";
    std::cin >> creditCardBalance;
    std::cout << std::endl;

    std::cout << "Enter the payment: ";
    std::cin >> payment;
    std::cout << std::endl;

    balance = creditCardBalance - payment;

    if(balance > 0)
        penalty = balance * INTEREST_RATE;

    std::cout << "The balance is: $ " << balance << std::endl;

    std::cout << "The penatly to be added to your next month bill is: " << penalty << std::endl;

    return 0;
}