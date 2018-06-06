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
	bool alive;
	bool landed;

public:
	// constructors
	Lander();

	// getters
	Point getPoint()		const { return point; }
	Velocity getVelocity()	const { return velocity; }
	int getFuel()			const { return fuel; }

	// setters
	void setLanded(const bool landed);
	void setAlive(const bool alive);
	void setFuel(const int fuel);

	// boolean methods
	bool isAlive();
	bool isLanded();
	bool canThrust();

	// methods
	void applyGravity(const float gravity);
	void applyThrustLeft();
	void applyThrustRight();
	void applyThrustBottom();

	void advance();
	void draw();
};

#endif // LANDER_H