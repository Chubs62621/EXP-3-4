// Aquino, Elijah P.
//  Problem 1 experiment 4

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int array;
	int Num[array];
	int temp;
	cout << "The Method that will be used is Selection Sorting " << endl;
	cout << "Please Enter The Size of the Array : "; cin >> array;
	cout << "Please Enter the " << array <<" Values : ";
	for(int i=0; i<array; i++){
	cin >> Num[i];
	}
	for(int i=0; i<array-1; i++){
	for(int j= i+1; j<array; j++){
	if(Num[i] > Num[j]){
	temp = Num[i];
	Num[i] = Num[j];
	Num[j] = temp;
	}
	}
	}
	for(int i=0; i<array; i++){
	cout << Num[i] <<" ";
	}
	getch ();
	return 0;
}
