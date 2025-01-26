#pragma once
#include "shape.h"
class ellipse :
    public virtual shape
{
protected:
    //ширина и длина прямоуголтника, в который вписан эллипс
    size_t length;
    size_t weght;
public:
    ellipse()noexcept = default;
    //главный конструктор
    ellipse(int x_p, int y_p, size_t length_p, size_t weght_p)noexcept :
        shape(x_p, y_p), length{ length_p }, weght{ weght_p } {}

    //аксессоры и модификаторы
    size_t get_length()noexcept { return length; }

    void set_length(size_t length_p)
    {
        if (length < 0) throw("длина не может быть отрицательной");
        length = length_p; 
    }

    size_t get_weght() 
    {
        if (weght < 0) throw("ширина не может быть отрицательной");
        return weght; 
    }

    void set_weght(size_t weght_p)noexcept { weght = weght_p; }
    //вывод информации о фигуре
    virtual void show()const noexcept override { cout << x << y << length << weght; }
};

