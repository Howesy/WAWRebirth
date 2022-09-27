#include <Player.hpp>

uintptr_t Player::get()
{
	return this->player;
}

Player::Player(uintptr_t player)
{
	this->player = player;
}

void Player::setPoints(int32_t value)
{
	this->points = value;
}

void Player::setKills(int32_t value)
{
	this->kills = value;
}

void Player::setHeadshots(int32_t value)
{
	this->headshots = value;
}

void Player::setDowns(int32_t value)
{
	this->downs = value;
}

void Player::maxOutStats()
{
	int32_t highStatValue = INT32_MAX - 100000;
	this->setPoints(highStatValue);
	this->setKills(highStatValue);
	this->setHeadshots(highStatValue);
	this->setDowns(0);
}