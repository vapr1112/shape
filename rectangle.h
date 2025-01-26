#pragma once
#include "shape.h"
class rectangle :
    public virtual shape
{
protected:
    size_t length;
    size_t weght;
public:
    rectangle()noexcept = default;
    //������� �����������
    rectangle(int x_p, int y_p, size_t length_p, size_t weght_p)noexcept :
        shape(x_p, y_p), length{ length_p }, weght{ weght_p } {}
    //��������� � ������������
    size_t get_length()noexcept { return length; }

    void set_length(size_t length_p) 
    {
        if (length < 0) throw("����� �� ����� ���� �������������");
        length = length_p; 
    }

    size_t get_weght()noexcept { return weght; }

    void set_weght(size_t weght_p) 
    {
        if (weght_p < 0) throw("������ �� ����� ���� �������������");
        weght = weght_p; 
    }
    //������� ���������� � ������
    virtual void show()const noexcept override { cout << x << y << length << weght; }
};

