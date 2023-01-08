#include "Employee.h"

//constructors
Employee::Employee(long int id, std::string lastname, double money) {
	_id = id;
	_lastName = lastname;
	_money = money;
	Account();
}
Employee::Employee() {
	_id = 0;
	_lastName = "";
	_money = 0;
	_incomeTex = 0;
	_pensionFund = 0;
	_employmentFund = 0;
	_fullReceived = 0;
	_totalPayable = 0;
}

//other methods
void Employee::Account() {
	_incomeTex = _money * 0.2; // found 20%
	_pensionFund = _money * 0.01; // found 1%
	_employmentFund = _money * 0.005; // found 0.5%
	_fullReceived = _incomeTex + _pensionFund + _employmentFund; // sum
	_totalPayable = _money - _fullReceived; // delta
}

//propeties
long int Employee::GetId() {
	return _id;
}
std::string Employee::GetLastName() {
	return _lastName;
}
double Employee::GetMoney() {
	return _money;
}
double Employee::GetIncomeTex() {
	return _incomeTex;
}
double Employee::GetPensionFund() {
	return _pensionFund;
}
double Employee::GetEmploymentFund() {
	return _employmentFund;
}
double Employee::GetFullReceived() {
	return _fullReceived;
}
double Employee::GetTotalPayable() {
	return _totalPayable;
}

void Employee::SetId(long int id) {
	_id = id;
}
void Employee::SetLastName(std::string lastname) {
	_lastName = lastname;
}
void Employee::SetMoney(int money) {
	_money = money;
}