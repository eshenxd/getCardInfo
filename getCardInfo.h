/*
 * ���빦�ܣ���ȡ�Ϸʹ�����������ȡ����Ƭ�����������֤����
 * �������ߣ�Ethan
 * ��дʱ�䣺2014/04/09
 */

#ifndef _GET_CARD_INFO_H_
#define _GET_CARD_INFO_H_

#include <iostream>

class Card_Info
{
public:
	Card_Info(std::string );
	~Card_Info();

	std::string get_card_name()const; //��ȡ��Ƭ������
	std::string get_card_number()const; //��ȡ��Ƭ�����֤����
private:

	std::string imageName;
	std::string name;
	std::string card_number;

};

#endif