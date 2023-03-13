#include <iostream>
using namespace std;
class Employee{
    private:
    string ID;
    string Name;
    string Department;
    string Position;
    public:
    Employee(string name,string id,string department,string position){
        this->ID = id;
        this->Name = name;
        this->Department = department;
        this->Position = position;
    }
    Employee(string name,string id){    
        this->ID = id;
        this->Name = name;
        this->Department = "";
        this->Position = "";
    }
    Employee(){
        this->ID = "0";
        this->Name = "";
        this->Department = "";
        this->Position = ""; 
    } 
    string getID(){
        return this -> ID;
    }
    void setID (string id){
        this-> ID = id;
    }
    string getName(){
        return this->Name;
    }
    void setName(string name){
        this -> Name = name;
    }
    string getDepartment(){
        return this->Department;
    }
    void setDepartment(string department){
        this -> Department = department;
    }
    string getPosition(){
        return this->Position;
    }
    void setPosition(string position){
        this -> Position = position;
    }
    void display(){
        cout << this->Name << " - " << this->ID << " - " << this->Department << " - " << this->Position << endl;
    }
};
int main(){
    Employee a("Susan Meyers","47899","Accounting","Vice President");
    Employee b("Susan Meyers","47899","Accounting","Vice President");
    Employee c("Susan Meyers","47899","Accounting","Vice President");
    Employee d("trung","1213");
    Employee e;
    a.display();
    b.display();
    c.display();
    d.display();
    e.display();
    return 0;
}