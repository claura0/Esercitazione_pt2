#include <iostream>
#include "polygon.h"
#include "rectangle.h"
#include "rhombus.h"
#include "RightTriangle.h"

int main()
{
    /// RECTANGLE TEST

    cout << "RECTANGLE TEST" << endl;
    float w = 0;
    float l = 0;

    cout << "A constructor" << endl;
    Rectangle rA(2,3);
    cout << "B constructor" << endl;
    Rectangle rB;
    cout << "C constructor" << endl;
    Rectangle rC;
    cout << endl;

    cout << "Getters/setters test" << endl;
    rB.SetDim(3,4);
    w = rB.GetWidth();
    l = rB.GetLength();
    cout << "Width of B:" << endl;
    cout << w << endl;
    cout << "Length of B:" << endl;
    cout << l << endl;
    cout << endl;

    cout << "Operators test" << endl;
    rC = rA;
    if (rC == rA) {
        cout << "C and A are equal" << endl;
    }
    cout << endl;

    cout << "Area and perimeter" << endl;
    cout << "Area of A:" << endl;
    cout << rA.GetArea() << endl;
    cout << "Perimeter of A:" << endl;
    cout << rA.GetPerimeter() << endl;
    cout << endl;


    /// RHOMBUS TEST

    cout << "RHOMBUS TEST" << endl;
    float dH = 0;
    float dV = 0;

    cout << "A constructor" << endl;
    Rhombus rhA(2,6);
    cout << "B constructor" << endl;
    Rhombus rhB;
    cout << "C constructor" << endl;
    Rhombus rhC;
    cout << endl;

    cout << "Getters/setters test" << endl;
    rhB.SetDim(2,4);
    dH = rhB.GetHorD();
    dV = rhB.GetVerD();
    cout << "Horizontal diagonal of B:" << endl;
    cout << dH << endl;
    cout << "Vertical diagonal of B:" << endl;
    cout << dV << endl;
    cout << endl;

    cout << "Operators test" << endl;
    rhC = rhA;
    if (rhC == rhA) {
        cout << "C and A are equal" << endl;
    }
    cout << endl;

    cout << "Area and perimeter" << endl;
    cout << "Area of A:" << endl;
    cout << rhA.GetArea() << endl;
    cout << "Perimeter of A:" << endl;
    cout << rhA.GetPerimeter() << endl;
    cout << endl;


    /// RIGHT TRIANGLE TEST

    cout << "RIGHT TRIANGLE TEST" << endl;
    float bs = 0;
    float al = 0;

    cout << "A constructor" << endl;
    RightTriangle tA(1,5);
    cout << "B constructor" << endl;
    RightTriangle tB;
    cout << "C constructor" << endl;
    RightTriangle tC;
    cout << endl;

    cout << "Getters/setters test" << endl;
    tB.SetDim(5,3);
    bs = tB.GetBase();
    al = tB.GetAltitude();
    cout << "Base of B:" << endl;
    cout << bs << endl;
    cout << "Altitude of B:" << endl;
    cout << al << endl;
    cout << endl;

    cout << "Operators test" << endl;
    tC = tA;
    if (tC == tA) {
        cout << "C and A are equal" << endl;
    }
    cout << endl;

    cout << "Area and perimeter" << endl;
    cout << "Area of A:" << endl;
    cout << tA.GetArea() << endl;
    cout << "Perimeter of A:" << endl;
    cout << tA.GetPerimeter() << endl;
    cout << endl;

    return 0;
}

