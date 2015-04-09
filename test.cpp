#include "getCardInfo.h"

#include <iostream>

using namespace std;


int main()
{
	string imgpath="D:\\FacesData\\114.214.166.107\\41\\ÉòĞñ¶«(340222198901066335).jpg";

	Card_Info card(imgpath);
    
	string name=card.get_card_name();
	string card_num=card.get_card_number();

	printf(name.c_str());
	printf("\n");
	printf(card_num.c_str());
	printf("\n");

	return 0;
}