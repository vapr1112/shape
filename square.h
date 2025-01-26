#pragma once
#include "shape.h"
class square :
    public virtual shape
{
protected:
    size_t length;
public:
    square()noexcept = default;
    //глаынй конструктор
    square(int x_p, int y_p, size_t length_p)noexcept : shape(x_p, y_p), length{length_p} {}
    //аксессоры и модификаторы
    size_t get_length()noexcept { return length; }

    void set_length(size_t length_p)
    {
        if (length < 0) throw("длина не может быть отрицательной");
        length = length_p;
    }
    //выводит информацию о фигуре
    virtual void show()const noexcept override{ cout << x << y << length; }

};