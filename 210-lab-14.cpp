// COMSC210 | Lab 14 | Gillian Rhett
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

const int MIN = 0, MAX = 255;

class Color {
    int red, green, blue;

    // private helper function
    bool validNum(int num) { // checks whether num is in the range of MIN - MAX
        return (MIN <= num && num <= MAX);
    }

    public:
        // constructors
        Color() { // with no arguments, initialize all values to 0
            red = 0;
            green = 0;
            blue = 0;
        }

        Color(int r, int g, int b) { setColor(r, g, b); }
        // uses the set function to include data validation

        // setters
        // these are intended for hard-coded rgb values, not user input
        // so they substitute values of 0 rather than ending the program or asking for another input
        void setColor(int r, int g, int b) { // provide all three values to set the color
        // just calls all three setters for convenience
            setRed(r);
            setGreen(g);
            setBlue(b);
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
            cout << fixed << setw(6) << red;
            cout << fixed << setw(6) << green;
            cout << fixed << setw(6) << blue << endl;
        }
};

int main() {
    vector<Color*> colors; // pointers to the colors so it's easy to print them all
    // not just a vector of colors because this way we can change it after we add them

    cout << "Creating example colors ..." << endl;
    Color c1(-1, 1, 1);
    colors.push_back(&c1);
    c1.setColor(122, 28, 255);
    c1.setRed(50);
    
    Color c2;
    colors.push_back(&c2);
    c2.setBlue(80);
    
    Color c3(255, 255, 255);
    colors.push_back(&c3);
    
    Color c4;
    colors.push_back(&c4);
    c4.setColor(100, 20, 50);

    cout << "Example colors:" << endl;
    cout << fixed << setw(6) << "red" << setw(6) << "green" << setw(6) << "blue" << endl;
    for (Color* eachColor : colors)
        (*eachColor).print();

    return 0;
}