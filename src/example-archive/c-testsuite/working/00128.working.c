// TODO: could probably remove some of these requires clauses

int a;
unsigned b;
char c;
signed char d;
unsigned char e;
long f;
unsigned long g;
long long h;
unsigned long long i;
short j;
unsigned short k;

int
main(void)
/*@ accesses a, b, c, d, e, f, g, h, i, j, k;

    requires (i128) MINi32() <= (i128) b; (i128) b <= (i128) MAXi32();

             (i128) MINu8() <= (i128) d; (i128) d <= (i128) MAXu8();
             (i128) MINu8() <= (i128) f; (i128) f <= (i128) MAXu8();
             (i128) MINu8() <= (i128) h; (i128) h <= (i128) MAXu8();
             (i128) MINu8() <= (i128) i; (i128) i <= (i128) MAXu8();
             (i128) MINu8() <= (i128) j; (i128) j <= (i128) MAXu8();

             (i128) MINi8() <= (i128) e; (i128) e <= (i128) MAXi8();
             (i128) MINi8() <= (i128) f; (i128) f <= (i128) MAXi8();
             (i128) MINi8() <= (i128) g; (i128) g <= (i128) MAXi8();
             (i128) MINi8() <= (i128) h; (i128) h <= (i128) MAXi8();
             (i128) MINi8() <= (i128) i; (i128) i <= (i128) MAXi8();
             (i128) MINi8() <= (i128) j; (i128) j <= (i128) MAXi8();
             (i128) MINi8() <= (i128) k; (i128) k <= (i128) MAXi8();

    ensures return == 0i32; @*/
{
	a = b;
	a = c;
	a = d;
	a = e;
	a = f;
	a = g;
	a = h;
	a = i;
	a = j;
	a = k;

	b = a;
	b = c;
	b = d;
	b = e;
	b = f;
	b = g;
	b = h;
	b = i;
	b = j;
	b = k;

	c = a;
	c = b;
	c = d;
	c = e;
	c = f;
	c = g;
	c = h;
	c = i;
	c = j;
	c = k;

	d = a;
	d = b;
	d = c;
	d = e;
	d = f;
	d = g;
	d = h;
	d = i;
	d = j;
	d = k;

	e = a;
	e = b;
	e = c;
	e = d;
	e = f;
	e = g;
	e = h;
	e = i;
	e = j;
	e = k;

	f = a;
	f = b;
	f = c;
	f = d;
	f = e;
	f = g;
	f = h;
	f = i;
	f = j;
	f = k;

	g = a;
	g = b;
	g = c;
	g = d;
	g = e;
	g = f;
	g = h;
	g = i;
	g = j;
	g = k;

	h = a;
	h = b;
	h = c;
	h = d;
	h = e;
	h = f;
	h = g;
	h = i;
	h = j;
	h = k;

	i = a;
	i = b;
	i = c;
	i = d;
	i = e;
	i = f;
	i = g;
	i = h;
	i = j;
	i = k;

	j = a;
	j = b;
	j = c;
	j = d;
	j = e;
	j = f;
	j = g;
	j = h;
	j = i;
	j = k;

	k = a;
	k = b;
	k = c;
	k = d;
	k = e;
	k = f;
	k = g;
	k = h;
	k = j;
	k = i;

	return 0;
}
