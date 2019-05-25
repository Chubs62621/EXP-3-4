// Aquino, Elijah P.
//  Problem 3 experiment 3

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	char Word[] = 
	{
	 'E'
	,'N'
	,'G'
	,'1'
	,'9'
	,'0'
	,'7'
	};
	char Reverse[7];
	Reverse[0] = Word[5];
	Reverse[1] = Word[3];
	Reverse[2] = Word[6];
	Reverse[3] = Word[4];
	Reverse[4] = Word[0];
	Reverse[5] = Word[2];
	Reverse[6] = Word[1];
	cout<<Reverse<<endl;
	cout<<"Total Array Size is : "<<sizeof(Reverse);
	getch ();
	return 0;
}
