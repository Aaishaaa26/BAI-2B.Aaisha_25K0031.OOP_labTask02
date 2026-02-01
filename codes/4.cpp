#include <iostream>
using namespace std;

class stationeryShop{
    public:
        string items[100];
        double prices[100];
        int count;

    stationeryShop(){
        count = 0;
    }

    void addItem(){
        cout << "Enter item name: ";
        cin.ignore();
        getline(cin, items[count]);

        cout << "Enter price: ";
        cin >> prices[count];

        count++;
    }

    void listItems(){
        if(count == 0){
            cout << "No items are available\n";
            return;
        }
        for(int i = 0; i < count; i++){
            cout << i + 1 << ":  " << items[i] << endl;
        }
    }

    void editPrice(){
        int index;
        listItems();

        cout << "Select item number to edit price: ";
        cin >> index;

        if(index < 1 || index > count){
            cout << "Invalid choice\n";
            return;
        }
        cout << "Enter new price: ";
        cin >> prices[index - 1];
    }

    void viewAll(){
        if(count == 0){
            cout << "No items available\n";
            return;
        }
        for(int i = 0; i < count; i++){
            cout <<"Items: " <<  items[i] << ",  Price:  " << prices[i] << endl;
        }
    }

    void generateReceipt(){
        if(count == 0)
        {
            cout << "No item in shop\n";
            return;
        }

        int n;
        cout << "Enter number of different items bought: ";
        cin >> n;

        double total = 0;

        cout << "\n\t\t\t\tReceipt\n";

        for(int i = 0; i < n; i++)
        {
            string name;
            int qty;
            int found = -1;

            cout << "Enter item name: ";
            cin.ignore();
            getline(cin, name);

            cout << "Enter quantity: ";
            cin >> qty;

            for(int j = 0; j < count; j++){
                if(items[j] == name){
                    found = j;
                    break;
                }
            }

            if(found == -1){
                cout << name << "NOT found in shop\n";
            }
            else{
                double price = prices[found] * qty;
                total = total + price;

                cout << name << " x " << qty
                     << " = RS. " << price << endl;
            }
        }
        cout << "\n\nTotal Bill: Rs " << total << endl;
    }
};

int main(){
    stationeryShop shop;
    int choice;

    do{
        cout << "\n1. Add item\n";
        cout << "2. List items\n";
        cout << "3. Edit item price\n";
        cout << "4. View all items with prices\n";
        cout << "5. Generate receipt\n";
        cout << "0. Exiting....\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch(choice){
            case 1: shop.addItem(); break;
            case 2: shop.listItems(); break;
            case 3: shop.editPrice(); break;
            case 4: shop.viewAll(); break;
            case 5: shop.generateReceipt(); break;
            case 0: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice\n";
        }

    }while(choice != 0);

}

