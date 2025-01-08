#pragma once
#include "shape.h"
class curcle :
    public virtual shape
{
private:
    size_t radius;
public:
    curcle(int x_p, int y_p, size_t radius_p)noexcept : shape(x_p, y_p), radius{ radius_p } {}

    size_t get_radius()noexcept { return radius; }

    void set_radius(size_t radius_p)noexcept { radius = radius_p; }

    virtual void show()const noexcept { cout << x << y << radius; }
};

