#include<bits/stdc++.h>

using namespace std;

class employee
{
    public:
        string name;
        string designation;
        string supervisor;
        vector<string> department;
        void getDetails();
        void showDetails(employee&);
    
    employee()
    {
        
    }
    
    employee(string nam , string designation)
    {
        this->name = nam;

    }

};

void employee :: getDetails()
{
    int n;
    cout << "\nENter the name --> ";
    cin >> name;

    cout <<"\nEnter the designation --> ";
    cin >> designation;

    cout <<"Enter total departments --> ";
    cin >> n;
    
    string dept;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter department name " <<i << " --> " ;
        cin >> dept;
        department.push_back(dept);
    }
    
    
}

void employee :: showDetails(employee& emp)
{
    cout <<"Name --> " <<emp.name << endl;

    cout << "Designation --> " << emp.designation << endl;

    cout << "Departments : ";

    for (int i = 0; i < emp.department.size(); i++)
    {
        cout << "dept["<< i+1 << "] --> " << emp.department[i]<<endl;
    }
    
}


int main()
{
    int levels , empCount;

    employee * president = new employee("paul ross","president");

    cout << "Enter the total employees count --> " ;
    cin >> empCount;
    employee* emp = new employee[empCount];


    for (int i = 0; i < empCount; i++)
    {
        emp[i].getDetails();        
    }
    
    
    cout << "\n\n****** Details of the employees ******" << endl;

    for (int i = 0; i < empCount; i++)
    {
        emp[i].showDetails(emp[i]);
    }
    
    
    return 0;
}