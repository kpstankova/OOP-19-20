#include "Ticket.h"
void Ticket::fillTicketInformation()
{
	char firstName[20];
	char surname[20];
	char familyName[20];
	int  age, egn;
	std::cout << "Enter starting point: ";
	std::cin >> startingPoint;
	std::cout << "Enter destination: ";
	std::cin >> destination;
	std::cout << "Enter date: ";
	std::cin >> date;
	std::cout << "Enter price: ";
	std::cin >> price;
	std::cout << "Enter flight seat: ";
	std::cin >> flightSeat;
	std::cout << "Enter duration: ";
	std::cin >> duration;
	std::cout << "Enter business class: ";
	std::cin >> businessClass;
	std::cout << "Enter holder's first name: ";
	std::cin >> firstName;
	std::cout << "Enter holder's surname: ";
	std::cin >> surname;
	std::cout << "Enter holder's family name: ";
	std::cin >> familyName;
	std::cout << "Enter holder's egn: ";
	std::cin >> egn;
	std::cout << "Enter holder's age: ";
	std::cin >> age;
	holder.setFirstName(firstName);
	holder.setSurname(surname);
	holder.setFamilyName(familyName);
	holder.setEgn(egn);
	holder.setAge(age);
}

void Ticket::changeDate(const char* date,
	double price,
	bool businessClass)
{
	strcpy_s(this->date,16, date);
	this->price = price;
	this->businessClass = businessClass;
}

void Ticket::printTicket() const
{
	std::cout << "The starting point is: " << startingPoint << std::endl;
	std::cout << "The final destination is: " << destination << std::endl;
	std::cout << "The date of the flight is: " << date << std::endl;
	std::cout << "The price is: " << price << std::endl;
	std::cout << "The flight seat is: " << flightSeat << std::endl;
	std::cout << "The duration of the flight is: " << duration << std::endl;
	if (businessClass) {
		std::cout << "The ticket is for business class." << std::endl;
	}
	else {
		std::cout << "The ticket is for economy class." << std::endl;
	}
	std::cout << "The name of the holder is: " <<
		holder.getFirstName() << " " <<
		holder.getSurname() << " " <<
		holder.getFamilyName() << " " << std::endl;
	std::cout << "The age of th holder is: " << holder.getAge() << std::endl;
	std::cout << "The egn of th holder is: " << holder.getEgn() << std::endl;

}



const char* Ticket::getStartingPoint() const
{
	return startingPoint;
}

const char* Ticket::getDestination() const
{
	return destination;
}

double Ticket::getPrice() const
{
	return price;
}

int Ticket::getFlightSeat() const
{
	return flightSeat;
}

int Ticket::getDuration() const
{
	return duration;
}

int Ticket::getHolderAge() const {
	return holder.getAge();
}

bool Ticket::getBusinessClass() const
{
	return businessClass;
}

const char* Ticket::getDate() const
{
	return date;
}

const char* Ticket::getHolderFirstName() const
{
	return holder.getFirstName();
}

const char* Ticket::getHolderSurname() const
{
	return holder.getSurname();
}

const char* Ticket::getHolderFamilyName() const
{
	return holder.getFamilyName();
}

void Ticket::changePerson(const Person& other)
{
	holder.setFirstName(other.getFirstName());
	holder.setSurname(other.getSurname());
	holder.setFamilyName(other.getFamilyName());
	holder.setEgn(other.getEgn());
	holder.setAge(other.getAge());
}