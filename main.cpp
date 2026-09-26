// COMSC 210 | Lab 14 | Yeji Kim

#include <iostream>

using namespace std;

class Color {
    private:
        int red;
        int green;
        int blue;

    public:
    // setter functions
    void setRed(int r) {
        red = r;
    }

    void setGreen(int g) {
        green = g;
    }

    void setBlue(int b) {
        blue = b;
    }

    //getter functions
    int getRed() {
        return red;
    }

    int getGreen() {
        return green;
    }

    int getBlue() {
        return blue;
    }

    //print function
    void print() {
        cout << "Red: " << red 
        << ", Green: " << green 
        << ", Blue: " << blue << endl;
    }
};

int main() {
    // make color objects
    Color color1;
    Color color2;
    Color color3;

    // population objects with values
    color1.setRed(255);
    color1.setGreen(0);
    color1.setBlue(0);

    color2.setRed(0);
    color2.setGreen(255);
    color2.setBlue(0);

    color3.setRed(0);
    color3.setGreen(0);
    color3.setBlue(255);

    // print color objects
    cout << "Color 1: ";
    color1.print();

    cout << "Color 2: ";
    color2.print();

    cout << "Color 3: ";
    color3.print();

    return 0;
}