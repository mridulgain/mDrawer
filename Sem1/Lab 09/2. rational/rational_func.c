#include"rational.h"
rational simplify(rational a)
{
	int x = a.p, y = a.q;
	while(x % y != 0)
	{
		int r = x % y;
		x = y;
		y = r;
	}//y contains gcd
	a.p/=y;
	a.q/=y;
	if(a.q < 0 && a.p > 0)
	{
		a.q *= -1;
		a.p *= -1;
	}
	return a;	
}

rational rat_add(rational a,rational b)
{
	rational c;
	c.q = a.q * b.q;
	c.p = (a.p * b.q) + (b.p * a.q);
	c = simplify(c);
	return c;
}

rational rat_sub(rational a,rational b)
{
	rational c;
	c.q = a.q * b.q;
	c.p = (a.p * b.q) - (b.p * a.q);
	c = simplify(c);
	return c;
}

rational rat_mult(rational a,rational b)
{
	rational c;
	c.q = a.q * b.q;
	c.p = a.p * b.p;
	c = simplify(c);
	return c;
}

rational rat_div(rational a,rational b)
{
	rational c;
	c.q = a.q * b.p;
	c.p = a.p * b.q;
	c = simplify(c);
	return c;
}

