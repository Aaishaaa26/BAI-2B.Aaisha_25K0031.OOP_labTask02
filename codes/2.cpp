#include <iostream>
#include <cmath>
using namespace std;

class Circle{
	
	//attributes
	private:
		double radius, pi = 3.14159;
	//functions
	public:
		//setter
		void setRadius(double newRadius){
			radius = newRadius;
		}
		//getter
		double getRadius(){
			return radius;
		}

		double getArea(){
			return pi * pow(radius,2);
		}
		double getDiameter(){
			return radius * 2;
		}
		double getCircumference(){
			return 2 * pi * radius;
		}
};

int main(){
	
	Circle circle;
	double r;
	
	cout << "\t\t\t\tCircle Calculations\n\nEnter Radius: " << endl;
	cin >> r;
	circle.setRadius(r);
	
	cout <<"Area: "<< circle.getArea() << endl << "Diameter: " << circle.getDiameter() << endl << "Circumference:" << circle.getCircumference() <<endl;
}
