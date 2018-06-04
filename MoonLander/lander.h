#ifndef LANDER_H
#define LANDER_H

#include "point.h"
#include "velocity.h"

class Lander
{
private:
	int fuel;
	Point point;
	Velocity velocity;

public:
	// constructors
	Lander() {}

	// getters
	int getFuel()			const	{ return fuel; }
	Point getPoint()		const	{ return point; }
	Velocity getVelocity()	const	{ return velocity; }

	// setters
	void setFuel(const int fuel);
	void setPoint(const Point point);
	void setAlive(const bool isAlive);
	void setLanded(const bool hasLanded);
	void setCanThrust(const bool canThrust);

	// boolean properties
	bool isAlive;
	bool hasLanded;
	bool canThrust;

	// boolean methods
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