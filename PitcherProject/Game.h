#pragma once
#include <vector>
#include "Pitcher.h"
#include "BaseLoadStatus.h"
class Game
{
public:
	Game() = delete;
	~Game();
	Game(const vector<Pitcher>& pitchers);

	void SetCurrentPitcher(Pitcher pitcher);
	/// Use this when NOT hitting his/her spot
	void SetBaseLoadStatus(BaseLoadStatus baseLoadStatus);

	void PrintPitchingRoster();
	BaseLoadStatus GetBaseLoadStatus() const;


private:
	Pitcher _currentPitcher;
	vector<Pitcher> _pitchers;
	BaseLoadStatus _baseLoadStatus;
};

