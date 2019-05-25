// Aquino, Elijah P.
//  Problem 1 experiment 3

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int Number_of_Elements = 10;
	int Smallest, Largest;
	double Average = 0.0;
	int Num[Number_of_Elements];
	for(int i=0; i<Number_of_Elements; i++)
	{
	cout<<"Please Enter a Number For Value # "<<i+1<<": "; cin>> Num[i];
	if(i == 0){
	Smallest = Num[i];
	Largest = Num[i];
	Average += Num[i]/Number_of_Elements;
	}
	else{
	if(Smallest > Num[i]){
	Smallest = Num[i];
	}
	if(Largest < Num[i] ){
	Largest = Num[i];
	}
	Average += Num[i]/Number_of_Elements;
	}
	}
	cout<<"The Smallest Number is : "<<Smallest<<endl;
	cout<<"The Largest Number is : "<<Largest<<endl;
	cout<<"The Average Number is : "<<Average<<endl;
	getch ();
	return 0;
}
