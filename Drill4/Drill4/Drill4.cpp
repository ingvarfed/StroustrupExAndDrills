#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<double> values;
	double temp = 0;
	string unit = "";
	string uUnit = "m";

	while (cin >> temp >> unit)
	{
		if (unit == "m") {}
		else if (unit == "cm") { temp /= 100; }
		else if (unit == "in") { temp = temp * 2.54 / 100; }
		else if (unit == "ft") { temp = temp * 12 * 2.54 / 100; }
		else
		{
			cout << "Illegal value!\\n";
			continue;
		}
		values.push_back(temp);
	}
	temp = 0;

	sort(values.begin(), values.end());
	for (double i : values)
	{
		cout << i << uUnit << " ";
		temp += i;
	}
	cout << "\nEntered " << values.size() << " values with total sum of " << temp << uUnit << ".\n";
	cout << "Largest: " << values[values.size() - 1] << uUnit << ". Smallest: " << values[0] << uUnit << ".\n";

	system("PAUSE");
	return 0;
}