namespace dgaf
{
	double sqrt(double num)
	{
		double tmp = 0.0;
		double sq = num / 2;
		while(sq != tmp)
		{
			tmp = sq;
			sq = (num/tmp+tmp)/2;
		}
		return sq;
	}

	double e()
	{
		return 2.71;
	}

	double pi()
	{
		return 3.14;
	}

	double pi2()
	{
		return pi()/2;
	}

	double pi4()
	{
		return pi()/4;
	}

	double 1pi()
	{
		return 1/pi();
	}

	double 2pi()
	{
		return 2/pi();
	}

	double 2sqrtpi()
	{
		return 2/sqrt(pi);
	}

	double sqrt2()
	{
		return sqrt(2);
	}

	double sqrt12()
	{
		return 1/sqrt(2);
	}

	int pow(int src, int power)
	{
		return src^power;
	}

	int max(int num1, int num2)
	{
		if(num1 == num2 || num1 > num2)
		{
			return num1;
		}
		else if(num1 < num2)
		{
			return num2;
		}
	}

	int min(int num2, int num1)
        {
                if(num1 == num2 || num1 < num2)
                {
                        return num1;
                }
                else if(num1 > num2)
                {
                        return num2;
                }
        }


	int abs(int N)
	{
		if(N < 0)
		{
			N = (-1) * N;
		}

		return N;
	}


	double deg2rad(double deg)
	{
		return deg * (pi() / 180.0);
	}

	double rad2deg(double rad)
	{
		return rad * (180 / pi());
	}

	double log(double x, double b)
	{
		return 0.0;
		//return ln(x) / ln(b);
	}
}
