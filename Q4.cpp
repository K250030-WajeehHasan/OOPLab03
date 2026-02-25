#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;
    const double area;
public:
    Rectangle(double l, double w): length(l), width(w), area(l * w) {
    }
    void show() {
        cout<<"Length: "<<length<<endl;
        cout<<"Width: "<<width<<endl;
        cout<<"Area: "<<area<<endl;
    }
};
int main() {
    Rectangle r(6, 8);
    r.show();
    return 0;
}
