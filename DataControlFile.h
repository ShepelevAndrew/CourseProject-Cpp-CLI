#pragma once
#include "Employee.h"
#include <vector>

class DataControlFile
{
private:
	Employee _employee;
	//default path for db
	std::string _dbFile = "db.txt";
public:
	//constructors
	DataControlFile();
	DataControlFile(Employee employee);
	DataControlFile(Employee emp, std::string path);

	//CRUD methods for operations at database
	bool Create();
	std::vector<Employee> Read();
	bool Update(long int id, std::string lastname, double money, int index);
	bool Delete(int inddex);

	//other methods
	void SetPath(std::string path);

	//override method
	DataControlFile& operator= (const DataControlFile& db);
};
