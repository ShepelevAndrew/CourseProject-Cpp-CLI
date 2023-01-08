#include "DataControlFile.h"
#include <fstream>

//constuctors
DataControlFile::DataControlFile() {}
DataControlFile::DataControlFile(Employee employee) {
	_employee = employee;
}
DataControlFile::DataControlFile(Employee emp, std::string path) {
	_employee = emp;
	_dbFile = path;
}

//CRUD methods for operations at database
bool DataControlFile::Create() {
	std::ofstream dataFile;
	dataFile.open(_dbFile, std::ofstream::app);

	if (dataFile.is_open()) {
		dataFile << "id: " << _employee.GetId() << "\n"
		 		 << "lastname: " << _employee.GetLastName() << "\n"
				 << "money: " << _employee.GetMoney() << "\n"
				 << "incomeTex: " << _employee.GetIncomeTex() << "\n"
			 	 << "pensionFund: " << _employee.GetPensionFund() << "\n"
				 << "employmentFund: " << _employee.GetEmploymentFund() << "\n"
				 << "fullReceived: " << _employee.GetFullReceived() << "\n"
				 << "totalPayable: " << _employee.GetTotalPayable() << "\n";
		dataFile.close();

		return true;
	}
	else {

	}
}
std::vector<Employee> DataControlFile::Read() {
	std::ifstream dataFile;
	dataFile.open(_dbFile, std::ifstream::app);
	
	std::vector<Employee> dataEmployee;
	Employee emp; 
	std::string str;
	long int id; std::string lastname;  double money;
	if (dataFile.is_open()) {
		while(!dataFile.eof()) {
			for(int i = 0; i < 8; i++) {
				getline(dataFile, str);
				str.erase(0, str.find_first_of(" ") + 1);

				if(str != "") { 
					if (i == 0) id = stoi(str);
					else if (i == 1) lastname = str;
					else if (i == 2) money = atof(str.c_str());
				}
			}
			if(str != "") {
				emp = Employee(id, lastname, money);
				dataEmployee.push_back(emp);
			}
 		}
		dataFile.close();
	}
	else {

	}
	return dataEmployee;
}

bool DataControlFile::Update(long int id, std::string lastname, double money, int index) {
	std::vector<std::string> vec;
	std::ifstream file(_dbFile);
	if (file.is_open())
	{
		std::string str;
		while (std::getline(file, str))
			vec.push_back(str);
		file.close();
		if (vec.size() < index)
			return false;

		Employee emp = Employee(id, lastname, money);
		index = index * 8 - 8;
		for (int i = 0; i < 8; i++) {
			if (i == 0) vec[index] = "id: " + std::to_string(emp.GetId());
			else if (i == 1) vec[index + i] = "lastname: " + emp.GetLastName();
			else if (i == 2) vec[index + i] = "money: " + std::to_string(emp.GetMoney());
			else if (i == 3) vec[index + i] = "incomeTex: " + std::to_string(emp.GetIncomeTex());
			else if (i == 4) vec[index + i] = "pensionFund: " + std::to_string(emp.GetPensionFund());
			else if (i == 5) vec[index + i] = "employmentFund: " + std::to_string(emp.GetEmploymentFund());
			else if (i == 6) vec[index + i] = "fullReceived: " + std::to_string(emp.GetEmploymentFund());
			else if (i == 7) vec[index + i] = "totalPayable: " + std::to_string(emp.GetTotalPayable());
		}
		std::ofstream outfile(_dbFile);
		if (outfile.is_open())
		{
			std::copy(vec.begin(), vec.end(),
				std::ostream_iterator<std::string>(outfile, "\n"));
			outfile.close();
			return true;
		}
		return false;
	}
	return false;
}

bool DataControlFile::Delete(int index) {
	std::vector<std::string> vec;
	std::ifstream file(_dbFile);
	if (file.is_open())
	{
		std::string str;
		while (std::getline(file, str))
			vec.push_back(str);
		file.close();
		if (vec.size() < index)
			return false;
		index = index * 8 - 8;
		for (int i = 0; i < 8; i++) {
			vec.erase(vec.begin() + index);
		}
		std::ofstream outfile(_dbFile);
		if (outfile.is_open())
		{
			std::copy(vec.begin(), vec.end(),
				std::ostream_iterator<std::string>(outfile, "\n"));
			outfile.close();
			return true;
		}
		return false;
	}
	return false;
}

//other method
void DataControlFile::SetPath(std::string path) {
	_dbFile = path;
}

//override methods
DataControlFile& DataControlFile::operator= (const DataControlFile& db)
{
	_employee = db._employee;

	return *this;
}