#include<iostream>

using namespace std;

class habit{
    private:
    int id;
    string hname;
    int streak;
    public:
    habit(){
    
        cout<<"Enter Task and Id";
        cin>>hname>>id;
        streak=0;
        cout<<"Habit Created : "<<hname<<endl;
    
    }
    ~habit(){
    cout<<"Habit Destroyed"<<hname<<endl;
    }


    void markcomplete();

    inline int getstreak(){

    return streak;
}

    
    friend void display();
};

void habit::markcomplete(){
    streak++;
    cout<<"mark completed"<<endl;
}


int main(){


    return 0;
}