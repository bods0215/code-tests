int get_data(int n, int b)
{
	long a = 0;
	int i;

	for (i = 0; i < n; ++i)
	{
		short d = 0;
		hw_read(ADDR, 2, &d);

		d -= b;
		a += d;
	}

	return a / n;
}
