#include <iostream>

class House // Creates the class House
{

private: // In this example, the atributes are all created as private to prevent unlimited external access.
	int RoomsNumber{ 4 };
	float Size{ 90.0f };
	bool bHasSuite{ true };

public: // The methods are public for an easier access to them.
	void ShowSize();
	int GetRoomsNumber(); // Returns the number of rooms stored in RoomsNumber variable.
	bool HasSuite(); // This boolean method returns if the house has a suite or not.
	void SetRoomsNumber(int Num); // The number of rooms can be set / altered with this method.
};

int main()
{
	House *BeachHouse = new House(); // 
	(*BeachHouse).ShowSize(); // Means the same as BeachHouse->ShowSize();
	(*BeachHouse).GetRoomsNumber(); // Means the same as (*BeachHouse)->GetRoomsNumber();
	BeachHouse->SetRoomsNumber(6); // Means the same as (*BeachHouse).SetRoomsNumber(22);
	std::cout << "\nRooms number: " << BeachHouse->GetRoomsNumber();
	std::cout << "\nDoes it has suite? ";
	BeachHouse->HasSuite() ? std::cout << " Yes." : std::cout << " No." << "\n"; // This statement sets the two possible values to answer if the house has suite.
	std::cout << "\n";
	system("PAUSE");
	return 0;
}

void House::ShowSize()
{
	std::cout << "\nSize: " << Size;
}

int House::GetRoomsNumber()
{
	return RoomsNumber;
}

bool House::HasSuite()
{
	return bHasSuite;
}

void House::SetRoomsNumber(int Num)
{
	if ((Num <= 6) && (Num >= 0)) // The house can't have zero rooms and its has a maximum of 6 rooms.
	{
		RoomsNumber = Num;
	}
	else
	{
		std::cout << "\Invalid number of rooms!\n";
	}

}