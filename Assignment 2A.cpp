// Part A
#include <iostream>
#include <vector>
#include <string> 
using namespace std;

int main()
{
vector <string> menu; // declared menu as vector that can be held by string 
   
   //using menu to show where the dishes will be put using pushback
   // all the food names were provided by my lil sister 
   menu.push_back ("Burbur");
   menu.push_back ("chicken tenders");
   menu.push_back ("Frozen strawberries");
   menu.push_back ("rice and beans");
   menu.push_back ("chicken wings");
   
   menu.insert(menu.begin() + 1, "chicken nuggets"); //adding chicken nuggets into the second position using insert
   
   
   menu.erase(menu.begin() + 3); //removed an element using erase 
   
   for (string dish:menu){ // the ranged based loop 
      cout << dish << endl;
   }
}

Part B
#include <iostream>  
#include <vector>    

using namespace std;

// used a pass by ref fot the average 
double getaverage(const vector<int>& ids) {
    double total = 0;
    // ranged based loop 
    for (int id : ids) {
        total += id;
    }
    return total / ids.size(); // used size fuction 
}

// pass by ref for the highest
int gethighest(const vector<int>& ids) {
    int maxval = ids.front(); //used front func 
   
    for (size_t i = 0; i < ids.size(); i++) {
        if (ids[i] > maxval) { 
            maxval = ids[i];
        }
    }
    return maxval;
}

int main() {
    // the id numbers that i will be using 
    vector<int> studentids={1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010};

    // to call the func 
    double avg = getaverage(studentids);
    int highest = gethighest(studentids);

    cout << "average: " << avg << endl;
    cout << "highest: " << highest << endl;

    
}
