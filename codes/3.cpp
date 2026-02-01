#include <iostream>
using namespace std;

class waterBottle{
	
	private:
		string company, color;
		float waterCapacity_ml, waterCapacity_l ;
	
	public:
		//setters
		void setCompany(string comp){ company = comp; }
		void setColor(string Color) { color = Color; }
		void setCapacity(float cap) { 
		waterCapacity_ml = cap;
		waterCapacity_l = cap/1000.0;
		}
		
		//getters
		string getCompany(){ return company; }
		string getColor() { return color; }
		float getCapacity_ml() { return waterCapacity_ml; }
		float getCapacity_l() { return waterCapacity_l; }
		
		//fucntions
		void drink(){
			float ml;
			cout << "ENter Amount Of water You dRank (ml): ";
			cin >> ml;
			
			if(ml > waterCapacity_ml){
				waterCapacity_ml = 0;
				waterCapacity_l = 0;
			}
			else{
				waterCapacity_ml -= ml;
				waterCapacity_l -= ml/1000.0 ;
			}
		}
};  

int main(){

    waterBottle bottle;

    bottle.setCompany("Aquafina");
    bottle.setColor("Transparent");
    bottle.setCapacity(2000);

    cout << "Company: " << bottle.getCompany() << endl;
    cout << "Color: " << bottle.getColor() << endl;
    cout << "Capacity: " << bottle.getCapacity_l() << " L, "
         << bottle.getCapacity_ml() << " ml" << endl;

    bottle.drink();

    cout << "\nAfter drinking:\n";
    cout << "Capacity: " << bottle.getCapacity_l() << " L, "
         << bottle.getCapacity_ml() << " ml" << endl;

}

