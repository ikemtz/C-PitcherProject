#include "pch.h"
#include "Pitcher.h"

Pitcher::Pitcher()
{
}

Pitcher::~Pitcher()
{
}

void Pitcher::IncrementGoodPitchCount() {
	this->_goodPitchCount++;
}

void Pitcher::IncrementBadPitchCount() {
	this->_badPitchCount++;
}

string Pitcher::GetLastName() const {
	return this->_lastName;
}

int Pitcher::GetPitchCount() const {
	return this->_goodPitchCount + this->_badPitchCount;
}

double Pitcher::GoodPitchRatio() const {
	return this->_goodPitchCount / GetPitchCount();
}

bool Pitcher::GetIsAllStar() const {
	return this->_isAllStar;
}
