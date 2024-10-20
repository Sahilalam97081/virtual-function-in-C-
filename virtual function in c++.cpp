#include<iostream>
using namespace std;
class Add{
    public:
    virtual void print(){
        cout<<"Base class"<<endl;
    }
};
class sub: public Add{
   public:
   void print(){
    cout<<"Derived class"<<endl;
   }
};
int main(){
    Add*ptr;
    sub s;
    ptr=&s;
    ptr->print();
    return 0;
}