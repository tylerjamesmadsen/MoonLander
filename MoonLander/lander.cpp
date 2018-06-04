#include "lander.h"
#include "game.h"
#include "velocity.h"

// constructor
Lander::Lander()
{
	// TODO
	Point point = new Point();
	
	setLanded(false);
	setAlive(true);
	setFuel(FUEL);

	Velocity velocity;
}

// setters
void Lander::setFuel(const int fuel)
{
	this->fuel = fuel;
}

void Lander::setLanded(const bool landed)
{
	this->landed = landed;
}

void Lander::setAlive(const bool alive)
{
	this->alive = alive;
}

// boolean methods
bool Lander::isAlive()
{
	// TODO
	return true;
}

bool Lander::isLanded()
{
	// TODO
	return false;
}

bool Lander::canThrust()
{
	// TODO
	return true;
}

// methods
void Lander::applyGravity(const float gravity)
{
	// TODO
}

void Lander::advance()
{
	// TODO
}

void Lander::applyThrustBottom()
{
	// TODO
}

void Lander::applyThrustLeft()
{
	// TODO
}

void Lander::applyThrustRight()
{
	// TODO
}

void Lander::draw()
{

}