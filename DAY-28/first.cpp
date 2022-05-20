#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

struct ItemDet
{
    int item_price, qty;
    string item_name;
};


class Item{
    protected:
    int n;
    int tp;
    vector <string> itNam;
    vector <int> itPrice, price, quant;
    public:
    Item(int totNum = 0){
        tp = 0;
        n = totNum;
        ItemDet items[n];
        string dummy;
        for(int i = 0; i < n; i++){
            cout << "Enter the price of the item: ";
            cin >> items[i].item_price;
            getline(cin, dummy);
            cout << "Enter the name of the item: ";
            getline(cin, items[i].item_name);
            cout << "Enter the quantity of the item: ";
            cin >> items[i].qty;

            tp += items[i].item_price * items[i].qty;
            itNam.push_back(items[i].item_name);
            itPrice.push_back(items[i].item_price);
            price.push_back(items[i].item_price * items[i].qty);
            quant.push_back(items[i].qty);
        }
    }
};
class Discounted_Item : public Item{
    float discount;float totDiscPrice;
    vector <float> discPrice;
    public:
    Discounted_Item(int tot):Item(tot){
        totDiscPrice = 0;
        discount = 0.25;
        for(int i = 0; i < n; i++){
            discPrice.push_back(price.at(i) - discount * price.at(i));
            totDiscPrice += price.at(i) - discount * price.at(i);
        }
    }
    void print_bill() const{
        cout << "Sr. No.\tItem\t\tItem Price\t\tQty.\t\tTotal Price\tDiscounted Price"<< endl;
        for(int i = 0; i < n; i++){
            cout << i+1 << ".\t" << itNam.at(i) << "\t" << itPrice.at(i) << "\t\t\t" << quant.at(i) << "\t\t" << price.at(i) << "\t\t" << discPrice.at(i) << endl;
        }
        cout << endl << endl;
        cout << "****************" << endl;
        cout << "Total Price: " << tp << endl;
        cout << "****************" << endl;
        cout << "Discounted Price: " << totDiscPrice << endl; 
        cout << "****************" << endl;
    }
};

int main(){
    Discounted_Item d1(2);
    d1.print_bill();
    return 0;
}