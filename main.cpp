#include <iostream>
#include <string>
using namespace std;

class habit {
protected:
    int id;
    string hname;
    int streak;

public:
    habit(string name, int i) {
        hname = name;
        id = i;
        streak = 0;
        cout << "Habit Created: " << hname << endl;
    }

    virtual void markcomplete() {
        streak++;
        cout << "Habit marked complete: "
             << hname << " | Streak: " << streak << endl;
    }

    int getstreak() {
        return streak;
    }

    virtual ~habit() {
        cout << "Habit Destroyed: " << hname << endl;
    }
};

class NormalHabit : public habit {
public:
    NormalHabit(string name, int id) : habit(name, id) {}

    void markcomplete() override {
        streak++;
        cout << "Tracked \"" << hname
             << "\" successfully | Streak: " << streak << endl;
    }
};

int main() {

    string name;
    int id;

    cout << "Enter habit you want to track: ";
    getline(cin >> ws, name);

    cout << "Enter habit id: ";
    cin >> id;

    habit* h = new NormalHabit(name, id);

    h->markcomplete();
    h->markcomplete();

    delete h;
    return 0;
}
