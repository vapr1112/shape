#pragma once
#include "shape.h"
class curcle :
    public virtual shape
{
protected:
    size_t radius;
public:
    curcle()noexcept = default;
    //главный конструктор
    curcle(int x_p, int y_p, size_t radius_p)noexcept : shape(x_p, y_p), radius{ radius_p } {}
    //аксессоры и модификаторы
    size_t get_radius()noexcept { return radius; }

    void set_radius(size_t radius_p) 
    {
        if (radius < 0) throw("радиус не может быть отрицательным");
        radius = radius_p;
    }
    // выводит инормацию о фигуре
    virtual void show()const noexcept override { cout << x << y << radius; }
};

