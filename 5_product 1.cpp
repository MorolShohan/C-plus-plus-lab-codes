#include<iostream>
using namespace std;

int main()
{
    float product_1,product_2,product_3,product_4,product_5;
    int product1_q1,product2_q2,product3_q3,product4_q4,product5_q5;
    double total_retaill_value;
    product_1=200.75;
    product_2=345.50;
    product_3=775.75;
    product_4=400.35;
    product_5=1200.75;

    cout<<"Enter the quantity sold of product1 : ";
    cin>>product1_q1;

    cout<<"Enter the quantity sold of product2 : ";
    cin>>product2_q2;

    cout<<"Enter the quantity sold of product3 : ";
    cin>>product3_q3;

    cout<<"Enter the quantity sold of product4 : ";
    cin>>product4_q4;

    cout<<"Enter the quantity sold of product5 : ";
    cin>>product5_q5;

    total_retaill_value = (product_1*product_2)+(product_2*product2_q2)+(product_3*product3_q3)+(product_4*product4_q4)+(product_5*product5_q5);
    cout<<"Total retaill value of products sold : "<<total_retaill_value<<endl;

    return 0;



}

