#include <iostream>
#include <string>


class Employee
{
	std::string name;
	int age;

	std::string position;	// 직책
	int rank;				// 순위

public:
	Employee(std::string _name, int _age, std::string _position, int _rank)
		: name(_name), age(_age), position(_position), rank(_rank) {}

	Employee(const Employee& employee)
	{
		name = employee.name;
		age = employee.age;
		position = employee.position;
		rank = employee.rank;
	}

	Employee() {}

	void print_info() {
		std::cout << name << " (" << position << " , " << age << ") ==> "
			<< calculate_pay() << "만원" << std::endl;
	}

	int calculate_pay() { return 200 + rank * 50; }
};

class EmployeeList
{
	int alloc_employee;
	int current_employee;
	Employee** employee_list;

public:
	EmployeeList(int _alloc_employee) : alloc_employee(_alloc_employee)
	{
		employee_list = new Employee*[alloc_employee];
		current_employee = 0;
	}

	void add_employee(Employee* employee)
	{
		if (alloc_employee <= current_employee)
		{
			alloc_employee *= 2;
			Employee** expanded_employee_list = new Employee*[alloc_employee];

			for (int i = 0; i < current_employee; i++)
				expanded_employee_list[i] = employee_list[i];

			delete[] employee_list;

			employee_list = expanded_employee_list;
		}

		current_employee++;
		employee_list[current_employee] = employee;
	}
};