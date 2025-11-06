#include<iostream>
#include<string>
using namespace std;

struct Student
{
    int ID;
    string name, gmail;
};

int main()
{
    Student student [3];
    
    for(int i = 0; i < 3; i++)
    {
        cout << "Student No." << i + 1 << " Name: ";
        cin >> student[i].name;
        
        cout << student[i].name << " Student ID: ";
        cin >> student[i].ID;
        
        cout << student[i].name << " Student Gmail Account: ";
        cin >> student[i].gmail;
    }
    
    cout << '\n' << '\n';
    
    for(int i = 0; i < 3; i++)
    {
        
        cout << "Details of student no." << i + 1 << " is " << student[i].name << '\n';
        cout << student[i].ID << '\n';
        cout << student[i].gmail << '\n' ;    
    }
}
