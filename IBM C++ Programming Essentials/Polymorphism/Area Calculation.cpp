#include <iostream>
#include <string>
using namespace std;

class Shape
{
public:
    virtual double calculateArea() = 0;
};

class Circle : public Shape
{
private:
    int radius;

public:
    void setRadius(int r)
    {
        radius = r;
    }

    int getRadius()
    {
        return radius;
    }

    double calculateArea() override
    {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape
{
private:
    int width;
    int height;

public:
    void setWidth(int w)
    {
        width = w;
    }

    void setHeight(int h)
    {
        height = h;
    }

    int getWidth()
    {
        return width;
    }

    int getHeight()
    {
        return height;
    }

    double calculateArea() override
    {
        return width * height;
    }
};

class Triangle : public Shape
{
private:
    float base;
    float height;

public:
    void setBase(float b)
    {
        base = b;
    }

    float getBase()
    {
        return base;
    }

    void setHeight(float h)
    {
        height = h;
    }

    float getHeight()
    {
        return height;
    }

    double calculateArea() override
    {
        return 0.5 * base * height;
    }
};

int main()
{
    string shape;
    cout << "Enter the type of shape:" << endl;
    cin >> shape;

    Shape *shapeObj;

    if (shape == "Circle")
    {
        Circle circle;
        int radius;
        cout << "Enter the radius (in cm):" << endl;
        cin >> radius;
        circle.setRadius(radius);
        shapeObj = &circle;
    }
    else if (shape == "Rectangle")
    {
        Rectangle rectangle;
        int width, height;
        cout << "Enter the width (in cm):" << endl;
        cin >> width;
        rectangle.setWidth(width);
        cout << "Enter the height (in cm):" << endl;
        cin >> height;
        rectangle.setHeight(height);
        shapeObj = &rectangle;
    }
    else if (shape == "Triangle")
    {
        Triangle triangle;
        float base, height;
        cout << "Enter the base (in cm):" << endl;
        cin >> base;
        triangle.setBase(base);
        cout << "Enter the height (in cm):" << endl;
        cin >> height;
        triangle.setHeight(height);
        shapeObj = &triangle;
    }
    else
    {
        cout << "Invalid shape type entered." << endl;
        return 1;
    }

    cout << "The area of the " << shape << " is: " << shapeObj->calculateArea() << " square centimeters" << endl;

    return 0;
}
