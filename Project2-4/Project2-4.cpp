/*
* File: Project2 - 2
* Author: Chase McCluskey
* Date: 9/5/24
*
* Declaration:
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	cout << "Enter legnth: ";
	int length;
	cin >> length;
	cout << "Enter width: ";
	int width;
	cin >> width;
	cout << left << "area: " << width * length << endl;
	cout << left << "Perimeter: " << width + width + length + length << endl;
	cout << left << "Diagonal: " << sqrt((width * width) + (length * length)) << endl;
}