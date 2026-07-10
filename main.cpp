#include <iostream>
#include "calcul.h"
int main (){
	double a;
	double b;
	int choice;
	double result;
	std::cout << "Please choose the type of operation you want to perform :" << '\n';
	std::cout << "1. Addition" << '\n';
	std::cout << "2. Substraction" << '\n';
	std::cout << "3. Multiplication" << '\n';
	std::cout << "4. Division" << '\n';
	std::cin >> choice;
	std::cout << "Please enter the first number of the operation : ";
	std::cin >> a;
	std::cout << "Please enter the second number of the operation : ";
	std::cin >> b;
	switch (choice){
		case 1:
			result = addition(a, b);
				break;
		case 2:
			result = substraction(a, b);
				break;
		case 3: 
			result = multiplication(a, b);
				break;
		case 4:
			result = division(a, b);
				break;
		default:
			std::cout << "Wrong choice.";
	} 
	std::cout << "The result of the operation is : " << result << '\n';


}
