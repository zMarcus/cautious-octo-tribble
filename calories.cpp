#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

double bmRate(double p);
double required(int, int, double);

int main()
{
	int intensity, mins, cals;
	double weight, needed, servings, digestEnergy;

	cout << "Enter weight: ";
	cin >> weight;


	cout << "What is the intensity of the activity you will be doing?\n";
	cout << "Running at 10mph - 17\n Running at 6mph - 10\n Basketball - 8\n Walking at 1mph - 1 \n";
	cin >> intensity;

	cout << "How many minutes will you do this?\n";
	cin >> mins;

	cout << "How many calories have you consumed?\n";
	cin >> cals;

	needed = bmRate(weight) + required(intensity, mins, weight);
	digestEnergy = needed * 0.1;
	servings = (needed - digestEnergy) / cals;
	cout << "Serving needed to maintain weight:" << servings << endl;
	return 0;
}

double bmRate(double p)
{
	double rate;

	rate = pow((70.0 * (p / 2.2)), 0.756);
	return rate;
}

double required(int in, int min, double p)
{
	double caloriesRequired;

	caloriesRequired = 0.0385 * in * p * min;
	return caloriesRequired;
}
