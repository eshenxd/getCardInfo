/*
 * 代码功能：获取合肥公安读卡器获取的照片的姓名和身份证号码
 * 代码作者：Ethan
 * 编写时间：2014/04/09
 */

#ifndef _GET_CARD_INFO_H_
#define _GET_CARD_INFO_H_

#include <iostream>

class Card_Info
{
public:
	Card_Info(std::string );
	~Card_Info();

	std::string get_card_name()const; //获取照片的姓名
	std::string get_card_number()const; //获取照片的身份证号码
private:

	std::string imageName;
	std::string name;
	std::string card_number;

};

#endif