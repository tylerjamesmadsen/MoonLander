#include "lander.h"
#include "game.h"
#include "velocity.h"
#include "uiDraw.h"

// constructor
Lander::Lander()
{
	point.setX(float(random(-199.9f, 199.9f)));
	point.setY(200.0f);
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
	return alive;
}

bool Lander::isLanded()
{
	return landed;
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
	velocity.setDy(velocity.getDy() - gravity);
	point.addY(-1.0f * gravity);
}

void Lander::advance()
{
	point.addY(velocity.getDy());
	point.addX(velocity.getDx());
}

void Lander::applyThrustBottom()
{
	if (this->canThrust())
	{
		velocity.setDy(velocity.getDy() + 0.3f);
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
		velocity.setDx(velocity.getDx() + 0.1f);
		point.addX(0.1f);
		fuel -= 1;
	}
}

void Lander::applyThrustRight()
{
	if (canThrust())
	{
		velocity.setDx(velocity.getDx() - 0.1f);
		point.addX(0.1f);
		fuel -= 1;
	}
}

void Lander::draw()
{
	drawLander(point);
}