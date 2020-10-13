 
#include <iostream>
#include "TreeType.h"
using namespace std;

TreeType<string>avl;






int main()
{
	
	int option = 0;
	while (option!=3)
	{
		cout << "\n\t\tMENU\n\t1. Insert into AVL Tree\n\t2. Print AVL Tree\n\t3. Exit\n";
		cout << "Enter Option: ";
		cin >> option;
		if (option==1)
		{
			cout << "Enter the string: ";
			string i="";
			cin >> i;
			
			avl.InsertItem(i);
		}
		else if (option == 2) {
			cout << "\nNode\tLeft\tRight\n";
			avl.print();
		}
	}
	return 0;
}


