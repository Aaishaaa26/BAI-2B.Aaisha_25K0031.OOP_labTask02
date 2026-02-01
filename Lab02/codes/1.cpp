#include <iostream>
using namespace std;

class BoardMarker{
	
	//attriutes
	private:
	string company, color;
	bool refillable, inkStatus;
	
	public:
		//setters
		void setCompany(string newComp){
			company = newComp;
		}
		void setColor(string newColor){
			color = newColor;
		}
		void setRefillable(bool newRefillable){
			refillable = newRefillable;
		}
		void setInkStatus(bool newInkStatus){
			inkStatus = newInkStatus;
		}
		//getters
		string getCompany(){
			return company;
		}
		string getColor(){
			return color;
		}
		bool getRefillable(){
			return refillable;
		}
		bool getInkStatus(){
			return inkStatus;
		}
		//functions
		void write(){
			if(!inkStatus){
				cout << "\nCan Not Write, Ink Is Empty" <<endl;
			}
			else{
				cout <<"\nWriting.." <<endl;
			}
		}
		void refill(){
			if(refillable){
				inkStatus = true;
				cout << "\nInk Refilled" << endl;
			}
			else{
				cout << "\nMarker Can Nit Be Refilled" << endl;
			}
		}	
};

int main()
{
    BoardMarker m1, m2, m3;

    m1.setCompany("Dollar");
    m1.setColor("Black");
    m1.setRefillable(true);
    m1.setInkStatus(true);

    m2.setCompany("Dux");
    m2.setColor("Black");
    m2.setRefillable(false);
    m2.setInkStatus(false);

    m3.setCompany("Piano");
    m3.setColor("Blue");
    m3.setRefillable(true);
    m3.setInkStatus(false);

    cout << "\nMarker 1:\n" << endl;
    m1.write();
    m1.refill();
    m1.write();

    cout << "\nMarker 2:\n" << endl;
    m2.write();
    m2.refill();
    m2.write();

    cout << "\nMarker 3:\n" << endl;
    m3.write();
    m3.refill();
    m3.write();

}

