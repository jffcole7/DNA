#include <iostream>
#include <string>
#include <ctime>

int main()
{
	std::string Response[]=
	{
		"I heard you!",
		"So, you are talking to me.",
		"Hold on one second, I have to go hit the wife.",
		"Yes, oh wait sorry. I wasn't paying attention. Who are you?",
		"Who are you?",
		"How bored could you possibly be to resort to conversing with a machine?"
	};
	srand((unsigned) time(NULL));

	std::string sInput = "";
	std::string sResponse = "";

	while(1)
	{
		std::cout << ">";
		std::getline(std::cin, sInput);
		int nSelection = rand() % 5;
		sResponse = Response[nSelection];
		std::cout << sResponse << std::end1;
		
	}
	return0;
}
