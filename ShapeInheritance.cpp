#include <iostream>
using namespace std;

class Shape {
protected:
    string color;
    string pattern;
public:
    Shape(string c, string p) : color(c), pattern(p) {}

    void setColor(string c){
         color = c;
    }

    string getColor(){
         return color;
    }

    void setPattern(string p){
         pattern = p;
    }

    string getPattern(){
         return pattern;
    }

    void Display() {
        cout << " The Color of shape is: " << color << "and Pattern is: " << pattern << endl;
    }
};

class Circle : public Shape {
private:
    float radius;
public:
    Circle(float r, string c1, string p1) : Shape(c1, p1), radius(r) {}

    void setRadius(float r){
         radius = r;
    }

    float getRadius(){
         return radius;
    }

    void Display(){
        cout << "Circle Radius is: " << radius
             << ", Color: " << color
             << ", Pattern: " << pattern << endl;
    }
};

class Rectangle : public Shape {
private:
    float width, height;
public:
    Rectangle(float w, float h, string c1, string p1) : Shape(c1, p1), width(w), height(h) {}

    void setWidth(float w){
         width = w;
    }

    float getWidth(){
         return width;
    }

    void setHeight(float h){
         height = h;
    }

    float getHeight(){
         return height;
    }

    void Display(){
        cout << "Rectangle Width is: " << width << ", Height: " << height
             << ", Color: " << color
             << ", Pattern: " << pattern << endl;
    }
};

int main() {
    Shape s1("Blue", "DotDot");
    Shape s2=s1;
    Circle c1(2.5, "Yellow", "LineLine");
    Circle c2=c1;
    Rectangle r1(4.0, 6.0, "Red", "Checkered");
    Rectangle r2=r1;

    s1.Display();
    c1.Display();
    r1.Display();

    s2.setColor(s1.getColor());
    s2.setPattern(s1.getPattern());
    c2.setColor(c1.getColor());
    c2.setPattern(c1.getPattern());
    c2.setRadius(c1.getRadius());
    r2.setColor(r1.getColor());
    r2.setPattern(r1.getPattern());
    r2.setWidth(r1.getWidth());
    r2.setHeight(r1.getHeight());





    return 0;
}




