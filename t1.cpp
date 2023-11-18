//Sagar Ghosh 1BI20IS073
#include <iostream>
using namespace std;

class Basket{

    private:
    string product;
    int unit_price;
    int gst;
    int qty;

    public:
    Basket(string pr,int unit, int a, int b){
        product=pr;
        unit_price=unit;
        gst=a;
        qty=b;
    }

    float calculate_gst_amt(int u,int g,int q)
    {
    float gst_amount;
    gst_amount=(u*g*q)/100.00;
    return gst_amount;
    }

};


int main(){
    float basket[4];

    Basket b1("Leather wallet",1100,18,1);
    Basket b2("Umbrella",900,12,4);
    Basket b3("Cigarette",200,28,3);
    Basket b4("Honey",100,0,2);

    basket[0]=b1.calculate_gst_amt(1100,18,1);
    basket[1]=b2.calculate_gst_amt(900,12,4);
    basket[2]=b3.calculate_gst_amt(200,28,3);
    basket[3]=b4.calculate_gst_amt(100,0,2);

    float max=basket[0];
    int maxIndex=0;
    for(int i=0;i<4;i++){
        if(basket[i]>max){
            max=basket[i];
            maxIndex=i;
        }
    }
    if(maxIndex==0){
        cout<<"Leather wallet has the maximum gst amount"<<endl;
    }
    else if(maxIndex==1){
        cout<<"Umbrella has the maximum gst amount"<<endl;
    }
    else if(maxIndex==2){
        cout<<"Cigarette has the maximum gst amount"<<endl;
    }
    else{
        cout<<"Honey has the maximum gst amount"<<endl;
    }

    //Total gst amount
    float total_gst_amount=0;
    for (int i = 0; i < 4; i++)
    {
       total_gst_amount=total_gst_amount+basket[i];
    }
    
    //total price
    float total_unit_price_amt=(1100.00*1)+(900.00*4)+(200.00*3)+(100.00*2);

    //Discount
    float d1=(5*(1100*1+basket[0]))/100;
    float d2=(5*(900*4+basket[1]))/100;

    cout<<"Total amount to be paid is "<<float(total_unit_price_amt)+float(total_gst_amount)-d1-d2<<endl;

return 0;
}