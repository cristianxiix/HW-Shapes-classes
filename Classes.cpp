#include "Classes.h"


static float Pi = 3.141592;

    Shape::Shape() {}
    Shape::~Shape() { }
     float Shape::Area() { return 0; }
     float Shape::Perimeter() { return 0; }
     void  Shape::Log() {}



    Circle::Circle(float rad) : radius(rad) {};
    Circle::~Circle() {}
    const float Circle::getRadius()
     {
       return this->radius;
     }

    float Circle::Area() 
    {
        float area = Pi * (radius * radius);
        return area;
    }

    float Circle::Perimeter() 
    {
        float Circumference = 2 * Pi * radius;
        return Circumference;
    }

    void Circle::Log() 
    {
        std::cout << std::setprecision(3) << std::fixed;
        std::cout << " >> CIRCLE >> " << std::endl;
        std::cout << std::setw(22) << std::right << "Circle's radius is: " << std::right << std::setw(10) << getRadius() << std::endl;
        std::cout << std::setw(22) << std::right << "Area is: " << std::right << std::setw(10) << Area() << std::endl;
        std::cout << std::setw(22) << std::right << "Circumference is: " << std::right << std::setw(10) << Perimeter() << "\n\n" << std::endl;
    }



    Rectangle::Rectangle(float length, float width) : L(length), W(width) {}
    Rectangle::~Rectangle() {}

    float Rectangle::Area() 
    {
        float A = this->L * this->W;
        return A;
    }
    float Rectangle::Perimeter()
    {
        float P = 2 * (this->L + this->W);
        return P;
    }
    void Rectangle::Log()
    {
        std::cout << std::setprecision(3) << std::left;
        std::cout << " >> RECTANGLE >> " << std::endl;
        std::cout << std::right << std::setw(22) << "Rectangle length:" << std::right << std::setw(10) << this->L << '\n' <<
            std::right << std::setw(22) << "Rectangle width:" << std::right << std::setw(10) << this->W << std::endl;
        std::cout << std::right << std::setw(22) << "Area is:" << std::right << std::setw(10) << Area() << std::endl;
        std::cout << std::right << std::setw(22) << "Perimeter is:" << std::right << std::setw(10) << Perimeter() << "\n\n" << std::endl;
    }

    Square::Square(float s) : m_side(s) {}
    Square::~Square() {}
    float Square::Area()
    {
        float A = this->m_side * this->m_side;
        return A;
    }


    float Square::Perimeter() 
    {
        float P = this->m_side * 4;
        return P;
    }
    void Square::Log()
    {
        std::cout << std::setprecision(3) << std::left;
        std::cout << " >> SQUARE >> " << std::endl;
        std::cout << std::right << std::setw(22) << "Square side length: " << std::right << std::setw(10) << this->m_side << std::endl;
        std::cout << std::right << std::setw(22) << "Area is: " << std::right << std::setw(10) << Area() << std::endl;
        std::cout << std::right << std::setw(22) << "Perimeter is: " << std::right << std::setw(10) << Perimeter() << "\n\n" << std::endl;
    }


