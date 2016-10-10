#include <iostream>
using namespace std;

void getSmoothingIron(int stringSize, struct SmoothingIron& smoothingIron);
void printStruct(struct SmoothingIron smoothingIron);
struct SmoothingIron
{
	char* Firm;
	char* Model;
	char* Color;
	int MinimumTemperature;
	int MaximumTemperature;
	char* Steam;
	int Power;
};

int main()
{
	int stringSize = 256;
	struct SmoothingIron smoothingIron;

	smoothingIron.Firm = new char[stringSize];
	smoothingIron.Color = new char[stringSize];
	smoothingIron.Steam = new char[stringSize];
	smoothingIron.Model = new char[stringSize];

	getSmoothingIron(stringSize, smoothingIron);
	printStruct(smoothingIron);

	delete[] smoothingIron.Firm;
	delete[] smoothingIron.Color;
	delete[] smoothingIron.Steam;
	delete[] smoothingIron.Model;
}

void getSmoothingIron(int stringSize, SmoothingIron & smoothingIron)
{
	cout << "enter firm: ";
	cin.getline(smoothingIron.Firm, stringSize);
	cout << "enter model: ";
	cin.getline(smoothingIron.Model, stringSize);
	cout << "enter color: ";
	cin.getline(smoothingIron.Color, stringSize);
	cout << "enter minimumTemperature: ";
	cin >> smoothingIron.MinimumTemperature;;
	cout << "enter maximumTemperature: ";
	cin >> smoothingIron.MaximumTemperature;
	cout << "enter steam if yes y else no n: ";
	char tempYN;
	cin >> tempYN;
	if (tempYN == 'y')
	{
		strcpy(smoothingIron.Steam, "Yes");
	}
	else
	{
		strcpy(smoothingIron.Steam, "No");
	}
	cout << "enter Power: ";
	cin >> smoothingIron.Power;
	cout << endl;
}

void printStruct(SmoothingIron smoothingIron)
{
	cout << "enter firm: " << smoothingIron.Firm << endl << "enter model: " << smoothingIron.Model << endl
		<< "enter color: " << smoothingIron.Color << endl << "enter minimum temperature: " << smoothingIron.MinimumTemperature << endl
		<< "enter maximum temperature: " << smoothingIron.MaximumTemperature << endl << "enter Steam: " << smoothingIron.Steam << endl
		 << "enter Power: " << smoothingIron.Power << endl;
}


/*Реализовать структуру «Утюг» (фирма, модель, цвет, минимальная температура, максимальная температура, 
подача пара да/нет, мощность). Создайте экземпляр структуры и проиллюстрируйте работу с ним.*/