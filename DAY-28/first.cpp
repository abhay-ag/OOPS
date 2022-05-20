#include <iostream>
using namespace std;

class Item{
    protected:
    int item_no, price;
    string name;

    public:
    Item(int srNo, int val, string nm){
        item_no = srNo;
        price = val;
        name = nm;
    }
};
class Discounted_Item : public Item{
    int qty, tp, tpd;
    float discount;
    public:
    Discounted_Item(int quant,int _srNo, int _val, string _name):Item(_srNo, _val, _name){
        discount = 0.25;
        qty = quant;
    }

    void tp_disc(){
        tp = price * qty;

        tpd = tp - discount*tp;
    }

    void print_bill() const{
        cout << item_no << ". \t" << name << "\t\tPrice: " << price <<"\t\t Qty: " << qty << "\t\tTot. Price: " << tp << "\t\tDisc. Price: " << tpd << endl;
    }
};

int main(){
    Discounted_Item d1(5, 1, 100, "Dairy Milk Silk");
    d1.tp_disc();
    d1.print_bill();
    return 0;
}