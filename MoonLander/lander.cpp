#include "lander.h"
#include "game.h"
#include "velocity.h"
#include "uiDraw.h"

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
	if (alive && !landed && fuel > 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

// methods
void Lander::applyGravity(const float gravity)
{
	point.addY(-1.0f * gravity);
}

void Lander::advance()
{
	// TODO
}

void Lander::applyThrustBottom()
{
	if (this->canThrust())
	{
		point.addY(0.3f);
		if (fuel < 3)
		{
			fuel -= fuel;
		}
		else
		{
			fuel -= 3;
		}
	}
}

void Lander::applyThrustLeft()
{
	if (this->canThrust())
	{
		point.addX(0.1f);
		fuel -= 1;

	}
}

void Lander::applyThrustRight()
{
	if (canThrust())
	{
		point.addX(-0.1f);
		fuel -= 1;
	}
}

void Lander::draw()
{
	drawLander(point);
}