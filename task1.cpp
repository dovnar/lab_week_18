#include <iostream>
using namespace std;

void getWashingMachine(int stringSize, struct WashingMachine& washingMachine);
void printStruct(struct WashingMachine washingMachine);
struct WashingMachine
{
	char* Firm;
	char* Color;
	int Sidth;
	int Sength;
	int Height;
	int Power;
	int SpinSpeed;
	int HeatingTemperature;
};
int main()
{
	int stringSize = 256;
	struct WashingMachine washingMachine;

	washingMachine.Firm = new char[stringSize];
	washingMachine.Color = new char[stringSize];

	getWashingMachine(stringSize, washingMachine);
	printStruct(washingMachine);

	delete[] washingMachine.Firm;
	delete[] washingMachine.Color;
}

void getWashingMachine(int stringSize, WashingMachine & washingMachine)
{
	cout << "enter firm: ";
	cin.getline(washingMachine.Firm, stringSize);
	cout << "enter color: ";
	cin.getline(washingMachine.Color, stringSize);
	cout << "enter sength: ";
	cin >> washingMachine.Sength ;
	cout << "enter sidth: ";
	cin >> washingMachine.Sidth;
	cout << "enter spinSpeed: ";
	cin >> washingMachine.SpinSpeed;
	cout << "enter HeatingTemperature: ";
	cin >> washingMachine.HeatingTemperature;
	cout << "enter Height: ";
	cin >> washingMachine.Height;
	cout << "enter Power: ";
	cin >> washingMachine.Power;
	cout << endl;
}

void printStruct(WashingMachine washingMachine)
{
	cout << "enter firm: " << washingMachine.Firm << endl << "enter color: " << washingMachine.Color << endl
	<< "enter sength: " << washingMachine.Sength << endl << "enter sidth: " << washingMachine.Sidth << endl
	<< "enter spinSpeed: " << washingMachine.SpinSpeed << endl << "enter HeatingTemperature: " << washingMachine.HeatingTemperature << endl
	<< "enter Height: " << washingMachine.Height << endl << "enter Power: " << washingMachine.Power << endl;
}


/*Реализовать структуру «Стиральная машинка» (фирма, цвет, ширина, длина, высота, мощность, 
скорость отжима, температура нагрева). Создайте экземпляр структуры и проиллюстрируйте работу с ним.*/