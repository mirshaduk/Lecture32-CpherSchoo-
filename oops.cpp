#include<iostream>
using namespace std;
//the vhicle is a base class

class vhicle
{ 
    public:

    int number_tyres;
    string name;
    int captivity;
    int milage;

    
};
//now i will inherit the features of base class into derived classs

class schoolBus: public vhicle
{
    

    string school_name;

    int number_holidays;

    public:

    
    void printname()
    {
        cout<<"halau"<<name;
    }
};
class car :public vhicle //deived calss has inherited all data from the base class vhicle
{



    public:

    int number_airbags;
    int ac_consumption;

    public:

    void calcmilage()
    {
        cout<<milage;
    }

    



};
class SUV: public car
{
    public:
    int four_wheel_drive;

    public:
    void printname()
    {
        cout<<"hellll"<<name;
    }
    
};
int main()
{
    SUV  a;
    schoolBus b;
   a.name = "maruthi";
   b.name = "toyota";

   a.printname();
   cout<<endl;
   b.printname();

    

}