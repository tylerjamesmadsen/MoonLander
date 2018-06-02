#ifndef VELOCITY_H
#define VELOCITY_H

class Velocity
{
private:
	double dx = 0.0;
	double dy = 0.0;

public:
	// constructors
	Velocity() {};

	// getters
	double getDx()	const	{ return dx; }
	double getDy()	const	{ return dy; }

	// setters
	void setDx(const double dx);
	void setDy(const double dy);
};

#endif // !VELOCITY_H

