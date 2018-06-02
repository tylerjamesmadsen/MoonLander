#ifndef LANDER_H
#define LANDER_H

#include "point.h"
#include "velocity.h"

class Lander
{
private:
	Point point;
	int fuel;
	Velocity velocity;

public:
	// constructors
	Lander() {}

	// getters
	int getFuel()			const	{ return fuel; }
	Point getPoint()		const	{ return point; }
	Velocity getVelocity()	const	{ return velocity; }

	// setters
	void setFuel(const int FUEL);
	void setPoint(const Point POINT);
	void setAlive(const bool IS_ALIVE);
	void setLanded(const bool HAS_LANDED);

	// boolean properties
	bool isAlive();
	bool isLanded();
	bool canThrust();

	// methods
	void applyGravity(const double GRAVITY_AMOUNT);
	void advance();
	void applyThrustBottom();
	void applyThrustLeft();
	void applyThrustRight();
	void draw();
};

#endif // LANDER_H