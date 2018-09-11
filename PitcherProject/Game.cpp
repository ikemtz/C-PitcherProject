#include "pch.h"
#include "Game.h"
#include <iostream>

Game::~Game()
{
}

Game::Game(const vector<Pitcher>& pitchers)
{
	this->_pitchers = pitchers;
	this->_currentPitcher = pitchers.at(0);
}

void Game::SetCurrentPitcher(Pitcher value)
{
	this->_currentPitcher = value;
}

void Game::SetBaseLoadStatus(BaseLoadStatus value)
{
	this->_baseLoadStatus = value;
}


void Game::PrintPitchingRoster()
{
	cout << endl << "This games pitchers:" << endl;
	for (int i = 0; i < this->_pitchers.size(); i++) {
		Pitcher p = this->_pitchers.at(i);
		string allStar = p.GetIsAllStar() ? ", **ALL STAR** " : "";
		cout << "Pitcher #" << i + 1 << " LastName: " << p.GetLastName() << allStar << endl;
	}
	cout << endl << "Starting pitcher: " << (this->_currentPitcher.GetIsAllStar() ? "All Star " : "")
		<< this->_currentPitcher.GetLastName() << endl;
}

BaseLoadStatus Game::GetBaseLoadStatus() const
{
	return this->_baseLoadStatus;
}