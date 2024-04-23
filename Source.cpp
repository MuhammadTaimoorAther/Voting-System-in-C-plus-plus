#include"Header.h"
candidate::candidate()
{
	Serialno = 0;
	candidate_Name = "";
	voter = 0;
}
void candidate:: write(string mn)
{
	ofstream ofile;
	ofile.open("project.txt", ios::app);
	int count = 0;
	string line;
	ifstream file("project.txt");
	while (getline(file, line))
		count++;
	ofile << ++count << ", " << mn << ", 1" << endl;
	ofile.close();
}
string candidate:: Read(string mn)
{
	ifstream file("project.txt");
	string str;
	string s;
	while (getline(file, str)) {
		if (str.find(mn) != std::string::npos) {
			for (int i = str.length() - 1; i >= 0; i--)
			{
				if (str[i] != ',')
				{
					s += str[i];
				}
				else
					break;
			}
			reverse(s.begin(), s.end());
			return s;
		}
	}
	return "-1";
}
void candidate::show()
{
	ifstream file("project.txt");
	string str, str1;
	string s;
	int x = 0;
	string st[10];
	int sti[10];

	cout << "************" << endl;
	int i = 0;
	while (getline(file, str)) {

		str1 = str;
		st[i] = str;
		str1 = str1.substr(str1.length() - 3, str1.length() - 1);
		cout << str1 << endl;;
		stringstream geek(str1);
		geek >> x;
		sti[i] = x;
		i++;
	}
	int index = 0, ind[5];
	int largest = sti[0];
	for (int i = 0; i < 5; i++)
	{


		for (int i = 0; i < 10; i++) {

			if (largest < sti[i])
			{
				largest = sti[i];
				index = i;
			}

		}
		ind[i] = index;
	}
	cout << st[0];
	for (int i = 0; i < 5; i++)
	{
		cout << st[i] << endl;;
	}

}

