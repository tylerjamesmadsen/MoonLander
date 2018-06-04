#include "lander.h"

// constructors TODO:


// setters
void Lander::setFuel(const int fuel)
{
	this->fuel = fuel;
}

void Lander::setPoint(const Point point)
{
	this->point = point;
}

void Lander::setAlive(const bool isAlive)
{
	this->isAlive = isAlive;
}

void Lander::setLanded(const bool hasLanded)
{
	this->hasLanded = hasLanded;
}

void Lander::setCanThrust(const bool canThrust)
{
	this->canThrust = canThrust;
}

// boolean methods
bool Lander::isAlive()
{

}

bool Lander::isLanded()
{

}

bool Lander::canThrust()
{

}

// methods
void Lander::applyGravity(const double GRAVITY_AMOUNT)
{

}

void Lander::advance()
{

}

void Lander::applyThrustBottom()
{

}

void Lander::applyThrustLeft()
{

}

void Lander::applyThrustRight()
{

}

void Lander::draw()
{

}