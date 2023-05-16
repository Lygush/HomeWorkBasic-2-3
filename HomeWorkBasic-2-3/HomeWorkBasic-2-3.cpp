#include <iostream>

struct address
{
	std::string city{};
	std::string street{};
	int houseNumber{};
	int apartmentNumber{};
	int postcode{};
};

void Print(address);

int main()
{
	setlocale(LC_ALL, "Russian");

	address info;
	info.city = "Москва";
	info.street = "Полбина";
	info.houseNumber = 12;
	info.apartmentNumber = 34;
	info.postcode = 109344;
	Print(info);
	return 0;
}

void Print(address receiveInfo) {
	std::cout << "Город: " << receiveInfo.city << "\n";
	std::cout << "Улица: " << receiveInfo.street << "\n";
	std::cout << "Номер дома: " << receiveInfo.houseNumber << "\n";
	std::cout << "Номер квартиры: " << receiveInfo.apartmentNumber << "\n";
	std::cout << "Почтовый индекс: " << receiveInfo.postcode << "\n";
}
