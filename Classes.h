#pragma once
#include <iostream>
#include <vector>
#include <iomanip>

class Shape
{
public:

    Shape();
    ~Shape();
    virtual float Area();
    virtual float Perimeter();
    virtual void Log();
};

class Circle : public Shape
{
    float radius;
public:
    Circle(float rad);
    ~Circle();
      const float getRadius();
        float Area() override;
        float Perimeter() override;
        void Log() override;
};

class Rectangle : public Shape
{
    float L;
    float W;
public:
    Rectangle(float length, float width);
    ~Rectangle();
    float Area() override;
    float Perimeter() override;
    void Log() override;
};

class Square : public Shape
{
    float m_side;

public:
    Square(float s);
    ~Square();
        float Area() override;
        float Perimeter() override;
        void Log() override;
};

