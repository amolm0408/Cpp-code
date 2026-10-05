#include<iostream>
using namespace std;
class BasicInfo
{
public:
	int emp_id;
	string name;
public:
	void accept_bin() {
		cout<<"Enter employee ID: ";
		cin>> emp_id;
		cout<<"Enter employee name: ";
		cin>> name;
	}
	void display_bin() {
		cout<<"Employee ID : "<<emp_id<<endl;
		cout<<"Name : "<<name<<endl;
	}
};
class DeptInfo
{
public:
	string dept_name;
	string designation;
	void accept_din() {
		cout<<"Enter department: ";
		cin>> dept_name;
		cout<<"Enter designation: ";
		cin>> designation;
	}
	void display_din() {
		cout<<"Department : "<<dept_name<<endl;
		cout<<"Designation : "<<designation<<endl;
	}
};
class Employee : public BasicInfo, public DeptInfo
{
public:
	double salary;
	void accept_emp() {
		accept_bin();
		accept_din();
		cout<<"Enter salary: ";
		cin>>salary;
	}
	void display_emp() {
		cout<<endl<<"Employee Information"<<endl;
		display_bin();
		display_din();
		cout<<"Salary : "<<salary<<endl;
	}
};
int main() {
	Employee emp;
	emp.accept_emp();
	emp.display_emp();
	return 0;
}
