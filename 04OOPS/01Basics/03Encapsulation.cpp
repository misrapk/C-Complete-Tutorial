// Encapsulation....

#include<iostream>
using namespace std;

class Date{
    /*
    private:
        int day{1};
        int month;
        int year;

    public:
        //  getter & setter;
        void setDate(int userday){
            day = userday;
        }
        void getDate(){
            cout<<"day IS : "<<day<<endl;
        }
*/


private: 
    int val[3];

  public:
    void setValue(int value){
        val[0] = value;
    }      
    int getValue(){
        return val[0];
    }
};


int main(){
    Date date;

    // date.getDate();
    // date.setDate(22);
    // date.getDate();

        date.setValue(14);
        cout<<date.getValue();

}