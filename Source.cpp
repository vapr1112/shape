#include "shape.h"
#include "curcle.h"
#include "square.h"
#include "ellipse.h"
#include "rectangle.h"


int main()
{
	setlocale(LC_ALL, "rus");

	vector<shape*> shape;
	try
	{
		shape.push_back(new curcle(3, 5, 10));

		shape.push_back(new square(3, 5, 10));

		shape.push_back(new rectangle(3, 5, 10, 47));

		for (size_t i = 0; i < 3; i++)
		{
			shape[i]->show();
			cout << "\n";
		}

	}
	catch (const negative_value& negative_val)
	{
		cout << negative_val.what();
	}
	return 0;
}