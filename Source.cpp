#include "shape.h"
#include "curcle.h"
#include "square.h"
#include "ellipse.h"
#include "rectangle.h"

int main()
{
	setlocale(LC_ALL, "rus");

	vector<shape*> shape;

	curcle curcle_s{ 3, 5, 10 };

	curcle* curcle_ptr = &curcle_s;

	shape.push_back(curcle_ptr);


	square square_s{ 1, 2, 8 };

	square* square_ptr = &square_s;

	shape.push_back(square_ptr);


	rectangle rectangle_s{ 7, 5, 8, 12 };

	rectangle* rectangle_ptr = &rectangle_s;

	shape.push_back(rectangle_ptr);

	for (size_t i = 0; i < 3; i++)
	{
		shape[i]->show();
		cout << "\n";
	}

	return 0;
}