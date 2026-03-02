// COMSC210 | Lab 14 | Gillian Rhett
#include <iostream>
#include <iomanip>

using namespace std;

const int MIN = 0, MAX = 255;

class Color {
    int red, green, blue;

    public:
        // getters and setters
        void setColor(int r, int g, int b) { // provide all three values to set the color
            red = r;
            green = g;
            blue = b;
        }
        int getRed() { return red; } // return the red value
        int getGreen() { return green; } // return the red value
        int getBlue() { return blue; } // return the red value

        // other function
        void print() { // display the three values
            cout << "red: " << red << ", ";
            cout << "green: " << green << ", ";
            cout << "blue: " << blue << endl;
        }
};

int main() {
    Color c1;
    c1.setColor(0, 0, 255);
    c1.print();
    return 0;
}