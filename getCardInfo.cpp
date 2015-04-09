#include "getCardInfo.h"

using namespace std;

Card_Info::Card_Info(string path)
{
	char fname[50];

	_splitpath(path.c_str(),NULL,NULL,fname,NULL);

	imageName=(string)fname;
	int pos=imageName.find('(',0);
	name=imageName.substr(0,pos);
	card_number=imageName.substr(pos+1,18);
}

Card_Info::~Card_Info()
{

}

string Card_Info::get_card_name()const
{
	return name;
}

string Card_Info::get_card_number()const
{
	return card_number;
}