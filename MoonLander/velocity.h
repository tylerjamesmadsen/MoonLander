#ifndef VELOCITY_H
#define VELOCITY_H

class Velocity
{
private:
	double dX;
	double dY;

public:
	// constructors
	Velocity() {};

	// getters
	double getDx()	const	{ return dX; }
	double getDy()	const	{ return dY; }

	// setters
	void setDx(const double dX);
	void setDy(const double dY);
};

#endif // !VELOCITY_H

