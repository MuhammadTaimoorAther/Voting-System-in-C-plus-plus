#include <iostream>
#include<fstream>
#include <string>
#include <stdio.h>
#include <sstream> 
using namespace std;
class candidate 
{
private:
	int Serialno;
	string candidate_Name;
	int voter;
public:
	candidate();
	void write(string mn);
	string Read(string mn);
	void show();

};