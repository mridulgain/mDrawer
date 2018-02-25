typedef struct rational
{
	int p,q;
} rational;
//rational_io.c
rational getrational();
void putrational(rational);
//rational_func.c
rational rat_add(rational,rational);
rational rat_sub(rational,rational);
rational rat_mult(rational,rational);
rational rat_div(rational,rational);

rational simplify(rational);

