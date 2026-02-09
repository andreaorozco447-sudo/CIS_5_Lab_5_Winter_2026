#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib> 
#include <ctime>

using std::string;
using std::cout;
using std::endl;

struct BusinessCard {
	string companyName;
	string companyAddress;
	string phoneNumber;
	string workingHours;
	string representativePOC;
	int pricequote;


	//constructor
	BusinessCard(const std::string& n, const std::string& a, const std::string& p, const std::string& h, const std::string& c, int pr)
		: companyName(n), companyAddress(a), phoneNumber(p), workingHours(h), representativePOC(c), pricequote(pr) {
	}

	// Display full card info
	void displayCard() const {
		cout << std::left;
		cout << std::setw(20) << "Company Name: " << companyName << endl;
		cout << std::setw(20) << "Address: " << companyAddress << endl;
		cout << std::setw(20) << "Phone Number: " << phoneNumber << endl;
		cout << std::setw(20) << "Working Hours: " << workingHours << endl;
		cout << std::setw(20) << "Representative POC: " << representativePOC << endl;
		cout << std::setw(20) << "Price Quote: " << "$" << pricequote << endl;
		cout << "----------------------------------------" << endl;
	}

};

int main(){

// Seed random number generator
std::srand(static_cast<unsigned int>(std::time(nullptr)));

BusinessCard c1("AlphaTech", "123 Tech Lane", "555-1234", "9am-5pm", "John Doe", std::rand() % 500 + 100);
BusinessCard c2("BetaSolutions", "456 Solution St", "555-5678", "10am-6pm", "Jane Smith", std::rand() % 500 + 100);
BusinessCard c3("GammaCorp", "789 Corporate Blvd", "555-9012", "8am-4pm", "Jim Brown", std::rand() % 500 + 100);
BusinessCard c4("Delta Enterprises", "321 Enterprise Ave", "555-3456", "11am-7pm", "Jill White", std::rand() % 500 + 100);
BusinessCard c5("Epsilon LLC", "654 LLC Rd", "555-7890", "7am-3pm", "Jack Black", std::rand() % 500 + 100);

BusinessCard cards[5] = { c1, c2, c3, c4, c5 };
for (int i = 0; i < 5; ++i) {
	cout << "Business Card " << (i + 1) << ":\n";
	cards[i].displayCard();
}

	// Find the business card with the lowest price quote
	BusinessCard* lowestPriceCard = &cards[0];
	for (auto& card : cards) {
		if (card.pricequote < lowestPriceCard->pricequote){
			lowestPriceCard = &card;
		}
	}

	// Display Lowest price business card
	cout << "\nBusiness card with the lowest price quote:\n";
	cout << "=============================================\n";
	lowestPriceCard->displayCard();

	// Price Comparison Table
	cout << "\nPrice Comparison Table:\n";
	cout << "-------------------------------------------\n";
	cout << std::left << std::setw(20) << "Company Name" 
		<< std::setw(15) << "POC" 
		<< "Price Quote\n";

        for (const auto& card : cards) {
		cout << std::setw(20) << card.companyName
			<< std::setw(15) << card.representativePOC
			<< "$" << card.pricequote << endl;
	}
	cout << "-------------------------------------------\n";

	return 0;
}