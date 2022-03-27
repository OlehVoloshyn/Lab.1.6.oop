#include <iostream>
#include "AlcoholL.h"
using namespace std;


void AlcoholL::Liquid::Init(string name, double density)
{
	setName(name);
	setDensity(density);
}

void AlcoholL::Liquid::Displey()
{
	cout << endl;
	cout << "name = " << name << endl;
	cout << "density = " << density << endl;

}

void AlcoholL::Liquid::Read()
{
	string name;
	double density;
	cout << endl;
	cout << "name =  "; cin >> name;
	cout << "density =  "; cin >> density;
	Init(name, density);
}

void AlcoholL::Init(double strength, AlcoholL::Liquid liquid)
{
	setStrenght(strength);
	setLiquid(liquid);
}

void AlcoholL::Displey()
{
	cout << endl;
	cout << "liquid = " << endl;
	liquid.Displey(); // використовуємо делегування
	cout << "strength = " << strength << endl;

}

void AlcoholL::Read()
{
	double strength;
	AlcoholL::Liquid l;
	cout << endl;
	cout << "Liquid =  " << endl;
	l.Read(); // використовуємо делегування
	cout << "strength =  "; cin >> strength;
	Init(strength, l);


}
