#define main_cpp
#include <string>
#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

class Main_Log
{
public:
	int logId;
	string name;
	int period = 0;
    int age = 0;
	string address;
	int getPeriod() {
		return this->period;
	}
	string getName() {
		return this->name;
	}
	string getAddress() {
		return this->address;
	}

	void setName(string name) {
		this->name = name;
	}

	void setAge(int age) {
		this->age = age;
	}

	void setAddress(string address) {
		this->address = address;
	}

	void setLogId(int logId) {
		this->logId = logId;
	}
	void toString() {
		cout << this->name << "," << this->age << "," << this->address << endl;
	}
    
	bool operator += (string cname) {
		if (cname == this->name) {
			return true;
		}
		else {
			return false;
		}

	}


	static bool existClient(string customerName, vector<Client> *totalClient)
	{
		for (vector<Client> ::iterator ite = totalClient->begin(); ite != totalClient->end(); ite++)
		{
			{
				if (ite->getName()==customerName) {
					return true;
				}
			}
			return false;
		}
	}

	static Client *getExistClient(string customerName, vector<Client> *totalClient)
	{
		for (vector<Client> :: iterator ite = totalClient->begin(); ite != totalClient->end(); ite++)
		{
			if (customerName == ite->getName())
			{
				return &(*ite);
			}
		}
	}
};

#endif
