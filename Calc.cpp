#include <iostream>
#include <cmath>
#include <unistd.h>  

using namespace std;

class Basicfunc {
private:
    float sum = 0, mp_sum = 1, div_sum;
    int size;

public:
    void Addition() {
        sleep(1);
        cout << "How many numbers do you want to add? || Value must be greater than 1" << endl;
        cin >> size;

        if (size > 1) {
            float array[size];
            sum = 0;  
            for (int i = 0; i < size; i++) {
                cout << "Enter Number " << i + 1 << endl;
                cin >> array[i];
            }

            for (int i = 0; i < size; i++) {
                sum += array[i];
            }
            cout << "Total Sum of all numbers is: " << sum << endl;
        } else {
            cout << "Please enter a value greater than 1" << endl;
            sleep(1);
            Addition();  
        }
    }

    void Subtraction() {
        sleep(1);
        cout << "How many numbers do you want to subtract? || Value must be greater than 1" << endl;
        cin >> size;

        if (size > 1) {
            float array[size];
            sum = 0;  
            cout << "Enter Number 1" << endl;
            cin >> sum;  
            for (int i = 1; i < size; i++) {
                cout << "Enter Number " << i + 1 << endl;
                cin >> array[i];
                sum -= array[i];
            }
            cout << "Total Difference of all numbers is: " << sum << endl;
        } else {
            cout << "Please enter a value greater than 1" << endl;
            sleep(1);
            Subtraction(); 
        }
    }

    void Multiplication() {
        sleep(1);
        cout << "How many numbers do you want to multiply? || Value must be greater than 1" << endl;
        cin >> size;

        if (size > 1) {
            float array[size];
            mp_sum = 1;  
            for (int i = 0; i < size; i++) {
                cout << "Enter Number " << i + 1 << endl;
                cin >> array[i];
            }

            for (int i = 0; i < size; i++) {
                mp_sum *= array[i];
            }
            cout << "Total Product of all numbers is: " << mp_sum << endl;
        } else {
            cout << "Please enter a value greater than 1" << endl;
            sleep(1);
            Multiplication(); 
        }
    }

    void Division() {
        sleep(1);
        cout << "How many numbers do you want to divide? || Value must be greater than 1" << endl;
        cin >> size;

        if (size > 1) {
            float array[size];
            cout << "Enter Number 1" << endl;
            cin >> div_sum;  
            for (int i = 1; i < size; i++) {
                cout << "Enter Number " << i + 1 << endl;
                cin >> array[i];
                if (array[i] == 0) {
                    cout << "Cannot divide by zero!" << endl;
                    return;
                }
                div_sum /= array[i];  // Apply division.
            }
            cout << "Total Dividend of all numbers is: " << div_sum << endl;
        } else {
            cout << "Please enter a value greater than 1" << endl;
            sleep(1);
            Division();  
        }
    }
};

void Choice_func() {
    Basicfunc basic_obj;
    int choice;
    cout << "Please select one of the following:" << endl;
    cout << "1 For Addition" << endl;
    cout << "2 For Subtraction" << endl;
    cout << "3 For Multiplication" << endl;
    cout << "4 For Division" << endl;
    cin >> choice;

    switch (choice) {
    case 1:
        basic_obj.Addition();
        cin.get();
        break;
    case 2:
        basic_obj.Subtraction();
        cin.get();
        break;
    case 3:
        basic_obj.Multiplication();
        cin.get();
        break;
    case 4:
        basic_obj.Division();
        cin.get();
        break;
    default:
        cout << "Wrong Choice!" << endl;
        sleep(1);
        Choice_func();  
        break;
    }
}

int main() {
    Choice_func();
    cin.get();
    return 0;
}
