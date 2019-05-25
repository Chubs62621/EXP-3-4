// Aquino, Elijah P.
//  Problem 1 experiment 4

#include <iostream>
#include <conio.h>

using namespace std;

void menu(){
	int Option;
	int Num1, Num2;
	double Answer;
	char Choice = 'y';
	cout << "MENU : " << endl;
	cout<< "\t1. Addition" << endl;
	cout<< "\t2. Subtraction" << endl;
	cout<< "\t3. Multiplication" << endl;
	cout<< "\t4. Division" << endl;
	cout<< "\t5. Modulus" << endl;
	do{
	cout << "Please Choose an Operation : "; cin >>Option;
	cout << "Please Input 2 Values : "; cin >>Num1 >>Num2;
	switch(Option){
	case 1: 
	Answer = Num1 + Num2;
	break;
	case 2: 
	Answer = Num1 - Num2;
	break;
	case 3: 
	Answer = Num1 * Num2;
	break;
	case 4: 
	Answer = Num1 / Num2;
	break;
	case 5: 
	Answer = Num1 % Num2;
	break;
	default: cout << "Invalid Input";
	}
	cout << "Answer : " << Answer << endl;
	cout << "Continue?(Y/N) : "; cin >> Choice;
	if(Choice != 'y' || Choice != 'Y'){
	break;
	}
	}while(true);
}

int main(){
	menu();
}
