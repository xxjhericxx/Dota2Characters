#include <iostream>
using namespace std;

int main()
{
	//Characters
	string Strength[3][3]={{"Abaddon  ","Axe        ","Mars"},
				 	       {"Alchemist","Balanar    ","Slardar"},
						   {"IO       ","Earthshaker","Huskar"}},
						   
			Agility[3][3]={{"Magina   ","Mortred    ","Morphling"},
						   {"Weaver   ","Nyx        ","Naga"},
						   {"Slark    ","Clinkz     ","Traxex"}},
						   
	   Intelligence[3][3]={{"Oracle   ","Lion       ","Rubick"},
						   {"Storm    ","Dazzle     ","Jakiro"},
						   {"Tinker   ","Techies    ","Lina"}},
						   
	
	CharacterNumber[10];
	int i,j,UserAttribute,num=1;
	
	
	
	//Display Character Names
	cout << "All Pick! \n\n\n\n";
	
	//Strength
	cout << "Strength:\n" << endl;
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			cout << Strength[i][j] << " ";
		}
	cout << "\n\n";	
	}
	
	//Agility
	cout << "\n\n\n\nAgility:\n" << endl; 
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			cout << Agility[i][j] << " ";
		}
	cout << "\n\n";	
	}
	
	//Intelligence
	cout << "\n\n\n\nIntelligence:\n" << endl; 
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			cout << Intelligence[i][j] << " ";
		}
	cout << "\n\n";
	}
	
	//User Decision
	cout << "\n\n\n\nChoose Character Attribute\n";
	cout << "Press:" <<endl;
	cout << "[1] Strength\n";
	cout << "[2] Agility\n";
	cout << "[3] Intelligence\n";
	cin >> UserAttribute;
	
	while (UserAttribute<1 || UserAttribute>3) // In case that the user gives invalid input
	{
		cout << "Please choose 1-3 only" << endl;
		cout << "Press:" <<endl;
		cout << "[1] Strength\n";
		cout << "[2] Agility\n";
		cout << "[3] Intelligence\n";
		cin >> UserAttribute;
		cin.clear();
		cin.ignore(1000, '\n');
	}
	system("cls");
	
	
	
	//Character Pick
	//Strength
	if (UserAttribute == 1)
	{
		cout << "Strength:\n" << endl;
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			cout <<"[" << num << "] " <<  Strength[i][j] << " ";
			CharacterNumber[num]=Strength[i][j];
			num++;
		}
	cout << "\n\n";
	}
	cout << "Choose Character: ";
	cin >> num;
	
		
	while (num <1 || num >9) // If the user gives invalid input
	{		
	num=1;
	cout << "\nYou can ONLY pick:\n" << endl;	
		
		for (i=0; i<3; i++)
		{
			for (j=0; j<3; j++)
			{
				cout <<"[" << num << "] " <<  CharacterNumber[num] << " ";
				num++;
			}
		cout << "\n\n"; 
		}
	cin >> num;
	cin.clear();
	cin.ignore(1000, '\n');
	}
	cout << "\nYou Picked " << CharacterNumber[num];	
	}
	
	
	//Agility
	else if (UserAttribute == 2)
	{
	cout << "Agility:\n" << endl;
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			cout <<"[" << num << "] " <<  Agility[i][j] << " ";
			CharacterNumber[num]=Agility[i][j];
			num++;
		}
	cout << "\n\n";
	}
		cout << "Choose Character: ";
		cin >> num;
		
	while (num <1 || num >9) // If the user gives invalid input
	{		
	num=1;
	cout << "\nYou can ONLY pick:\n" << endl;	
		
		for (i=0; i<3; i++)
		{
			for (j=0; j<3; j++)
			{
				cout <<"[" << num << "] " <<  CharacterNumber[num] << " ";
				num++;
			}
		cout << "\n\n"; 
		}
	cin >> num;
	cin.clear();
	cin.ignore(1000, '\n');
	}
	cout << "\nYou Picked " << CharacterNumber[num];	
	}
	
	//Intelligence
	else if (UserAttribute == 3)
	{
		cout << "Intelligence:\n" << endl;
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			cout <<"[" << num << "] " <<  Intelligence[i][j] << " ";
			CharacterNumber[num]=Intelligence[i][j];
			num++;
		}
	cout << "\n\n";
	}
		cout << "Choose Character: ";
		cin >> num;
		
	while (num <1 || num >9) // If the user gives invalid input
	{		
	num=1;
	cout << "\nYou can ONLY pick:\n" << endl;	
		
		for (i=0; i<3; i++)
		{
			for (j=0; j<3; j++)
			{
				cout <<"[" << num << "] " <<  CharacterNumber[num] << " ";
				num++;
			}
		cout << "\n\n"; 
		}
	cin >> num;
	cin.clear();
	cin.ignore(1000, '\n');
	}
	cout << "\nYou Picked " << CharacterNumber[num];	
	}
	
	return 0;
}
