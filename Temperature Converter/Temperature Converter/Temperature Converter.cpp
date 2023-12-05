//Joshua Spruce
//Temperature Converter (Fahrenheit/Celsius)

#include <iostream>

using namespace std;

int main() {

	float tempF, tempC;
	int choice;

	cout << "Would you like to convert:\n1)Celsius to Fahrenheit\n2)Fahrenheit to Celsius\n";

	cout << "Enter choice: ";
	cin >> choice;

	switch (choice) {
		case 1:
			cout << "Enter Temp in Celsius to Convert: ";
			cin >> tempC;
			tempF = (tempC * 9 / 5) + 32;
			cout << "\nThe temperature in Fahrenheit is: " << tempF;
			break;
		case 2:
			cout << "Enter Temp in Fahrenheit to Convert: ";
			cin >> tempF;
			tempC = (tempF - 32) * 5 / 9;
			cout << "\nThe temperature in Celsius is: " << tempC;
			break;
		default:
			cout << "Please enter a valid choice";

	}
}