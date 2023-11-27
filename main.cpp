// Name: Andrew Pinkerton
// Program Description: 2D Arrays
// Date: 11/27/2023

#include <iostream>
#include <string>

using namespace std;

class Numbers {
public:

	void getData()
	{
		for (int R = 0; R < 3; R++)
		{
			for (int C = 0; C < 3; C++)
			{
				cout << "Enter a number: ";
				cin >> numbers[R][C];
			}
		}
	}

	void output()
	{
		for (int R = 0; R < 3; R++)
		{
			for (int C = 0; C < 3; C++)
			{
				cout << "Number: " << numbers[R][C] << endl;

			}
		}
	}
private:
	int numbers[3][3]; // this will be a 3x3 matrix array that will hold 9 values
};

int main()
{
	// a 2D Aray is an array that holds more than 1 index value
	// you can think about this like an excel spreadsheet

	Numbers atu;
	atu.getData();
	atu.output();


}