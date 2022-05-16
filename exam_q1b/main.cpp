#include <iostream>
using namespace std;

int main() {

    int semesterCredits[6] = { 10, 12, 16, 15, 14, 11 };
    int i;
    int course = 3;
    
    for (int i = 0; i < 6; i++){
        
        cout << semesterCredits[i] << " - ";
        
        if (semesterCredits[i] < 12){
            
            cout << "\nAdd for full time status!\n";
            semesterCredits[i] += course;
            
        }
        
    }
    
    cout << endl;
    
    for (i = 5; i >=0; i--)
        cout << semesterCredits[i] << " # ";
    
    return 0;
}

//OUTPUT:

/*
 10 -
 Add for full time status!
 12 - 16 - 15 - 14 - 11 -
 Add for full time status!

 14 # 14 # 15 # 16 # 12 # 13 # Program ended with exit code: 0
 */
