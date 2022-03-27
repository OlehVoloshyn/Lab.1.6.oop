#include <string>
#pragma once
using namespace std;
class AlcoholL
{
private:
	double strength;
	class Liquid
	{
	private:
		string name;
		double density;
	public:
		string getName() const { return name; }
		double getDensity() const { return density; }

		void setName(string name) { this->name = name; }
		void setDensity(double density) { this->density = density; }

		void Init(string name, double density);
		void Displey();
		void Read();
	};
	Liquid liquid;
public:
	double getStrenght() const { return strength; }
	AlcoholL::Liquid getLiquid() const { return liquid; }

	void setStrenght(double strength) { this->strength = strength; }
	void setLiquid(AlcoholL::Liquid liquid) { this->liquid = liquid; }

	void Init(double strength, AlcoholL:: Liquid liquid);
	void Displey();
	void Read();
};

