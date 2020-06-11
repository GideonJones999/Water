#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int main()
{
	int degrees = 0;

	cout << "Enter the temperature of the water in Degrees Celsius.   " << endl;
	cin >> degrees;
	if (degrees < 0)
		cout << "The water is frozen!" << endl;
	else if (degrees > 0 && degrees < 100)
		cout << "The water is liquid!" << endl;
	else if (degrees > 100)
		cout << "The water is vapor!" << endl;

	system("PAUSE");


	int roses = 0;
	cout << "Enter the amount of roses you want to make.   " << endl;
	cin >> roses;
	while (roses > 0)
	{
		cout << "@)-'-,--" << endl;
		roses--;
	}
	system("PAUSE");
	return 0;
}
