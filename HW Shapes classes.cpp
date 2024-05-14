#include "Classes.h"

int main()
{
    std::vector<Shape*> Shapes;
    Circle* c1 = new Circle(9.8f);
    Rectangle* r = new Rectangle(11.2f, 7.4f);
    Square* s = new Square(6.9f);
    Shapes.push_back(c1);
    Shapes.push_back(r);
    Shapes.push_back(s);

    for (int i = 0; i < Shapes.size(); i++)
    {
        Shapes[i]->Log();
    }

    for (auto& x : Shapes)
        delete x;
}
