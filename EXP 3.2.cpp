// Aquino, Elijah P.
//  Problem 2 experiment 3

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int ProvinceA[7];
	int ProvinceB[7];
	int ProvinceC[7];
	for(int i =0; i<7; i++){
	cout<<"Please Enter Temperature for Province A for Day "<<i+1<<": "; cin>>ProvinceA[i];
	}
	for(int i =0; i<7; i++){
	cout<<"Please Enter Temperature for Province B for Day "<<i+1<<": "; cin>>ProvinceB[i];
	}
	for(int i =0; i<7; i++){
	cout<<"Please Enter Temperature for Province C for Day "<<i+1<<": "; cin>>ProvinceC[i];
	}
	for(int i=0; i<7; i++){
	cout<<"Province A Temperature for Day 1 : "<<ProvinceA[i]<<endl;
	}
	for(int i=0; i<7; i++){
	cout<<"Province B Temperature for Day 1 : "<<ProvinceB[i]<<endl;
	}
	for(int i=0; i<7; i++){
	cout<<"Province C Temperature for Day 1 : "<<ProvinceC[i]<<endl;
	}
	getch ();
	return 0;
}
