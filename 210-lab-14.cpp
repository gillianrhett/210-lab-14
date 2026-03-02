// COMSC210 | Lab 14 | Gillian Rhett
#include <iostream>
#include <iomanip>

using namespace std;

const int MIN = 0, MAX = 255;

class Color {
    int red, green, blue;

    // private helper function
    bool validNum(int num) { // checks whether num is in the range of MIN - MAX
        return (MIN <= num && num <= MAX);
    }

    public:
        // setters
        // these are intended for hard-coded rgb values, not user input
        // so it uses values of 0 rather than ending the program or asking for another input
        void setColor(int r, int g, int b) { // provide all three values to set the color
        }
        
        void setRed(int r) {  // set/change just the red value
            if (validNum(r))
                red = r;
            else {
                cout << "Error: invalid r value. Setting r to 0." << endl;
                red = 0;
            }
        }

        void setGreen(int g) {  // set/change just the green value
            if (validNum(g))
                green = g;
            else {
                cout << "Error: invalid g value. Setting g to 0." << endl;
                green = 0;
            }
        }

        void setBlue(int b) {  // set/change just the blue value
            if (validNum(b))
                blue = b;
            else {
                cout << "Error: invalid b value. Setting b to 0." << endl;
                blue = 0;
            }
        }
        
        // getters
        int getRed() { return red; } // inline function to return the red value
        int getGreen() { return green; } // inline function to return the red value
        int getBlue() { return blue; } // inline function to return the red value

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