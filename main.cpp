#include <iostream>
#include <string>

void main()
{

	double a, b, c, Neg_b;

	std::cout << "Quadratic : Ax^2 + Bx + C\n\nInput A then hit enter, then input B, then C\n";
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	Neg_b = b * (-1);
	double doublea = 2 * a;

	if (a >= 0 && b >= 0 && c >= 0)
	{
		std::cout << a << "x^2 + " << b << "x + " << c << std::endl;

		std::cout << Neg_b << " +|- sqrt(" << pow(b, 2) << " - 4(" << a << ")(" << b << ")) / " << doublea << std::endl;

		double pos_solved, neg_solved;

		pos_solved = Neg_b + (pow(b, 2) - (4 * a * b)) / doublea;
		neg_solved = Neg_b - (pow(b, 2) - (4 * a * b)) / doublea;

		std::cout << "POSITIVE X : " << pos_solved << std::endl << "NEGATIVE X : " << neg_solved << std::endl;
	}
	else
	{
		std::cerr << "This Application is very primitive at the moment and doesn't support variables below 0, this will be updated in the future\n";
	}
}