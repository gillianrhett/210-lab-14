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
        Color() { // use default values of 0 if there are no arguments
            red = 0;
            green = 0;
            blue = 0;
        }

        Color(int r, int g, int b) { setColor(r, g, b); }
        // uses the set function because that includes data validation

        // setters
        // these are intended for hard-coded rgb values, not user input
        // so they substitute values of 0 rather than ending the program or asking for another input
        void setColor(int r, int g, int b) { // provide all three values to set the color
        // set all three colors at once for convenience
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
        int getRed() const { return red; } // inline function to return the red value
        int getGreen() const { return green; } // inline function to return the red value
        int getBlue() const { return blue; } // inline function to return the red value

        // other function
        void print() const { // display the three values
            cout << fixed << setw(6) << red;
            cout << fixed << setw(6) << green;
            cout << fixed << setw(6) << blue << endl;
        }
};

int main() {
    vector<Color*> colors; // pointers to the colors so it's easy to print them all
    // not just a vector of colors because this way we can change values after we add them

    cout << "Creating example colors ..." << endl;
    Color c1(-1, 1, 1); // example of invalid value for red
    colors.push_back(&c1);
    c1.setColor(122, 28, 255);
    c1.setRed(50);
    
    Color c2;
    colors.push_back(&c2);
    c2.setBlue(80);
    
    Color c3(255, 256, 255); // example of invalid value for green
    colors.push_back(&c3);
    
    Color c4;
    colors.push_back(&c4);
    c4.setColor(100, 20, 50);

    Color c5(255, 255, 255);
    colors.push_back(&c5);
    c5.setGreen(120);

    cout << "Example colors:" << endl;
    cout << fixed << setw(6) << "red" << setw(6) << "green" << setw(6) << "blue" << endl;
    for (Color* eachColor : colors)
        (*eachColor).print();

    return 0;
}