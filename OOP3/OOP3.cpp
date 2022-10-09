#include <iostream>
#include <string>

class Figure
{
protected:
    int sides_count = 0;
    std::string name = "something";

public:
    Figure()
    {
        sides_count = 0;
        name = "Фигура";
    }
    int get_sides_count()
    {
        return sides_count;
    }
    std::string get_name()
    {
        return name;
    }
};


class Triangle : public Figure
{
public:
    Triangle() : Figure()
    {
        sides_count = 3;
        name = "Треугольник";
    }
};

class Quadrangle: public Figure
{
public:
    Quadrangle() : Figure()
    {
        sides_count = 4;
        name = "Четырехугольник";
    }
};
int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Количество сторон: " << std::endl;
    Figure basic;
    std::cout << basic.get_name() << ": " << basic.get_sides_count() << std::endl;
    Triangle tri;
    std::cout << tri.get_name() << ": " << tri.get_sides_count() << std::endl;
    Quadrangle qua;
    std::cout << qua.get_name() << ": " << qua.get_sides_count() << std::endl;
    
    return 0;
}

