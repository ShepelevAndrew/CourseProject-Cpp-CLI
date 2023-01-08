#pragma once
#include <string>
#include <vector>

class Employee
{
private:
	long int _id;
	std::string _lastName;
	double _money;
	double _incomeTex;
	double _pensionFund;
	double _employmentFund;
	double _fullReceived;
	double _totalPayable;
public:
	//constructors
	Employee();
	Employee(long int id, std::string lastname, double money);

	//other methods
	void Account();

	//propeties
	long int GetId();
	std::string GetLastName();
	double GetMoney();
	double GetIncomeTex();
	double GetPensionFund();
	double GetEmploymentFund();
	double GetFullReceived();
	double GetTotalPayable();

	void SetId(long int id);
	void SetLastName(std::string lastname);
	void SetMoney(int money);
};