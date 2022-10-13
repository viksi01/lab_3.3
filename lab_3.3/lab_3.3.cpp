#include <iostream>
#include <cmath>


using namespace std;

int main()
{
	double x;
	double R; 
	double y;

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	if (x <= -1)
		y = x + 1;
	else
		if (-1 < x && x <= 1)
			y = 0;
		else
			if (1 < x && x <= 1 + 2*R)
				y = sqrt ((R * R) - (x - 1 + R)* (x - 1 + R));
			else
				y= - (x - 1 - 2 * R) / (6 - 2 * R);

	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}


