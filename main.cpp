#include <iostream>
#include "calcul.h"
//
//int main(){
//	int a;
//	int b;
//	int choose_number; 
//	std::cout << "Veuillez choisir le type d'opération que vous voulez effectuer :" << '\n';
//	std::cout << "1. Addition." << '\n';
//	std::cin >> choose_number;
//	std::cout << "Veuillez choisir le premier chiffre de l'opération :" << '\n';
//	std::cin >> a;
//	std::cout << "Veuillez choisir le seconde chiffre de l'opération :" << '\n';
//	std::cin >> b;
//	double result = addition(a, b);
//	std::cout << "Le résultat de l'opération est : " << result << '\n';
//}

int main (){
	double a;
	double b;
	int choice;
	double result;
	std::cout << "Veuillez choisir le type d'opération que vous souhaitez réaliser :" << '\n';
	std::cout << "1. Addition" << '\n';
	std::cout << "2. Soustraction" << '\n';
	std::cout << "3. Multiplication" << '\n';
	std::cout << "4. Division" << '\n';
	std::cin >> choice;
	std::cout << "Veuillez choisir le premier chiffre de l'opération que vous souhaitez réaliser : ";
	std::cin >> a;
	std::cout << "Veuillez choisir le deuxième chiffre de l'opération : ";
	std::cin >> b;
	switch (choice){
		case 1:
			result = addition(a, b);
				break;
		case 2:
			result = soustraction(a, b);
				break;
		case 3: 
			result = multiplication(a, b);
				break;
		case 4:
			result = division(a, b);
				break;
		default:
			std::cout << "Choix incorrect.";
	} 
	std::cout << "Le résultat de l'opération est : " << result << '\n';


}
