#pragma once
#include <string>
using namespace std;

class Pitcher
{
public:
	Pitcher();
	~Pitcher();
	Pitcher(string lastName, bool isAllStar) : _lastName(lastName), _isAllStar(isAllStar) {};
	/// Use this when hitting his/her spot
	void IncrementGoodPitchCount();	// Mutator
	/// Use this when NOT hitting his/her spot
	void IncrementBadPitchCount();	// Mutator

	string GetLastName() const;				// Accessor
	int GetPitchCount() const;		// Accessor
	bool GetIsAllStar() const;		// Accessor
	double GoodPitchRatio() const;	// Accessor

private:
	int _goodPitchCount;
	int _badPitchCount;
	string _lastName;
	bool _isAllStar;
};