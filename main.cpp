#include"Header.h"
int main()
{
	string candidatNAme;
	string check;
	char x1;
	char x;
	string yl = "y";
	candidate obj;
	while (yl == "y")
	{
		cout << "Enter the name of candidate you like:";
		cin.ignore();
		getline(cin, candidatNAme);
		check = obj.Read(candidatNAme);
		if (check != "-1")
		{
			cout << "\nThe candidate is found in the database.Already" << check << "people's vote it. Do you like it as well (y/n) ? ";
			cin >> x1;
			cout << "\nDo you want to vote another candidate (y/n) ? ";
			cin >> yl;
		}
		else
		{
			cout << "\nThe candidate is not found in the database. Do you want to add it to the list of candidates(y / n) ? ";
			cin >> x;
			if (x == 'y' || x == 'Y')
			{
				obj.write(candidatNAme);
				cout << "\nThe candidate " << candidatNAme << " is added to the database. It is liked by 1 person.\n";
			}
			cout << "\nDo you want to look for another candidate  (y/n) ? ";
			cin >> yl;
		}
	}
	obj.show();
	system("pause");
	return 0;
}