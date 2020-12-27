
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class json
{
public:

	json() {
		static int count = 0;
		this->id = count;
		count++;
	}


	void addstringtoobject(int parentid, string attribute, string value) {
		property Property;
		Property.attribute = attribute;
		Property.value = value;
		this->properties->push_back(Property);
	};
	void addintegertoobject(int parentid, string attribute, int value) {
		property Property;
		Property.attribute = attribute;
		Property.value = value;
		this->properties->push_back(Property);

	};
	void addcontainertoobject(int parentid, string attribute, string value) {
		Property property;
		Property.attribute = attribute;
		Property.value = value;
		this->properties->push_back(Property);
	};



	//print

	void print() {
		cout << "Output of begin and end: ";
		for (auto i = Properties.begin(); i != g1.end(); ++i)
			cout << *i << " ";
	};

protected:
	int id;
	vector<property> properties;
};

class property {
public:
	string attribute;
	Value value;


protected:
};

class Value {
public:

protected:
};
class jsonstring : public Value {
public:
	string v;
};
class jsoninteger : public Value {
public:
	int v;
};
class jsonarray : public Value {
public:
	value v[];

};
class jsonobject : public Value {
public:
	json v;

};
class jsonfloat : public Value {
public:
	float v;

};


int main()
{
	json Json();
	Json.addintegertoobject(5, "size", 55);
	Json.print;


	

	return 0;
