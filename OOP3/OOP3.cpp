#include <iostream>
#include <string>

class Figure
{
protected:
    int sides_count = 0;
    std::string name;

public:
    Figure()
    {
        sides_count = 0;
    }
    Figure(int sides_count)
    {
        sides_count = 0;
    }
    void get_sides_count()
    {
        std::cout << name << ": " << sides_count << std::endl;
    }
    void get_name()
    {
        name = "Фигура";
    }
};


class Triangle : public Figure
{
public:
    Triangle() : Figure()
    {
        sides_count = 3;
    }
    void get_name()
    {
        name = "Треугольник";
    }
};

class Quadrangle: public Figure
{
public:
    Quadrangle() : Figure()
    {
        sides_count = 4;
    }
    void get_name()
    {
        name = "Четырехугольник";
    }
};
int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Количество сторон: " << std::endl;
    Figure Basic;
    Basic.get_name();
    Basic.get_sides_count();
    Triangle Tri;
    Tri.get_name();
    Tri.get_sides_count();
    Quadrangle Qua;
    Qua.get_name();
    Qua.get_sides_count();
    return 0;
}

