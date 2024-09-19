#include <iostream>
#include <string>
#include<windows.h>
#include <conio.h>

using namespace std;

const unsigned int COST = 50;
class Gate {
private:
    unsigned int payCars;
    unsigned int noPayCars;
    unsigned int totalCash;
public:
    Gate() : payCars(0), noPayCars(0), totalCash(0) {}
   
    void payingCars() {
        payCars++;
        totalCash = payCars * COST;
    }

    void NopayingCars() {
        noPayCars++;
    }

    void print() {
        cout <<endl<< "K ���������� ���������� ����� : " << payCars<< endl <<" ���������� �� ���������� ����� : " << noPayCars << endl << " ����� ������� : " << totalCash << endl;
    }
};



int main() {
    SetConsoleOutputCP(1251);
    Gate gate;
   
    char key;

    cout << "������� '1' ��� �������� ������������� ��������." << endl;
    cout << "������� '0' ��� �������� �� ������������� ��������." << endl;
    cout << "������� 'ESC' ��� ���������� ������ � ������ �����������." << endl<< endl;

    
    while (true) {
        key = _getch(); 
        cout << key;
        if (key == '1') {
            gate.payingCars();
        }
        else if (key == '0') {
            gate.NopayingCars(); 
        }
        else if (key == 27) { 
            cout << endl;
            gate.print(); 
            break; 
        }
    }
    return 0;
}